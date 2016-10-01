#pragma config(Hubs, S1, HTMotor, HTServo, none, none)
#pragma config(Sensor, S1, , sensorI2CMuxController)
#pragma config(Sensor, S2, compass, sensorI2CHiTechnicCompass)
#pragma config(Sensor, S3, sonar, sensorSONAR)
#pragma config(Sensor, S4, gyroscope, sensorI2CHiTechnicGyro)
#pragma config(Motor, motorA, Arm, tmotorNXT, PIDControl, encoder)
#pragma config(Motor, mtr_S1_C1_1, leftWheel, tmotorTetrix, openLoop, driveLeft)
#pragma config(Motor, mtr_S1_C1_2, rightWheel, tmotorTetrix, openLoop, driveRight)
#include "JoystickDriver.c"

string whatitsdoing = "nothing";

int getGyro() {
	return(SensorValue[gyroscope]);
}

void display() {
	if((SensorValue[compass] >= 345) && (SensorValue[compass] < 360) || (SensorValue[compass] >= 0 && SensorValue[compass] < 45)) {
		nxtDisplayBigTextLine(0, "north");
	} else if((SensorValue[compass] >= 45 && SensorValue[compass] < 135)) {
		nxtDisplayBigTextLine(0, "east");
	} else if(SensorValue[compass] >= 135 && SensorValue[compass] < 225) {
		nxtDisplayBigTextLine(0, "south");
	} else {
		nxtDisplayBigTextLine(0, "west");
	}
	nxtDisplayBigTextLine(2, whatitsdoing);
	nxtDisplayBigTextLine(4, "%d direction", SensorValue[compass]); // %d Is a placeholder where the variable after the comma (AKA the third parameter) replaces "%d"
	//nxtDisplayBigTextLine(4, "%d cm", SensorValue[sonar]); // This would displays the distance the ultrasonic sensor detects
	//nxtDisplayBigTextLine(4, "%d time", time100[T1]); // This would displays the stopwatch[T1] (there are 4 seperate stopwatches, 1,2,3,4) in milliseconds
	nxtDisplayBigTextLine(6, "%d gyro", getGyro());
}

task main() {
	while(true) {
		getJoystickSettings(joystick);
		display();

		// Example code for using the variable whatitsdoing
		if(joy1Btn(7)) { // LT
			// move forward
			whatitsdoing = "foreward";
			motor[leftWheel] = 10;
			motor[rightWheel] = 10;
		} else if(joy1Btn(8)) { // RT
			// move backward
			whatitsdoing = "backward";
			motor[leftWheel] = -10;
			motor[rightWheel] = -10;
		} else {
			whatitsdoing = "nothing";
			motor[leftWheel] = 0;
			motor[rightWheel] = 0;
		}
	}
}

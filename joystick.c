#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     leftWheel,        tmotorTetrix, openLoop, driveLeft)
#pragma config(Motor,  mtr_S1_C1_2,     rightWheel,        tmotorTetrix, openLoop, driveRight)
#pragma config(Motor,  motorA,    leftArm,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,    rightArm,        tmotorNXT, PIDControl, encoder)
//opens a joystick window
#pragma debuggerWindows("joystickSimple");
//looks for the Joystick and what the state of each button is
#include "JoystickDriver.c"

//to open the joystick window, go to Robot > LEGO Brick > Joystick Control - Basic
//then set the Primary Game Controller to Logitech Dual Action

task main() {
	// sets the minimum threshold the joystick has to be moved
	int minimum = 10;
	while (true) {
		getJoystickSettings(joystick);
		if (abs(joystick.joy1_y1) > minimum) { // > Minimum to avoid "drifting"
			int yTilt = joystick.joy1_y1;
			motor[leftWheel] = yTilt;
			// Do stuff
		} else {
			motor[leftWheel] = 0; // Stop moving when joystick is not being moved.
		}
		if (abs(joystick.joy1_y2) > minimum) {
			motor[rightWheel] = joystick.joy1_y2; // Makes the motor move faster if the joystick has more tilt
		} else {
			motor[rightWheel] = 0; // Stop Moving
		}
		if (joy1Btn(5)) { // LB
			// Do stuff
		}
		if (joy1Btn(6)) { // RB
			// Do stuff
		}
		if (joy1Btn(4)) { // Y
			// Do stuff
		}
		if (joy1Btn(2)) { // A
			// Do stuff
		}
		if (joy1Btn(1)) { // X
			// Do stuff
		}
		if (joy1Btn(3)) { // B
			// Do stuff
		}
		if (!(joy1Btn(4) || joy1Btn(1))) { // if neither Y nor X are being pressed
			// Do stuff
		}
		if (joy1Btn(2) && joy1Btn(3)) { // if both A and B are being pressed
			// Do stuff	
		}
		if (joy1Btn(7)) { // LT
				// Do stuff
		}
		if (joy1Btn(8)) { // RT
				// Do stuff
		}
	}
}

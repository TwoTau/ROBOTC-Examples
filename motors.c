#pragma config(Hubs, S1, HTMotor, HTMotor, none, none)
#pragma config(Sensor, S1, , sensorI2CMuxController)
#pragma config(Motor, mtr_S1_C1_1, rightMotor, tmotorTetrix, openLoop)
#pragma config(Motor, mtr_S1_C1_2, leftMotor, tmotorTetrix, openLoop)
#pragma config(Motor, mtr_S1_C2_1, shootingMotor, tmotorTetrix, openLoop)
#pragma config(Motor, mtr_S1_C2_2, motorD, tmotorTetrix, openLoop)

task main() {
    // drives robot for 100ms forward
    motor[rightMotor] = 100; // sets the right motor to 100% power
    motor[leftMotor] = 100; // same for left motor
    wait1Msec(100); // program waits 100ms = 0.1s (during this time, the right and left motors are running)
    motor[rightMotor] = 0; // stop right motor (set it to 0% power)
    motor[leftMotor] = 0; // stop left motor too
    // drive ends

    // shooting motor reverse
    // power shooting motor in reverse at 100% for 0.1 seconds
    motor[shootingMotor] = -100;
    wait1Msec(100);
    motor[shootingMotor] = 0;

    // shooting motor forward
    // power shooting motor at 100% for 0.1 seconds
    motor[shootingMotor] = 100;
    wait1Msec(100);
    motor[shootingMotor] = 0;
}

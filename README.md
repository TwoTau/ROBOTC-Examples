# ROBOTC-Examples
Contains examples and guides on how to do things with NXT robots using ROBOTC.

## motors.c
Move the robot and use shooting motors

## sensors.c
Use the compass, ultrasonic, and gyroscope sensors.

**Note: Incomplete**. The gyroscope returns rate of tilting, not the actual tilt, so we need to integrate it to get useful information.

## sensorTest.c
Makes sure all sensors are giving values.

Useful for debugging.

## joystick.c
Do stuff when buttons on a Logitech controller are pressed.

Note: the controller needs to be connected via USB to your computer.

Note: to open the joystick window, go to `Robot > LEGO Brick > Joystick Control - Basic`.

Troubleshooting: If the controller is not showing an output, then reset the Primary Game Controller.

## debugStreamExample.c
Show some information on the debug stream on the computer.

To view the debug stream, first go to `Window > Menu Level > Super User` then go to `Robot > Debugger Windows > Debug Stream`.

**Note:** the button will be greyed out until you start the program

## displayInformation.c
Display some information / arbitrary text on the NXT's screen.

## exampleSound.c
Play the Mario Bros theme song.

You can use [this converter](http://twotau.github.io/midi/) to convert your own notes into the correct format so that your robot can play it.

## timers.c
Shows how to use timers.

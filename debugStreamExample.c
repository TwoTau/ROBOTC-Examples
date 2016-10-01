#pragma config(Sensor, S3, Sonar, sensorSONAR)

// To view the debug stream, first go to window > Menu Level > Super User
// then go to Robot > Debugger Windows > Debug Stream
// Note: the button will be greyed out until you start the program

task main() {
	while(true) { // repeat forever
		int distance = SensorValue[Sonar];
		float distanceInFloatForm = SensorValue[Sonar] / 23; // float is basically a number with a decimal

		clearDebugStream(); // clears the Debug Stream

		writeDebugStream("Distance is: %d cm", distance); // writes value onto the debug stream

		writeDebugStreamLine("Float 2.5 is: %2.5f", distanceInFloatForm); // print Float with 2 values before decimal and 5 values after decimal

		nxtDisplayBigTextLine(3, "%d cm", distance); // displays value on the NXT's screen
	}
}

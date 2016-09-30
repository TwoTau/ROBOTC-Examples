#pragma config(Sensor, S3,     Sonar,          sensorSONAR)

// to view the debug stream, first go to window > Menu Level > Super User
// then go to Robot > Debugger Windows > Debug Stream
// note: the button will be greyed out unless you start the program

task main() {

	while(true) { // do forever
		int distance = SensorValue[Sonar];
    float distanceInFloatForm = SensorValue[Sonar] / 23; // float is basically a number with a decimal
    
		clearDebugStream(); // Clear the Debug Stream
    
		writeDebugStream("Distance is: %d cm", distance); // Writes value onto the debug stream
    
    writeDebugStreamLine("Float 2.5 is: %2.5f", distanceInFloatForm); // print Float with 2 values before decimal and 5 values after decimal 
		
    nxtDisplayBigTextLine(3, "%d cm", distance); // Displays value on the NXT Screen
	}
}

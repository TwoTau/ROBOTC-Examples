//tests that all sensors are working properly
//put the compass sensor in S1, gyroscope in S2, angle sensor in S3, and ultrasonic sensor in S4
//if one sensor is non-existent, then just delete the lines including the sensor

#pragma config(Sensor, S1,     compassSensor,  sensorI2CHiTechnicCompass)
#pragma config(Sensor, S2,     gyroscope,      sensorI2CHiTechnicGyro)
#pragma config(Sensor, S3,     angleSensor,          sensorSONAR)
#pragma config(Sensor, S4,     ultrasonic,          sensorSONAR)

task main() {
	while(true) {
		int gyro = SensorValue[gyroscope];
		nxtDisplayBigTextLine(1, "%d", gyro);
		
		int direction = SensorValue[compassSensor];
		nxtDisplayBigTextLine(3, "%d", direction);
		
		int angle = SensorValue[angleSensor];
		nxtDisplayBigTextLine(5, "%d", angle);
		
		int distance = SensorValue[Sonar];
		nxtDisplayBigTextLine(7, "%d cm", distance);
	}
}

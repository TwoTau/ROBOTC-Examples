#pragma config(Hubs, S1, HTMotor, HTServo, none, none)
#pragma config(Sensor, S4, compass, sensorI2CHiTechnicCompass)
#pragma config(Sensor, S3, sonar, sensorSONAR)
#pragma config(Sensor, S2, gyroscope, sensorI2CHiTechnicGyro)

// what the gyro value is when you first start the program. This is set in function main
int defaultGyroValue = 0;

int getCompass() 
{
  return SensorValue[compass];
}

int getSonar() 
{
  return SensorValue[sonar];
}

int getGyro() 
{
  return SensorValue[gyroscope] - defaultGyroValue;
}

task main() 
{
  defaultGyroValue = getGyro();
  
  while(true) 
  {
    // loop and do stuff
  }

}











int sensor1=0;
int sensor2=0;
int sensor3=0;
int sensor4=0;
int sensor5=0;
int sensor6=0;


void setup()
{

Serial.begin(9600);//change braud rate according to your need
//if using bluetooh keep braud rate according to it



  
}

void loop()
{
sensor1=analogRead(A0);
sensor2=analogRead(A1);
sensor3=analogRead(A4);
sensor4=analogRead(A5);

//This code show the all sensor value in single line
//comment "Serial.print("\t");" and add "Serial.println(sensor1);" to get the sensor value in different line



Serial.print("\t");
Serial.print("First sensor val= ");
Serial.println(sensor1);


Serial.print("\t");
Serial.print("Second sensor val= ");
Serial.print(sensor2);


Serial.print("\t");
Serial.print("Third sensor val= ");
Serial.print(sensor3);



Serial.print("\t");
Serial.print("Forth sensor val= ");
Serial.print(sensor4);



Serial.print("\t");
Serial.print("Fiftht sensor val= ");
Serial.print(sensor5);









  
}


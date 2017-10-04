






MIT License

Copyright (c) 2017 Ashwini kumar sinha

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


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


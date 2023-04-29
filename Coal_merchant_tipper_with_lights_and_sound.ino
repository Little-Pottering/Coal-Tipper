// Include the library

#include "DFRobotDFPlayerMini.h"
//#include "Arduino.h"
#include "SoftwareSerial.h"
#include <Servo.h>

SoftwareSerial mySoftwareSerial(2, 5); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

Servo tap_servo;

int sensor_pin = 14;
int led1 = 13;
int tap_servo_pin = 12;
int val;
int state = 0;


void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(sensor_pin, INPUT);
  tap_servo.attach(tap_servo_pin);
    
  mySoftwareSerial.begin(9600);
  myDFPlayer.begin(mySoftwareSerial);
  myDFPlayer.setTimeOut(400);
  myDFPlayer.volume(12);
  myDFPlayer.EQ(DFPLAYER_EQ_BASS);
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD);

}

void loop(){
  val = digitalRead(sensor_pin);
  if (val==LOW){
    digitalWrite(13, HIGH);   
    delay(4000);            
    myDFPlayer.play(1);
    delay(5000);
    {tap_servo.write(140);
    delay(500);
    tap_servo.write(135);
    delay(500);
    tap_servo.write(130);
    delay(500);
    tap_servo.write(125);
    delay(500);
    tap_servo.write(120);
    delay(500);
    tap_servo.write(115);
    delay(500);
    tap_servo.write(110);
    delay(500);
    tap_servo.write(105);
    delay(500);
    tap_servo.write(100);
    delay(500);
    tap_servo.write(95);
    delay(500);
    tap_servo.write(90);
    delay(500);
    tap_servo.write(85);
    delay(500);
    tap_servo.write(80);
    delay(500);
    tap_servo.write(75);
    delay(500);
    tap_servo.write(70);
    delay(500);
    tap_servo.write(65);
    delay(500);
    tap_servo.write(60);
    delay(500);
    tap_servo.write(55);
    delay(500);
    tap_servo.write(50);
    delay(500);
    tap_servo.write(45);
    delay(500);
    tap_servo.write(40);
    delay(500);
    tap_servo.write(35);
    delay(500);
    tap_servo.write(30);
    delay(500);
    tap_servo.write(25);
    delay(500);
    tap_servo.write(20);
    delay(500);
    tap_servo.write(15);
    delay(500);
    tap_servo.write(10);
    delay(500);
    tap_servo.write(5);
    delay(500);
    tap_servo.write(0);
    delay(500);
    tap_servo.write(15);
    delay(200);
    tap_servo.write(10);
    delay(200);
    tap_servo.write(5);
    delay(200);
    tap_servo.write(0);
    delay(5000);
    tap_servo.write(5);
    delay(200);
    tap_servo.write(40);
    delay(200);
    tap_servo.write(90);
    delay(200);
    tap_servo.write(120);
    delay(5000);
    (val==1);
  }}
  else {
    digitalWrite(13, LOW); 
    (val==1);
    tap_servo.write(140);
    //delay(500); //appears to be how long magnet has to be held
    myDFPlayer.disableLoopAll();
    delay(4000);             
    
  //(val==1);
  }
}
   
//  mp3_play (1);

  
  //int sensorState = digitalRead(sensor_pin);//***
 
 //if ((sensorState == LOW)) 
  //  if (val==0)//***
    //myDFPlayer.enableLoopAll();
//  }
//    delay(45000);//how long to play sound in milliseconds
//    myDFPlayer.disableLoopAll();
   // Make servo go to 180 degrees
//   delay(2000); //*****
//  {tap_servo.write(180); //****
//   delay(200000);
//}}

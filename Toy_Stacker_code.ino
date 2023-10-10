#include <Ps3Controller.h>

//Right motor
int rightMotorPin1=22;
int rightMotorPin2=23;
//Left motor
int leftMotorPin1=16;
int leftMotorPin2=17;
//Up motor
int upMotorPin1=18;
int upMotorPin2=19;
//auto
int autoPin1=32;
int autoPin2=33;

bool isForward = true;
bool unBrake = true;



void setup()
{
    Serial.begin(115200);
    Ps3.begin("00:1a:7d:da:71:10");
    Serial.println("Ready.");
    setUpPinModes();
}

void notify()
{
  int yAxisValue =(Ps3.data.analog.stick.ly);  //Left stick  - y axis - forward/backward car movement
  int xAxisValue =(Ps3.data.analog.stick.rx);  //Right stick - x axis - left/right car movement
    if (yAxisValue <= -50)       //Move car Forward
    {
      forward();
    }
    else if (yAxisValue >= 50)   //Move car Backward
    {
      backward();
    }
    else if (xAxisValue >= 50)  //Move car Right
    {
      right();
    }
    else if (xAxisValue <= -50)   //Move car Left
    {
      left();
    }
    else                          //Stop the car
    {
     motorstop();
    }
}

void loop()
{
    if(Ps3.isConnected()){
        if( Ps3.event.button_down.square ){
          if(unBrake){
            unBrake = false;
            Serial.println("Brake");
            motorstop();
          }
          else
          {
            unBrake = true;
            Serial.println("unBrake");
          }
          
        }
        notify();
        if( Ps3.data.button.cross ){
          Serial.println("Pressing the cross button");
          down();
        }
        else if( Ps3.data.button.triangle ){
          Serial.println("Pressing the triangle button");
          up();
        }
        else{
          updownmotorstop();
        }
        if(unBrake)
        {
          digitalWrite(autoPin1,LOW);
          digitalWrite(autoPin2,LOW);
        }
        else
        {
          digitalWrite(autoPin1,HIGH);
          digitalWrite(autoPin2,LOW);
        }
    }
}
void setUpPinModes()
{
  pinMode(rightMotorPin1,OUTPUT);
  pinMode(rightMotorPin2,OUTPUT);
  pinMode(leftMotorPin1,OUTPUT);
  pinMode(leftMotorPin2,OUTPUT);
  pinMode(upMotorPin1,OUTPUT);
  pinMode(upMotorPin2,OUTPUT);
  pinMode(autoPin1,OUTPUT);
  pinMode(autoPin2,OUTPUT);
}
void forward()
{
    if(unBrake)
    {
    digitalWrite(rightMotorPin1,HIGH);
    digitalWrite(rightMotorPin2,LOW);
    digitalWrite(leftMotorPin1,HIGH);
    digitalWrite(leftMotorPin2,LOW);
    Serial.println("forward");
    isForward = true;
    }
}
void backward()
{
    if(unBrake)
    {
    digitalWrite(rightMotorPin1,LOW);
    digitalWrite(rightMotorPin2,HIGH);
    digitalWrite(leftMotorPin1,LOW);
    digitalWrite(leftMotorPin2,HIGH);
    Serial.println("backward");
    isForward = false;
    }
}
void right()
{
    if(unBrake)
    {
    digitalWrite(rightMotorPin1,LOW);
    digitalWrite(rightMotorPin2,HIGH);
    digitalWrite(leftMotorPin1,HIGH);
    digitalWrite(leftMotorPin2,LOW);
    Serial.println("right");
    }
}
void left()
{
    if(unBrake)
    {
    digitalWrite(rightMotorPin1,HIGH);
    digitalWrite(rightMotorPin2,LOW);
    digitalWrite(leftMotorPin1,LOW);
    digitalWrite(leftMotorPin2,HIGH);
    Serial.println("left");
    }
}
void motorstop()
{
    digitalWrite(rightMotorPin1,LOW);
    digitalWrite(rightMotorPin2,LOW);
    digitalWrite(leftMotorPin1,LOW);
    digitalWrite(leftMotorPin2,LOW);
}
void up()
{
    digitalWrite(upMotorPin1,HIGH);
    digitalWrite(upMotorPin2,LOW);
    Serial.println("up");
}
void down()
{
    digitalWrite(upMotorPin1,LOW);
    digitalWrite(upMotorPin2,HIGH);
    Serial.println("down");
}
void updownmotorstop()
{
  digitalWrite(upMotorPin1,LOW);
  digitalWrite(upMotorPin2,LOW);
}

#include <Ps3Controller.h>
#include <analogWrite.h> 

//Right motor
int rightMotorPin1=22;
int rightMotorPin2=23;
//Left motor
int leftMotorPin1=16;
int leftMotorPin2=17;
//Up motor
int upMotorPin1=18;
int upMotorPin2=19;
//PWM
int pwmPin1=26;
int pwmPin2=27;


bool isForward = true;
bool unBrake = true;
bool isLPWM = false;



void setup()
{
    Serial.begin(115200);
    Ps3.attach(notify);
    Ps3.attachOnConnect(onConnect);
    Ps3.begin("00:1a:7d:da:71:10");
    Serial.println("Ready.");
    setUpPinModes();
    ledcSetup(0, 3000, 8);
    ledcAttachPin(pwmPin1, 0);
    ledcAttachPin(pwmPin2, 0);
    ledcWrite(0, 255);
}

void onConnect(){
  Serial.println("Connected!.");
}

void notify()
{
  int yAxisValue =(Ps3.data.analog.stick.ly);  //Left stick  - y axis - forward/backward car movement
  int xAxisValue =(Ps3.data.analog.stick.lx);  //Right stick - x axis - left/right car movement
  if( Ps3.event.button_down.start ){
    if (isLPWM)
    {
      isLPWM = false;
      Serial.println("PWM");
    }
    else
    {
      isLPWM = true;
      Serial.println("LPWM");
    }
  }
  if (isLPWM)
    {
      ledcWrite(0, 190);
    }
  else
    {
      ledcWrite(0, 255);
    }
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
  int yrAxisValue =(Ps3.data.analog.stick.ry);  
    if (yrAxisValue <= -50)       //Move car Forward
    {
      up();
    }
    else if (yrAxisValue >= 50)   //Move car Backward
    {
      down();
    }
    else                          //Stop the car
    {
     updownmotorstop();
    }

}

void loop()
{
}

void setUpPinModes()
{
  pinMode(rightMotorPin1,OUTPUT);
  pinMode(rightMotorPin2,OUTPUT);
  pinMode(leftMotorPin1,OUTPUT);
  pinMode(leftMotorPin2,OUTPUT);
  pinMode(upMotorPin1,OUTPUT);
  pinMode(upMotorPin2,OUTPUT);
  pinMode(pwmPin1,OUTPUT);
  pinMode(pwmPin2,OUTPUT);
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
}
void down()
{
    digitalWrite(upMotorPin1,LOW);
    digitalWrite(upMotorPin2,HIGH);
}
void updownmotorstop()
{
  digitalWrite(upMotorPin1,LOW);
  digitalWrite(upMotorPin2,LOW);
}

int p1 =7;
int m1 =8;
int p2 =9;
int m2 =10;

void setup()
{
  // put your setup code here, to run once:
pinMode(p1,OUTPUT);
pinMode(m1,OUTPUT);
pinMode(p2,OUTPUT);
pinMode(m2,OUTPUT);

Serial.begin(9600);



}

void fwd()
{
    // forward
digitalWrite(p1,HIGH);
digitalWrite(m1,LOW);
digitalWrite(p2,HIGH);
digitalWrite(m2,LOW);
}

void rev()
{
 // reverse
digitalWrite(m1,HIGH);
digitalWrite(p1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(p2,LOW); 
}

void rih()
{
 // right
digitalWrite(p1,LOW);
digitalWrite(m1,HIGH);
digitalWrite(p2,HIGH);
digitalWrite(m2,LOW); 
}

void lef()
{
  // left
digitalWrite(p1,HIGH);
digitalWrite(m1,LOW);
digitalWrite(p2,LOW);
digitalWrite(m2,HIGH);
}

void st0p()
{
digitalWrite(p1,HIGH);
digitalWrite(m1,HIGH);
digitalWrite(p2,HIGH);
digitalWrite(m2,HIGH); 
}


void loop() 
{
  
while(Serial.available())
{ // this Serial.available() function checks if there is data available or not at serial port.
char data = Serial.read(); // the incomming data from serial port is stored in the variable "data".
  Serial.print(data);  // to print the incomming data.
 if(data == 'F') // if the incomming data is "f" then excute the forward function
 {  
  fwd();
 }
 if(data == 'B')   // if the incomming data is "b" then excute the back function
 {   
  rev();
 }
 if(data == 'R')   // if the incomming data is "r" then excute the right function
 {    
  rih();
 }
 if(data == 'L')  //  if the incomming data is "l" then excute the left function
 {    
  lef();
 }
 if(data == 'S') // if the incomming data is "s" then excute the stop function
 {    
  st0p();
 }

}
}

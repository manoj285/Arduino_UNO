char data = 0; 
int RMF = 3; // IN1
int RMB = 4; //  IN2
int LMB = 5; // IN3
int LMF = 6; // IN4
void setup() 
{

 Serial.begin(9600);
   pinMode (RMF, OUTPUT); 
  pinMode (RMB, OUTPUT);
  pinMode (LMF, OUTPUT);
  pinMode (LMB, OUTPUT);
}
void loop()
{
   
  
  if(Serial.available() > 0) {
    data = Serial.read();      //Read the incoming data and store it into variable data
Serial.print(data);        //Print Value inside data in Serial monitor
Serial.print("\n");   
    if(data == 'F') //for forward  
    {
  Serial.println("omm F");
  digitalWrite(RMF, HIGH);
    digitalWrite (LMF, HIGH);
    digitalWrite(RMB,LOW);
    digitalWrite(LMB,LOW);
    delay(100); 
    }
   else if(data == 'O')//for stop
    {
  Serial.println("omm S");
  digitalWrite(RMF, LOW);
    digitalWrite (LMF, LOW);
    digitalWrite(RMB,LOW);
    digitalWrite(LMB,LOW);
    delay(100); 
    }
    else if(data == 'B')//for backward
    {
  Serial.println("omm B");
  digitalWrite(RMF, LOW);
    digitalWrite (LMF, LOW);
    digitalWrite(RMB,HIGH);
    digitalWrite(LMB,HIGH);
    delay(100); 
    }
  else if(data == 'K') //for right 
 {
  Serial.println("omm R");
  digitalWrite (RMF, LOW);
   digitalWrite (LMF, HIGH);
   digitalWrite (RMB, LOW);
   digitalWrite (LMB, LOW);
   delay (100);
   }
   else if(data == 'L')  //for left
 {
  Serial.println("omm L");
  digitalWrite (RMF,HIGH);
   digitalWrite (LMF, LOW);
   digitalWrite (RMB, LOW);
   digitalWrite (LMB, LOW);
   delay (100);
   }
   
    
    }
}

int trig = 9; // Declaring "TRIGGER" Pin
int echo = 10; // Declaring "ECHO" Pin

int LED1 = 2; // Declaring "LED's"
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;

int duration = 0; // Declaring Duration as Variable
int distance = 0; // Declaring Distance as Variable

void setup()
{
  pinMode(trig , OUTPUT); // Setting Up "TRIGGER" Pin
  pinMode(echo , INPUT); // Setting Up "ECHO" Pin
 
  pinMode(LED1 , OUTPUT); // Setting Up "LED's"
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
 
  Serial.begin(9600); // Setting Up "SERIAL MONITOR"

}

void loop()
{
  digitalWrite(trig , HIGH); // Setting Trigger Pin as 'HIGH'
  delayMicroseconds(1000); // Delay of 1000 Microseconds
  digitalWrite(trig , LOW); // Setting Trigger Pin as 'LOW' after the Delay 


  duration = pulseIn(echo , HIGH); // Value of duration
  distance = (duration/2) / 28.5 ; // Value of distance
  Serial.println(distance); // Printing the distance
 

  if ( distance <= 5 ) // Declaring Conditions 
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
  if ( distance <= 7 )
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
  if ( distance <= 10 )
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= 15 )
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4, LOW);
  }
  if ( distance <= 17 )
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5, LOW);
  }
  if ( distance <= 20 )
  {
    digitalWrite(LED6, HIGH);
  }
  else
  {
    digitalWrite(LED6, LOW);
  }
  if ( distance <= 25 )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
    digitalWrite(LED7, LOW);
  }
}

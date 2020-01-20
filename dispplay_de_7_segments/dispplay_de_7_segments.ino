/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led5 = 5;          // donar nom al pin 8 de l’Arduino
const int led6 = 6;          // donar nom al pin 9 de l’Arduino
const int led7 = 7;          // donar nom al pin 10 de l’Arduino

const int ButtonPin = 4;     // donar nom al pin 4 de l’Arduino
int ButtonState = 0;
//********** Setup ****************************************************************

void setup()
{
  Serial.begin(9600);
  }

//********** Loop *****************************************************************
void loop()
{
  ButtonState = digitalRead (ButtonPin);
  Serial.println(ButtonState);
  if (ButtonState == LOW)
  {

  pinMode(led5, LOW);     
  pinMode(led6, LOW);     
  pinMode(led7, LOW);     

  delay(500);
  }

 if (ButtonState == HIGH)
  {
  pinMode(led5, LOW);     
  pinMode(led6, LOW);     
  pinMode(led7, HIGH); 

  delay(500);
  }

  if (ButtonState == HIGH)
  {
  pinMode(led7, LOW);     
  pinMode(led6, HIGH);     
  pinMode(led7, LOW); 

  delay(500);
  }

  if (ButtonState == LOW)
  {
  pinMode(led5, LOW);     
  pinMode(led6, HIGH);     
  pinMode(led7, HIGH); 

  delay(500);
  }
 if (ButtonState == LOW)
 {
  pinMode(led5, HIGH);     
  pinMode(led6, LOW);     
  pinMode(led7, LOW); 

  delay(500);
 }
  if (ButtonState == LOW)
  {
  pinMode(led5, HIGH);     
  pinMode(led6, LOW);     
  pinMode(led7, HIGH); 

  delay(500);
  }
  if (ButtonState == LOW)
  {
  pinMode(led5, HIGH);     
  pinMode(led6, HIGH);     
  pinMode(led7, LOW); 

  delay(500);
  }
  if (ButtonState == LOW)
   {
  pinMode(led5, HIGH);     
  pinMode(led6, HIGH);     
  pinMode(led7, HIGH);

  delay(500);
   }
 
 }

  
 

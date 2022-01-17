/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
 
//********** Variables ************************************************************
const byte segA= 5;
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11;         
const byte buttonPin = 2;
byte buttonState= 0;
const long temps= 100;
//********** Setup ****************************************************************
void setup()
{
 pinMode (segA, OUTPUT);  
 pinMode (segB, OUTPUT);          
 pinMode (segC, OUTPUT);          
 pinMode (segD, OUTPUT);  
 pinMode (segE, OUTPUT);
 pinMode (segF, OUTPUT);
 pinMode (segG, OUTPUT);
 pinMode (buttonPin, INPUT);

  }
//********** Loop *****************************************************************
void loop()
{
  buttonState = digitalRead (buttonPin);
  while (buttonState == 0)
{
  digitalWrite (segA, HIGH);
  digitalWrite (segB, HIGH);
  digitalWrite (segC, HIGH);     //NUMERO 0
  digitalWrite (segD, HIGH);
  digitalWrite (segE, HIGH);
  digitalWrite (segF, HIGH);
  digitalWrite (segG, LOW);
  delay (temps);

  digitalWrite (segA, LOW);
  digitalWrite (segB, HIGH);
  digitalWrite (segC, HIGH);     //NUMERO 1
  digitalWrite (segD, LOW);
  digitalWrite (segE, LOW );
  digitalWrite (segF, LOW);
  digitalWrite (segG, LOW);
  delay (temps);

  digitalWrite (segA, HIGH);
  digitalWrite (segB, HIGH);
  digitalWrite (segC, LOW);
  digitalWrite (segD, HIGH);     //NUMERO 2
  digitalWrite (segE, HIGH);
  digitalWrite (segF, LOW);
  digitalWrite (segG, HIGH);
  delay (temps);

   digitalWrite (segA, HIGH);
  digitalWrite (segB, HIGH);
  digitalWrite (segC, HIGH);
  digitalWrite (segD, HIGH);
  digitalWrite (segE, LOW);
  digitalWrite (segF, LOW);    //NUMERO 3 
  digitalWrite (segG, HIGH);
  delay (temps);

   digitalWrite (segA, LOW);
  digitalWrite (segB, HIGH);
  digitalWrite (segC, HIGH);
  digitalWrite (segD, LOW);   //NUMERO 4
  digitalWrite (segE, LOW);
  digitalWrite (segF, HIGH);
  digitalWrite (segG, HIGH);
  delay (temps);

   digitalWrite (segA, HIGH);
  digitalWrite (segB, LOW);
  digitalWrite (segC, HIGH);
  digitalWrite (segD, HIGH);   //NUMERO 5
  digitalWrite (segE, LOW);
  digitalWrite (segF, HIGH);
  digitalWrite (segG, HIGH);
  delay (temps);

   digitalWrite (segA, LOW);
  digitalWrite (segB, LOW);
  digitalWrite (segC, HIGH);
  digitalWrite (segD, HIGH);   //NUMERO 6
  digitalWrite (segE, HIGH);
  digitalWrite (segF, HIGH);
  digitalWrite (segG, HIGH);
  delay (temps);

   digitalWrite (segA, HIGH);
  digitalWrite (segB, HIGH);
  digitalWrite (segC, HIGH);
  digitalWrite (segD, LOW);   //NUMERO 7
  digitalWrite (segE, LOW);
  digitalWrite (segF, LOW);
  digitalWrite (segG, LOW);
  delay (temps);

   digitalWrite (segA, HIGH);
  digitalWrite (segB, HIGH);
  digitalWrite (segC, HIGH);
  digitalWrite (segD, HIGH);   //NUMERO 8
  digitalWrite (segE, HIGH);
  digitalWrite (segF, HIGH);
  digitalWrite (segG, HIGH);
  delay (temps);

   digitalWrite (segA, HIGH);
  digitalWrite (segB, HIGH);
  digitalWrite (segC, HIGH);
  digitalWrite (segD, LOW);   //NUMERO 9
  digitalWrite (segE, LOW);
  digitalWrite (segF, HIGH);
  digitalWrite (segG, HIGH);
  delay (temps);
}

  }
//********** Funcions *************************************************************

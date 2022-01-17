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
const long temps= 500
;
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
  digitalWrite (segA, HIGH);
  digitalWrite (segB, LOW);
  digitalWrite (segC, LOW);     //NUMERO E
  digitalWrite (segD, HIGH);
  digitalWrite (segE, HIGH);
  digitalWrite (segF, HIGH);
  digitalWrite (segG, HIGH);
  delay (temps);

  digitalWrite (segA, LOW);
  digitalWrite (segB, LOW);
  digitalWrite (segC, LOW);     //NUMERO R
  digitalWrite (segD, LOW);
  digitalWrite (segE, HIGH );
  digitalWrite (segF, LOW);
  digitalWrite (segG, HIGH);
  delay (temps);

  digitalWrite (segA, LOW);
  digitalWrite (segB, LOW);
  digitalWrite (segC, LOW);
  digitalWrite (segD, LOW);     //NUMERO I
  digitalWrite (segE, HIGH);
  digitalWrite (segF, HIGH);
  digitalWrite (segG, LOW);
  delay (temps);

   digitalWrite (segA, HIGH);
  digitalWrite (segB, LOW);
  digitalWrite (segC, LOW);
  digitalWrite (segD, HIGH);
  digitalWrite (segE, HIGH);
  digitalWrite (segF, HIGH);    //NUMERO C
  digitalWrite (segG, LOW);
  delay (temps);

  
  }
//********** Funcions *************************************************************

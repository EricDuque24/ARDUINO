/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //E   ** Exemple Eric **
  punt();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //I
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //C
  ratlla();
  punt ();
  ratlla ();
  punt ();
  //Espai entre paraules
  espaiP ();
  //D
  ratlla();
  punt ();
  punt ();
  //espai entre lletres
  espaiL ();
  //U
  punt ();
  punt ();
  ratlla();
  //espai entre lletres
  espaiL ();
  //Q
  punt ();
  punt();
  ratlla();
  punt();
  //espai entre lletres
  espaiL ();
   //U
  punt ();
  punt ();
  ratlla();
  //espai entre lletres
  espaiL ();
  //E
  punt ();
  //Espai entre paraules
  espaiP();
  //B
  ratlla ();
  punt ();
  punt ();
  punt ();
   //espai entre lletres
  espaiL ();
  //O
  ratlla ();
  ratlla ();
  ratlla ();
   //espai entre lletres
  espaiL ();
  //S
  punt ();
  punt ();
  punt ();
     //espai entre lletres
  espaiL ();
  //S
  punt ();
  punt ();
  punt ();
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

/*
  Titre      : Titre du programme
  Auteur     : Assane Seck
  Date       : 29/11/2021
  Description: Une description du programme
  Version    : 0.0.1
*/






#include <Arduino.h> 

void BlinkLed() ;



// définition des broches
const int LED_ROUGE_1 = 14 ;
const int LED_JAUNE_1 = 13 ;
const int LED_VERTE_1 = 12 ;
const int LED_ROUGE_2 = 11 ;
const int LED_JAUNE_2 = 10 ;
const int LED_VERTE_2 = 9 ;
int Led ;

void setup()
{
    // initialisation en sortie de toutes les broches
    pinMode (LED_ROUGE_1 , OUTPUT) ;
    pinMode (LED_JAUNE_1 , OUTPUT) ;
    pinMode (LED_VERTE_1 , OUTPUT) ;
    pinMode (LED_ROUGE_2 , OUTPUT) ;
    pinMode (LED_JAUNE_2 , OUTPUT) ;
    pinMode (LED_VERTE_2 , OUTPUT) ;

    // on initialise toutes les LED éteintes au début du programme
    // (sauf les deux feux rouges)
   digitalWrite (LED_ROUGE_1 , HIGH) ;
   digitalWrite (LED_JAUNE_1 , LOW) ;
   digitalWrite (LED_VERTE_1 , LOW) ;
   digitalWrite (LED_ROUGE_2, HIGH) ;
   digitalWrite (LED_JAUNE_2 , LOW) ;
   digitalWrite (LED_VERTE_2, LOW) ;

}

void loop() {
    // première séquence
    digitalWrite(LED_ROUGE_1, HIGH);
     BlinkLed() ;
    digitalWrite(LED_VERTE_2, HIGH);
    digitalWrite(LED_ROUGE_2, LOW) ;

    delay(6000);

    // deuxième séquence
    digitalWrite(LED_VERTE_2, LOW);
    digitalWrite(LED_JAUNE_1, HIGH);
    digitalWrite(LED_JAUNE_2, HIGH) ;
    


    delay(2000);

    // troisième séquence
    digitalWrite(LED_JAUNE_1, LOW);
    digitalWrite(LED_JAUNE_2, LOW);
    digitalWrite(LED_ROUGE_2, HIGH);
    BlinkLed() ;
    digitalWrite(LED_VERTE_1, HIGH) ;
    digitalWrite(LED_ROUGE_1, LOW) ;

    delay(6000);

    // Phase 4 : V1 éteint et J1, J2 et R2 allumés
    digitalWrite(LED_VERTE_1, LOW);   
    digitalWrite(LED_JAUNE_1, HIGH);  
    digitalWrite(LED_JAUNE_2, HIGH);  
    digitalWrite(LED_ROUGE_2, HIGH);
      
    delay(2000) ;

}

void BlinkLed(){
   pinMode(Led, OUTPUT);


  digitalWrite(Led, HIGH);   // allume la LED
  delay(1000);                 // attend 500ms
  digitalWrite(Led, LOW);    // éteint la LED
  delay(1000);                 // attend 500ms
}


/*NIAK NIAK*/

#include <stdlib.h>
#include "SPI.h"

int ss = 10; //On selectionne la pin "select slave"

void setup() {                
// Turn the Serial Protocol ON
  Serial.begin(9600);
  pinMode(5, OUTPUT); // pwm de sortie x2

  //setup momo spi
  pinMode(ss, OUTPUT); // On definit la pin ss en output
  SPI.begin(); // On "reveille" la liaison SPI
  SPI.setBitOrder(MSBFIRST); // On définit l'Ordre d'envoie des bits
}

char buff[10]="000000000";
float data = 0;
int i = 0;
int tosend= 0;

//momo variables
int tension=0x0000;
int adress=0x00;
int value0 = 0;
int value1 = 0;
int charnumb = 0;

void loop() {
  char current;
  if (Serial.available()){
      current = Serial.read();
      
      if (current == '$') { // debut de trame
         charnumb = 0;
         //buff[charnumb]=current;
         //charnumb++;
      }
      else if (current == '%') {
        //buff[charnumb]=current;
        data = atof(buff);
        Serial.write(buff);
      }
      else if (charnumb>= 0) { // fin de la trame
        buff[charnumb]=current;
        //Serial.write(buff[charnumb]);
        charnumb++;  
      }

  
  }
  tosend = map(data,1,99 , 1, 254);
  tension=map(data, 1,99, 1, 0xFFFF);
  //analogWrite(10, tosend); 
  analogWrite(5, tosend);

  //momo SPI
   value1 = (tension >> 8); // On decale tension de 8 bits vers la droite
   value0 = (tension & 0x00FF); // On garde que les 8 bits les plus faible
  //int value1 = adress << 4 | value; // On concatene les 4 bit d'adress et les 4 plus fort bit de tension
  
  digitalWrite(ss, LOW); // On choisit l'esclave
  SPI.transfer(adress);
  SPI.transfer(value1); // Transfert des 8 bits les plus forts
  SPI.transfer(value0); // Transfert des 8 bits les plus faible
  digitalWrite(ss, HIGH); // On termine la liaison
   
}

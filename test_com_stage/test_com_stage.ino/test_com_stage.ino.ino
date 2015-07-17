/* Simple Serial ECHO script : Written by ScottC 03/07/2012 */

/* Use a variable called byteRead to temporarily store
   the data coming from the computer */

#include <stdlib.h>

byte byteRead;

void setup() {                
// Turn the Serial Protocol ON
  Serial.begin(9600);
  pinMode(11, OUTPUT); // pwm de sortie x2
  pinMode(10, OUTPUT);
}

char buff[10]="000000000";
float data = 0;
int i = 0;
int tosend= 0;
void loop() {
  char current;
  if (Serial.available()){
      current = Serial.read();
      Serial.write(current);
      if (current == '$') {
        i=0;
        
      }
      else if (current == '%') {
        data = atoi(buff);
        Serial.print("data :");
       Serial.print(buff);
       Serial.print("\n");
       i=0;
      }
      else {
        buff[i]=current; 
      }
      i++;

  
  }
  tosend = map(int(data), 1,99 , 0, 254);
  analogWrite(10, tosend); 
  analogWrite(11, tosend); 
}

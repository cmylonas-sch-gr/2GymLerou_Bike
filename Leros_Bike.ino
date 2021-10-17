
#include <Keyboard.h>
/*Βιβλιοθήκη που χρειάζεται για να λειτουργεί το 
  arduino leonardo ή το micro ως πληκτρολόγιο */

void setup() {
  pinMode(2, INPUT_PULLUP);
  /*Στο digital Pin 2 συνδέουμε τον αισθητήρα συναγερμού 
    (μαγνητική επαφή) χρησιμοποιώντας την διάταξη input pullup.*/

  Keyboard.begin();
}

void loop() {
  int sensorVal = digitalRead(2);
  /*Διαβάζει την τιμή του αισθητήρα. Όταν κλείνει το 
    κύκλωμα της παγίδας δίνει την τιμή LOW.*/
  
  if (sensorVal == LOW) {
    Keyboard.write(KEY_UP_ARROW);
    /*Όταν διαβάσει την τιμή LOW, ενεργοποιεί το "πληκτρολόγιο" 
      πατώντας το πάνω βελάκι, οπότε προχωρά η εικόνα στο Google Maps
      μία θέση προς τα εμπρός.*/
    
    delay(100);
  }
}

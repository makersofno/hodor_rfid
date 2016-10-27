#include <Wiegand.h>

WIEGAND wg;

int relayPin = 12;
int cards[] = {}; //insert comma-separated list of authorized rfid cards

void setup() {
    Serial.begin(9600);  
    wg.begin();
    pinMode(relayPin, OUTPUT);
    digitalWrite(relayPin, LOW);
}

void loop() {
    if(wg.available())
    {
        int card = wg.getCode(); 
        Serial.println(card); 
        for (int i = 0; i < 25; i++){
          if (card == cards[i]){
             digitalWrite(relayPin, HIGH);
             delay(3000);
             digitalWrite(relayPin, LOW);
             delay(3000);
             }
        }
    }
}

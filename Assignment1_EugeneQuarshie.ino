//ASSIGNMENT 1
//NAME : QUARSHIE EUGENE NII OFORI
//INDEX NO : 2526403795
int initialValue = 5;
int ledPin = 13;
 
void flashLED(int times) {
    int i;
    for(i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);//TURNS ON THE LED
    delay(200);
    digitalWrite(ledPin, LOW);//TURN OFF THE LED
    delay(200);
    }
}

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
     Serial.println(" ");
    Serial.println("=== Smart Countdown Starting ===");
 
    int Count = initialValue;
    while (Count != 0) {
        Serial.print("Count is : ");
        Serial.println(Count);
 
        flashLED(8); // blink the LED
        delay(1000);
        Count = Count - 1;
    }

    Serial.println("=== Countdown Complete ===");
}
 
void loop() { 
    
}




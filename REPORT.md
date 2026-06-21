               NAME : QUARSHIE EUGENE NII OFORI
               INDEX NUMBER : 2526403795
               PROGRAMME : COMPUTER ENGINEERING (GROUP B)        
MY REPORT
     TASK 1
1. What is the difference between int and float? Give one example of when you would use each. An int is a data type that holds whole numbers without any decimals, whereas a float holds numbers that include decimals.
•	Example for int: You would use an int for counting items, such as int age = 19;. 

•	Example for float: You would use a float for precise measurements, such as float voltage = 3.3;. 

2. What happens if you forget to write Serial.begin(9600) in setup()? 
Try it and explain what you observe. 
If you forget to include Serial.begin(9600);, the Arduino does not open the line of communication with the computer. As a result, when you open the Serial Monitor, it will be completely blank, and none of the message you  printed will appear. 
3. Why does the output appear only once and not over and over? 
The setup() function runs only one time when the Arduino powers on. 
                                   TASK 2
1.	Why do we put pinMode(ledPin, OUTPUT); inside setup() and not inside loop()?
 Because we only need to tell the Arduino what we plan to do with the pin one time when the board starts up. Putting it in the loop() would the LED blink the pin over and over. 
2. What would happen if we removed both delay() calls? Predict first, then try it and describe what you actually see.
•	Prediction: The LED will turn on and off instantly without any pauses, meaning it will switch states too fast to see.
•	Observation: The LED appears to dimly lit continuously . Because it is switching between HIGH and LOW much faster than our eyes can see. 

3. If you wanted the LED to be ON for 3 seconds and OFF for half a second, which values would you change and to what? You would change the values of the delay variables at the top of the program. You would set onTime = 3000; (3 seconds) and offTime = 500; (half a second).
4. 
                                         TASK 3
1. In your own words, explain what a parameter is.  A parameter is an input that a function expects to receive when you call it. In the example blinkOnce(int waitTime), the parameter waitTime acts as a placeholder for the specific number you pass in to control the delay. 
2. Why is it useful to put repeating code into a function instead of writing it three times in loop()? Putting repeating code into a function keeps your code from becoming messy as the program grows. It allows you to write the logic once and reuse it simply by calling the function's name, which makes the code much cleaner and easier to update. 
3. Could you write blinkOnce without taking any parameter at all? If yes, how would you make it blink at different speeds without parameters? Yes, you could write flashled without taking any parameters. To make it blink at different speeds without parameters, you would either need to change the values of global variables (like onTime and offTime) right before calling the function each time, or you would have to write multiple separate functions for different speeds 

TASK 4
1.	What is the role of the line counter = counter - 1;? 
What would happen without it? 
. Without this line, the value of the counter would never change, meaning the condition counter > 0 would remain true forever. 
2. Rewrite the countdown to start from 7 instead of 5. (Paste just the changed lines in your report.)
C++
  int counter = 7; // start the counter at 7
(This replaces int counter = 5; )
2.	In your own words, what is the difference between setup() and a while loop? They both run code — what makes them different? 
The setup() function is a special block of code that runs exactly ONE time automatically when the Arduino is powered on. A while loop is a control structure that tells the Arduino to keep repeating a block of code as long as a specific condition remains true. The while loop stops once its condition becomes false. 

TASK 5
1.
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
3.	Describe one bug or mistake you ran into while writing this program and how you fixed it.
When writing the function, I initially forgot to include the semi-colon which made my code not run.
3. If you wanted the program to count DOWN by 2 each step (5, 3, 1) instead of by 1, what would you change? I would change the subtraction line inside the main while loop in setup(). Instead of count = count - 1;, I would change it to count = count - 2;. 
4. If you wanted the LED to also stay ON for a final 5 seconds after the countdown completes, where in the code would you add this and what would the code look like?
 I would add this code inside setup(), directly after the while loop finishes and right before (or after) the "Countdown Complete" message is printed. The code would look like this: 
  digitalWrite(ledPin, HIGH);
  delay(5000);


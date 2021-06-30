int WATER_PUMP = 9;
int IR_SENSOR = 11;

void setup() {
 pinMode(WATER_PUMP, OUTPUT); 
 pinMode(IR_SENSOR, INPUT);
}

void loop() {
  int cupPresent = digitalRead(IR_SENSOR);

  if (cupPresent == 0) {
    digitalWrite(LED_BUILTIN, HIGH); 

    digitalWrite(WATER_PUMP, HIGH);   // turn  Water pump ON
    delay(35000);                     // Fill 125ml of water in a glass
    digitalWrite(LED_BUILTIN, LOW);   
  
    digitalWrite(WATER_PUMP, LOW);    // turn the LED off by making the voltage LOW
    delay(60UL * 60UL * 1000UL); // Wait 1 hour
    
  } else {
    delay (1000); // Cup not present, waiting
  }
  
}

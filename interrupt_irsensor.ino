#define IR_SENSOR_PIN 14
#define LED_PIN 2

void IRAM_ATTR IRinterrupt() {
  if (digitalRead(IR_SENSOR_PIN) == LOW) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(IR_SENSOR_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  
  Serial.println("Execution Started...");

  
  attachInterrupt(digitalPinToInterrupt(IR_SENSOR_PIN), IRinterrupt, CHANGE);

  delay(10000);

  detachInterrupt(digitalPinToInterrupt(IR_SENSOR_PIN));
  digitalWrite(LED_PIN, LOW); 

  Serial.println("Execution Ended");
}

  



 

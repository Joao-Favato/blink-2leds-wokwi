void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   
  digitalWrite(7, LOW);
  delay(5000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  digitalWrite(8, HIGH);
  delay(1000);                    
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(5000);
}

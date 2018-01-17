void setup(){
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop(){
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);int time = millis()/(1000);
  Serial.print(millis());
  Serial.print(" ");
  Serial.print(time);
  Serial.print(" seconds have elapsed\n");

  
}


#define sensor_micro 2
#define relay 3
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor_micro, INPUT_PULLUP);
  pinMode(relay, OUTPUT);
  digitalWrite(relay,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sensor_micro)){
    Serial.println("detecte movimiento");
    digitalWrite(relay,LOW);
  }
  else{
    Serial.println("No hay movimiento");
    digitalWrite(relay,HIGH);
  }

}

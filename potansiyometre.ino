
#define led 9
#define pot A3

void setup() {
  
}


void loop() {
  int deger = analogRead(pot);
  deger = deger/4;
  analogWrite(led,deger);
}


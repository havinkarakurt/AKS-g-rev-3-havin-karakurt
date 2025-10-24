 #define buton1 10
 #define buton2 9
 #define buton3 8
 #define mavi_led 5
 #define kirmizi_led 6
 #define yesil_led 7
 int buton1_durumu =0;
 int buton2_durumu =0;
 int buton3_durumu =0;

 void setup() { 
  pinMode(buton1, INPUT);
  Serial.begin(9600);
   pinMode(buton2, INPUT);
    pinMode(buton3, INPUT);

    pinMode(mavi_led, OUTPUT);
    pinMode(kirmizi_led, OUTPUT);
    pinMode(yesil_led, OUTPUT);
}

void loop() {
  buton1_durumu= digitalRead(buton1);
   buton2_durumu= digitalRead(buton2);
    buton3_durumu= digitalRead(buton3);
   Serial.println(buton1_durumu);
   Serial.println(buton2_durumu);
   Serial.println(buton3_durumu);

  if (buton1_durumu == 1)
  {
    digitalWrite(mavi_led, HIGH);
  }
  else
  {
    digitalWrite(mavi_led, LOW);
  }
  if (buton2_durumu == 1)
  {
    digitalWrite(kirmizi_led, HIGH);
  }
  else
  {
    digitalWrite(kirmizi_led, LOW);
  }
  if (buton3_durumu == 1)
  {
    digitalWrite(yesil_led, HIGH);
  }
  else
  {
    digitalWrite(yesil_led, LOW);
  }
}

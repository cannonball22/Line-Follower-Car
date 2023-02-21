
void setup() {

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);

pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);

void LED_ARROW();
void updateShiftRegister();
void turn_off();
}

void loop() {
  //منطقة اثار ابو صير
  digitalWrite(2,HIGH);
  delay(19000);
  digitalWrite(2,LOW);
 delay(1000);
  
  //دير العذراء مريم
    digitalWrite(3,HIGH);
  delay(18000);
    digitalWrite(3,LOW);
 delay(1000);

  //كهف سنور
    digitalWrite(4,HIGH);

  delay(29000);
  digitalWrite(4,LOW);
 delay(1000);

  //متحف بنى سويف
  digitalWrite(5,HIGH);
  delay(34000);
  digitalWrite(5,LOW);
   delay(1000);

  //دير ابو اسحاق دير الحمام
  digitalWrite(6,HIGH);
  delay(24000);
  digitalWrite(6,LOW);
   delay(1000);

    //دير مارى جرجس
  digitalWrite(7,HIGH);
  delay(20000);
  digitalWrite(7,LOW);
   delay(1000);

  //منطقة اثار الحيبة
  digitalWrite(8,HIGH);
  delay(24000);
  digitalWrite(8,LOW);
   delay(1000);

  //منطقة اثار اهناسيا
  analogWrite(A0,255);
  delay(26000);
  analogWrite(A0,0);
  delay(1000);
  //دير الانبا انطونيس
 analogWrite(A1,255);
 delay(15000);
 analogWrite(A1,0);
 delay(1000);
  //مءذنة الجامع الكبير
  analogWrite(A2,255);
  delay(20000);
analogWrite(A2,0);
delay(1000);
//منطقة اثار ميدوم
 analogWrite(A3,255);
 delay(18000);
analogWrite(A3,0);
delay(1000);
}

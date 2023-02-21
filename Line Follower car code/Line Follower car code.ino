/*************************************
 * Line Follower Robot* 
 *  Code Written by NUB Students  *
 *************************************/

#define SEN_1_PIN A2
#define SEN_2_PIN A3
#define SEN_3_PIN A4
#define IN1 3
#define IN2 9
#define IN3 6
#define IN4 5

#define MOT_RIGHT 0
#define MOT_LEFT 1

unsigned long Current_time;



void setup()
{
  pinMode(SEN_1_PIN, INPUT);
  pinMode(SEN_2_PIN, INPUT);
  pinMode(SEN_3_PIN, INPUT);
  //pinMode(MOT_LEFT,OUTPUT);
  //pinMode(MOT_RIGHT,OUTPUT);
  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT); 
 // Serial.begin(9600);
}

void loop()
{  // Serial.println(Current_time);    //prints time since program started
  delay(1000);
  //منطقة اثار ميدوم-1
  delay(20000);
  //delay(1000);
while (Current_time<=22000){
  MT();
 Current_time = millis();
 }

  //دير مارى جرجس-2
  delay(21000);
  //delay(2000);
  while (Current_time<=45000){
  MT();
 Current_time = millis();}
  
   //كهف سنور-3
  delay(33000);
  //delay(1000);
  Current_time = millis();
  while (Current_time<=79000){
    MT();
   Current_time = millis();}
   
   //دير العذراء مريم-4
  delay(21000);
  //delay(1000);
   while (Current_time<=101000){
   MT(); 
   Current_time = millis(); }
   
  //منطقة اثار الحيبة-5
  delay(29000);
  //delay(1000);
  while (Current_time<=131000){
  MT();
  Current_time = millis();}

  //منطقة اثار اهناسيا-6
  delay(29000);
  //delay(2000);
  while (Current_time<=162000){
  MT();
  Current_time = millis();}

  //دير ابو اسحاق دير الحمام-7
  delay(27000);
  //delay(1000);
  while (Current_time<=190000){
  MT();
 Current_time = millis();}
  
 //منطقة اثار ابو صير-8
  delay(22000);
  //delay(1500);
  while (Current_time<=213500){
    MT();
   Current_time = millis();}
   
   //مءذنة الجامع الكبير-9
  delay(24500);
  //delay(1000);
  while (Current_time<=238500){
  MT();
  Current_time = millis(); }
    
   //دير الانبا انطونيس-10
    delay(17500);
    //delay(500);
    while (Current_time<=256000){
    MT();
   Current_time = millis();}

   
 /* //متحف بنى سويف
  delay(34000);
  while (Current_time<=104000){
  MT();
 Current_time = millis();

  }*/  
}

char cRead_Sensor(void) //stop
{
  short sSen_Pin[3] = {SEN_1_PIN, SEN_2_PIN, SEN_3_PIN};
  char cStatus = 0b00000000;

  for(short i=0; i<3; i++)
  {
    cStatus = cStatus | (digitalRead(sSen_Pin[i]) << i);
  }

  return cStatus;
}
 
void vMotor_Control(short sWhich_Mot, short sSpeed)
{  

  
  if(sWhich_Mot == MOT_RIGHT)
  {
    if(sSpeed < 0) //reverse
    {
      sSpeed = abs(sSpeed);
      analogWrite(IN1, sSpeed);
      digitalWrite(IN2, LOW);
    }
    else
    {
      digitalWrite(IN1, LOW);
      analogWrite(IN2, sSpeed);
    }
  }
  else
  {
    if(sSpeed < 0) //reverse
    {
      sSpeed = abs(sSpeed);
      analogWrite(IN3, sSpeed);
      digitalWrite(IN4, LOW);
    }
    else
    {
      digitalWrite(IN3, LOW);
      analogWrite(IN4, sSpeed);
    }    
  }
  return ;
  }

  void MT(){
    
    char cSen_Status = 0b00000000;

  cSen_Status = cRead_Sensor();

  if((cSen_Status == 0b00000010)) //Forward
  {
    vMotor_Control(MOT_RIGHT, 150);
    vMotor_Control(MOT_LEFT, 150);
  }
  else if((cSen_Status == 0b00000001)|| (cSen_Status == 0b00000011))
  {
    vMotor_Control(MOT_RIGHT, 0);
    vMotor_Control(MOT_LEFT, 150);
  }
  else if((cSen_Status == 0b00000110) || (cSen_Status == 0b00000100) )
  {
    vMotor_Control(MOT_RIGHT, 150);
    vMotor_Control(MOT_LEFT, 0);
  }

 // Serial.println((short)cSen_Status);
    vMotor_Control(MOT_RIGHT, 0);
    vMotor_Control(MOT_LEFT, 0);   
    return;
    }
 
 
   

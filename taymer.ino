char32_t times = 600000; //sec
char32_t time_2 = 0;
byte y = 0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  Serial.print("SETUP OK ");
  time_2 = 0;
  y = 0;

  for (double i=0; i <= 3; i+=1){
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
  }
  Serial.print("SETUP OK2 ");

}

void loop() {
  // put your main code here, to run repeatedly:
  if (y==0)
  {
    for (double i=0; i <= times; i+=1500){
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      delay(500);
      Serial.println(i);
   }

    y = 1;
  }
  else{
    Serial.print("DONE!");
    digitalWrite(13,LOW);
  }
  

}

  #define BLYNK_PRINT Serial
  #include <ESP8266WiFi.h>
  #include <BlynkSimpleEsp8266.h>


  char auth[] = "xoEHNL1EKphYeT-nQEmVaE9tlm6AhbWI"; //Device Authentication Token
  char ssid[] = "Redmi Note 10T 5G"; //Wifi name
  char pass[] = "12345678"; //Wifi pwd

  BlynkTimer timer;
  bool Relay = 0;

  #define sensor A0
  #define waterPump D3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(waterPump,OUTPUT);
  digitalWrite(waterPump, HIGH);

  Blynk.begin(auth,ssid,pass,"blynk.cloud",80);

  timer.setInterval(100L,soilMoistureSensor);
}

BLYNK_WRITE(V1){
  Relay = param.asInt();

  if(Relay == 1){
    digitalWrite(waterPump,LOW);
  }
  else{
    digitalWrite(waterPump,HIGH);
  }
}

void soilMoistureSensor(){
  int value = analogRead(sensor);
  value = map(value,0,1024,0,100);
  value = (value - 100) * -1;

  Blynk.virtualWrite(V0,value);
}
void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
  timer.run();
}

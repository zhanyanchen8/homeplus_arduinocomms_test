
//#include "rgb_lcd.h"

//rgb_lcd lcd;
void setup() {
  // put your setup code here, to run once:
  
  
//  lcd.begin(16,2);
//  lcd.setRGB(255,255,255);
//  lcd.print("hello world");
  SerialUSB.begin (9600);
  Serial.begin(9600);

  while(!SerialUSB){
    ;
  
  }

  Serial.println("hello world");
  delay(2000);
  SerialUSB.println("bottle,cup,");
  SerialUSB.println("start");
  Serial.print("start");
  int i = 0;
  while (i < 5){
    int wait = 1000;
    delay(wait);
    SerialUSB.println("request");  
    Serial.println("request");
    i++;  
  }
 SerialUSB.println("finish");
 Serial.println("finish");

  Serial.println("hello computer!");
}

void loop() {

    String jetson = SerialUSB.readString();
    Serial.println(jetson);  



  
  // put your main code here, to run repeatedly:
//

//  //lcd.print(String(jetson));
//  // Serial.write(jetson);
//
//  int index = 0;
//  int source = jetson.indexOf("S", 0) + 2;
//
//  int dest = jetson.lastIndexOf("D") + 2;
//  index = dest;
//
//  int id = jetson.lastIndexOf("T") + 2;
//  index = id;
//
//  int data = jetson.lastIndexOf("P") + 2;
//  index = data;
//  
//  String sourceName = jetson.substring(source, dest - 2);
//  String destName = jetson.substring(dest, id - 2);
//  String idName = jetson.substring(id, data - 2);
//  String dataString = jetson.substring(data, jetson.lastIndexOf("K"));
//  data = (dataString).toInt();
//
///*
//  Serial.println(sourceName);
//  delay(50);
//  Serial.println(destName);
//  delay(50);
//  Serial.println(idName);
//  delay(50);
//  Serial.println(dataString);
//  delay(50);
//*/
//
//  Serial.write(1);
//  
//  
//  /*
//  String writeBack = destName + "/" + dataString;
//  Serial.write(sourceName);
//  */
//  
//  //Serial.write(1);
//  
//  /**
//  // drivetrain motor
//  if ((String)(fromJetson).charAt(0) == '0') {
//    // parse the String to confirm source, destination, 
//  }
//  // arm motor
//  else {
//    
//  }
//  */
}

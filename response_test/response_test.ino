void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  String jetson = Serial.readString();
  //Serial.write(jetson); //test
  Serial.write(jetson);
  // String fromJetson = (String)(jetson);
  
  /**
  // drivetrain motor
  if ((String)(fromJetson).charAt(0) == '0') {
    // parse the String to confirm source, destination, 
  }
  // arm motor
  else {
    
  }
  */
  /**
  for (byte n = 0; n < 255; n++){
    Serial.write(n);
    delay(50);
  }
  */
}

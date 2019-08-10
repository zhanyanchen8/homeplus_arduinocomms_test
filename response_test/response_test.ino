void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  String jetson = Serial.readString();
  Serial.write(jetson);

  int index = 0;
  int source = jetson.indexOf('S', index) + 2;
  index = source;

  int dest = jetson.indexOf('D', index) + 2;
  index = dest;

  int id = jetson.indexOf('T', jetson.indexOf("MOTOR") + "MOTOR".length()) + 2;
  index = id;

  int data = jetson.indexOf('P', index) + 2;
  index = data;
  
  String sourceName = jetson.substring(source, dest - 2);
  String destName = jetson.substring(dest, id - 2);
  String idName = jetson.substring(id, data - 2);
  data = String.toInt(jetson.substring(data, jetson.lastIndexOf("K")));

  Serial.write(destName + "/" + data);
  
  /**
  // drivetrain motor
  if ((String)(fromJetson).charAt(0) == '0') {
    // parse the String to confirm source, destination, 
  }
  // arm motor
  else {
    
  }
  */
}

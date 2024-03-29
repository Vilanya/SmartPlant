  /*
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
  */

int led = 13;

void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(led,OUTPUT);
}

void loop() {
  int val;
  
  val = analogRead(0); //connect sensor to Analog 0
  //Serial.println(val); //print the value to serial port
  
  if (val < 450)
  {
    digitalWrite(led, HIGH);
    Serial.print(" LED On ");
    Serial.println(val);
  }
  else
  { 
    digitalWrite(led, LOW);
    Serial.print("LED Off ");
    Serial.println(val);
  }
  delay(1800000);
  
}

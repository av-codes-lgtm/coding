const int sensorPin = A0;  // Analog pin for connecting the FC-51 sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // Read the analog value from the sensor
  float voltage = sensorValue * (5.0 / 1023.0);  // Convert analog value to voltage
  float distance = 27.86 * pow(voltage, -1.15);

  Serial.print(sensorValue);
  Serial.print(",");
  Serial.print(voltage);
  Serial.print(",");
  Serial.println(distance);

  delay(100); 
}
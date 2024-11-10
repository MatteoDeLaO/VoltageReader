// Define the analog pin you are using
int analogPin = A0;  // You can change this to any analog pin (A0 to A5 on most Arduino boards)

void setup() {
  // Start the Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Read the value from the analog pin
  int sensorValue = analogRead(analogPin);
  
  // Convert the ADC value to voltage (Assuming a 5V reference voltage)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Print the voltage to the Serial Monitor
  Serial.print("Voltage: ");
  Serial.print(voltage, 3);  // Print with 3 decimal places
  Serial.println(" V");

  // Delay for a second to make it easier to read
  delay(1000);
}

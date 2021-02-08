/*
* Temprature sensor tester
*/
int input_temp = A1;   

void setup() {
  Serial.begin(9600);     
}
void loop() {
  int temp = analogRead(input_temp);    
  temp = temp * 0.48828125;   
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("C");  
  delay(1000);  
}

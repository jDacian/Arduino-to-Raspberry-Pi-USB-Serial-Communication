data = "Arduino to Raspberry Pi Communication Test"

void setup() 
{
  Serial.begin(9600);  

}

void loop() 
{
  Serial.print(data);
  delay(250);
}

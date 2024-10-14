
float number1,number2;
char c;
void setup() {
  
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if (Serial.available() > 0)
  {
    float number1 = Serial.parseFloat();
    char ch=Serial.read();
    float number2= Serial.parseFloat();
    Serial.print(number1);
    Serial.print(ch);
    Serial.print(number2);
    Serial.print('=');
    switch (ch)
    {
      case '+':Serial.println(number1+number2);
      break;
      case '-':Serial.println(number1-number2);
      break;
      case '*':Serial.println(number1*number2);
      break;
      case '/':if(number2>0){Serial.println(number1/number2);}
      else if (number2==0){
     Serial.println("error");}
      break;
      
    }

  }
}
   
    
  






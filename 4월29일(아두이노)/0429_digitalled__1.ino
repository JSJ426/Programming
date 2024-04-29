int redPin = 11;
int yellowPin = 10;
int greenPin = 3;




// 이 코드는 실행시 한번만 실행된다.
// 세팅하는 곳
void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}


// 반복하여 일을 실행시키는 곳
void loop()
{
  /*digitalWrite(LED_BUILTIN, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000); // Wait for 1000 millisecond(s)*/
   
   
   digitalWrite(redPin, HIGH);
   digitalWrite(yellowPin, HIGH);
   digitalWrite(greenPin, HIGH);
   delay(1100);
   digitalWrite(redPin, LOW);
   digitalWrite(yellowPin, LOW);
   digitalWrite(greenPin, LOW);
   delay(1100);
   
  
   
  
}

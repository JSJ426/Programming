int redPin = 3;  // 아날로그 핀 번호
int brightness = 0; //LED밝기
int fadeAmount = 3; //LED fade할 포인트 수

void setup()
{
  pinMode(redPin, OUTPUT); //아날로그 핀 설정
}

void loop()
{
  analogWrite(redPin, brightness); //아날로그 핀 설정
  
  brightness += fadeAmount; //점점 밝게 만들기
  
  //fade 끝에서 fade 방향을 반대로
  if(brightness <= 0 || brightness >= 255){
     fadeAmount = -fadeAmount;
   }
  delay(30);
}
 

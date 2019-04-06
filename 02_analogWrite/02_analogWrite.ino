int ledPin=10;  //10번 아날로그 핀 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(0);      //A0에서 값 읽어오기
  val = map(val, 0, 1023, 0, 255);//가변저항값 0~1023을 1~255값으로 변환
  analogWrite(ledPin, val);     //변환된 값으로 LED 출력
  delay(100);   
  Serial.println(val);
}

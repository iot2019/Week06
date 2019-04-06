int ledPin = 3;  //PWM이 가능한 디지털 핀

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0); //조도센서에 따른 값을 읽어드림
  val = map(val, 0,1023,0,255);//값을 0~255값으로 변환
  val = 255 - val;  //어두워지면 LED를 밝게하기 위해 값을
                    //반전시킴
  analogWrite(ledPin, val); //PWM이 가능한 핀에 출력
  delay(300);
  Serial.println(val);  //시리얼모니터에 값 확인
}

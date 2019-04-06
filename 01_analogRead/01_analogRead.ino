int i;    //아날로그핀 값 저장 변수
float v;  //전압 값 저장 변수

void setup() {
    Serial.begin(9600);
}

void loop() {
  i = analogRead(A0);   //아날로그 핀 A0에서 핀값 읽어오기
  v = (5.0/1023.0)*(float)i;  //0~5V 값으로 변환
  Serial.print("전압(V) : ");//시리얼모니터에 출력
  Serial.println(v);
  delay(500);
}

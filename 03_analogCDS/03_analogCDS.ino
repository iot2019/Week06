int ledPin = 3;  //PWM이 가능한 디지털 핀

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0); //조도센서에 따른 값을 읽어드림
    //PULL-UP 저항의 경우
    //조도저항값 : 0(주위가 환할 수록), 1023(주위가 어두울 수록)
    //LED 값 : 0 (주위가 환하면 어둡게 켜기), 255(주위가 어두우면 환하게 켜기) 
  val = map(val, 0, 1023, 0, 255);
  Serial.println(val);  //화면 출력
  analogWrite(ledPin, val); //PWM이 가능한 핀에 출력
  delay(300);
}

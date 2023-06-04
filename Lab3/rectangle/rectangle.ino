int Rmotor1 = 5;
int Rmotor2 = 6;
int Lmotor1 = 10;
int Lmotor2 = 11;
void setup() {
  pinMode(Rmotor1, OUTPUT);
  pinMode(Rmotor2, OUTPUT);
  pinMode(Lmotor1, OUTPUT);
  pinMode(Lmotor2, OUTPUT);
}
void loop() {
  CW();
  delay(4000);
  LEFT();
  delay(630);
  CW();
  delay(2000);
  LEFT();
  delay(630);
  CW();
  delay(4000);
  LEFT();
  delay(630);
  CW();
  delay(2000);
  LEFT();
  delay(630);
//  CCW();
//  delay(2000);
//  RIGHT();
//  delay(1000);
  
}

void CW(){
  digitalWrite(Rmotor1, HIGH);
  digitalWrite(Rmotor2, LOW);
  digitalWrite(Lmotor1, HIGH);
  digitalWrite(Lmotor2, LOW);  
}

void CCW(){
  digitalWrite(Rmotor1, LOW);
  digitalWrite(Rmotor2, HIGH);
  digitalWrite(Lmotor1, LOW);
  digitalWrite(Lmotor2, HIGH);  
}

void RIGHT(){
  digitalWrite(Rmotor1, LOW);
  digitalWrite(Rmotor2, LOW);
  digitalWrite(Lmotor1, HIGH);
  digitalWrite(Lmotor2, LOW);
}

void LEFT(){
  digitalWrite(Rmotor1, HIGH);
  digitalWrite(Rmotor2, LOW);
  digitalWrite(Lmotor1, LOW);
  digitalWrite(Lmotor2, LOW);
}

void STOP(){
  digitalWrite(Rmotor1, LOW);
  digitalWrite(Rmotor2, LOW);
  digitalWrite(Lmotor1, LOW);
  digitalWrite(Lmotor2, LOW);
}

int Rmotor1 = 5;
int Rmotor2 = 6;
int Lmotor1 = 10;
int Lmotor2 = 11;

int R[10] ={0};
int M[10] ={0};
int L[10] ={0};
int a[10] ={0};

int i = 0;
int k = 0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  
  pinMode(Rmotor1, OUTPUT);
  pinMode(Rmotor2, OUTPUT);
  pinMode(Lmotor1, OUTPUT);
  pinMode(Lmotor2, OUTPUT);
  
  Serial.begin(9600); // initialize serial communication at 9600 bits per second
}
void loop() {
 
   avoid();
   // print out the value you read
   // wait for 1000 milliseconds
   //LEFT();
}

void avoid(){
  int sensorValue = analogRead(A3);

  int Avra;
  a[k] =sensorValue;
  k++;
  for(int j = 0; j< 10; j++){
    Avra = a[i] + Avra;
  }
  Avra = Avra/10;
  Serial.println(sensorValue);

  if(Avra > 500){
    Serial.println("HERE");
    LEFT_1();
    delay(630);
    CW();
    delay(700);
    RIGHT_1();
    delay(630);
    CW();
    delay(2000);
    RIGHT_1();
    delay(630);
    CW();
    delay(700);
    LEFT_1();
    delay(630);
    Gostraight();
  }
  else
    Gostraight();
}
void Gostraight(){
  int sensorValueL = analogRead(A0);
  int sensorValueM = analogRead(A1);
  int sensorValueR = analogRead(A2);

  R[i] =sensorValueR;
  M[i] =sensorValueM;
  L[i] =sensorValueL;
  i++;
  
  int AvrL;
  int AvrM;
  int AvrR;
  
  if(i>= 10)
    i = 0;
  for(int j = 0; j< 10; j++){
    AvrL = L[i] + AvrL;
  }
  AvrL = AvrL/10;
  
  for(int j = 0; j< 10; j++){
    AvrM = M[i] + AvrM;
  }
  AvrM = AvrM/10;
  
  for(int j = 0; j< 10; j++){
    AvrR = R[i] + AvrR;
  }
  AvrR = AvrR/10;
  
  //Serial.println(sensorValueM);

   if(sensorValueM > 650 && sensorValueL > 550){
    RIGHT();
    delay(100);
  }
  else if(sensorValueM > 650 && sensorValueR > 550){
    LEFT();
    delay(100);
  }  
  else if(sensorValueL > 550){
    LEFT();
    delay(100);
  }
  else if(sensorValueR > 550){
    RIGHT();
    delay(100);
  }
  else {
    CW();
    delay(100);
  }
  
}

void CW(){
  digitalWrite(Rmotor1, HIGH);
  digitalWrite(Rmotor2, LOW);
  digitalWrite(Lmotor1, HIGH);
  digitalWrite(Lmotor2, LOW);  
}

void RIGHT(){
  analogWrite(Rmotor1, 120);
  analogWrite(Rmotor2, 0);
  analogWrite(Lmotor1, 255);
  analogWrite(Lmotor2, 0);
}

void LEFT(){
  analogWrite(Rmotor1, 255);
  analogWrite(Rmotor2, 0);
  analogWrite(Lmotor1, 120);
  analogWrite(Lmotor2, 0);
}

void RIGHT_1(){
  digitalWrite(Rmotor1, LOW);
  digitalWrite(Rmotor2, LOW);
  digitalWrite(Lmotor1, HIGH);
  digitalWrite(Lmotor2, LOW);
}

void LEFT_1(){
  digitalWrite(Rmotor1, HIGH);
  digitalWrite(Rmotor2, LOW);
  digitalWrite(Lmotor1, LOW);
  digitalWrite(Lmotor2, LOW);
}

const int buttonPin1 = A2; //switch
const int buttonPin2 = A3; //start
const int buttonPin3 = A4; //reset
int button1 = 0;
int button2_1 = 0;
int button2_2 = 0;
int button3 = 0;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
long previous = 0;
long tprevious = 0;
int previous1 = 0;
int previous2 = 0;
int previous3 = 0;
int State1 = 0;
int State2 = 0;
int State3 = 0;
long lastdebounce1 = 0;
long lastdebounce2 = 0;
long lastdebounce3 = 0;
long debouncedelay = 50;
long interval = 1000;
int now = 0;
int tnow = 60;
int previousstate = 0;
long nowtime = 0;
bool button2_C = true;
bool button2_T = false;
bool button3_S = false;
bool PUSH = true;
void setup() {
  // put your setup code here, to run once:
  for (int i=2; i<=13; i++)
    pinMode (i,OUTPUT);
  pinMode (A0,OUTPUT);
  pinMode (A1,OUTPUT);
  pinMode (buttonPin1,INPUT);
  pinMode (buttonPin2,INPUT);
  pinMode (buttonPin3,INPUT);
  Serial.begin(9600);
}
void loop(){
  buttonState1 = digitalRead (buttonPin1);
  buttonState2 = digitalRead (buttonPin2);
  buttonState3 = digitalRead (buttonPin3);
  
  if (previous2 != buttonState2){
    lastdebounce2 = millis();
  }
  if ((millis()-lastdebounce2) > debouncedelay){
    if (buttonState2 != State2){
      State2 = buttonState2;
      if (State2 == HIGH && button2_C == true){
      button2_1++;
    }
      if (State2 == HIGH && button2_T == true){
      button2_2++;
    }
    }
  }
  previous2 = buttonState2;
  
  if (previous1 != buttonState1){
    lastdebounce1 = millis();
  }
  if ((millis()-lastdebounce1) > debouncedelay){
    if (buttonState1 != State1){
      State1 = buttonState1;
      if ((State1 == HIGH && PUSH == true) || (State1 == HIGH && PUSH == false && button3_S == true)){
      button1++;
    }
    }
  }
 
  previous1 = buttonState1;

 
  
  if (previous3 != buttonState3){
    lastdebounce3 = millis();
  }
  if ((millis()-lastdebounce3) > debouncedelay){
    if (buttonState3 != State3){
      State3 = buttonState3;
      if (State3 == HIGH && button3_S == true){
      button3++;
    }
    }
  }
   previous3 = buttonState3;
  int mode = button1%2;
//  Serial.println(mode);
  if (mode == 1){
    PUSH = false;
    Tik();
    button2_C = false;
    button2_T = true;
    nowtime = millis();
  }
  else{
    PUSH = true;
    Serial.println(now);
    Clock();
    tnow = 60;
    button2_C = true;
    button2_T = false;
    
  }
  unsigned long current = millis();
  if (current - previous > interval){
    previous = current;
    now++;
    if (now == 60)
      now = 0;
  }

}
void Clock(){
if (button2_1 % 2 == 1)
    now = now;
    int countright = now % 10;
    int countleft = now / 10;
//    Serial.println(now);
    switch (countright){
    case 0:
    digitalWrite(2,LOW); // 0
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    break;
    
    case 1:
    digitalWrite(2,LOW); // 1
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;

    case 2:
    digitalWrite(2,LOW); // 2
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    break;

    case 3:
    digitalWrite(2,LOW); //3
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    break;
    
    case 4:
    digitalWrite(2,LOW); // 4
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;
    
    case 5:
    digitalWrite(2,HIGH); // 5
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    break;
    
    case 6:
    digitalWrite(2,HIGH); // 6
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    break;
    
    case 7:
    digitalWrite(2,LOW); // 7
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;
    
    case 8:
    digitalWrite(2,LOW); // 8
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    break;
    
    case 9:
    digitalWrite(2,LOW); // 9
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    break;
  }

  switch (countleft){
    case 0:
    digitalWrite(9,LOW); // 0
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(A0,LOW);
    digitalWrite(A1,LOW);
    break;
    
    case 1:
    digitalWrite(9,LOW); // 1
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(A0,HIGH);
    digitalWrite(A1,HIGH);
    break;

    case 2:
    digitalWrite(9,LOW); // 2
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(A0,LOW);
    digitalWrite(A1,LOW);
    break;

    case 3:
    digitalWrite(9,LOW); //3
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(A0,LOW);
    digitalWrite(A1,HIGH);
    break;
    
    case 4:
    digitalWrite(9,LOW); // 4
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(A0,HIGH);
    digitalWrite(A1,HIGH);
    break;
    
    case 5:
    digitalWrite(9,HIGH); // 5
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(A0,LOW);
    digitalWrite(A1,HIGH);
    break;
    
    case 6:
    digitalWrite(9,HIGH); // 6
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(A0,LOW);
    digitalWrite(A1,LOW);
    break;
  }
}

void Tik(){
  if (button3 != 0){
    tnow  = 60;
    button3 = 0;
  //  Serial.println(button3);
    button3_S = false;
  }
    if (button2_2 % 2 == 0){
      tnow = tnow;
      button3_S = true;
    }
    else{
    button3_S = false;
    unsigned long current = millis();
    if (current - tprevious > interval){
      tprevious = current;
      tnow--;
      if (tnow == 0)
        tnow = 0;
        }}
      int countright = tnow % 10;
      int countleft = tnow / 10;
     // Serial.println(countright);
  
      switch (countright){
      case 0:
      digitalWrite(2,LOW); // 0
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;
      
      case 1:
      digitalWrite(2,LOW); // 1
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      break;
  
      case 2:
      digitalWrite(2,LOW); // 2
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;
  
      case 3:
      digitalWrite(2,LOW); //3
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      break;
      
      case 4:
      digitalWrite(2,LOW); // 4
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      break;
      
      case 5:
      digitalWrite(2,HIGH); // 5
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      break;
      
      case 6:
      digitalWrite(2,HIGH); // 6
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;
      
      case 7:
      digitalWrite(2,LOW); // 7
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      break;
      
      case 8:
      digitalWrite(2,LOW); // 8
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      break;
      
      case 9:
      digitalWrite(2,LOW); // 9
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      break;
    }
  
    switch (countleft){
      case 0:
      digitalWrite(9,LOW); // 0
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW);
      break;
      
      case 1:
      digitalWrite(9,LOW); // 1
      digitalWrite(10,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      digitalWrite(A0,HIGH);
      digitalWrite(A1,HIGH);
      break;
  
      case 2:
      digitalWrite(9,LOW); // 2
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW);
      break;
  
      case 3:
      digitalWrite(9,LOW); //3
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(A0,LOW);
      digitalWrite(A1,HIGH);
      break;
      
      case 4:
      digitalWrite(9,LOW); // 4
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(A0,HIGH);
      digitalWrite(A1,HIGH);
      break;
      
      case 5:
      digitalWrite(9,HIGH); // 5
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(A0,LOW);
      digitalWrite(A1,HIGH);
      break;
      
      case 6:
      digitalWrite(9,HIGH); // 6
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW);
      break;
    }
    
}

 

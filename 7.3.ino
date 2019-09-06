int buzzerPin = 8,7;                          //BUZZER INPUT PIN.
int ledPin = 13,12;                            //LED PIN.
int pirPin1 = A0;                            //MOTION SENSOR INPUT PIN.
int sensor1Value = LOW;                      //DEFAULT SENSOR STATE.
int sensor2Value = LOW;

void setup() {                              //INITIAL SETTINGS/ASSIGNMETN.
  pinMode(buzzerPin, OUTPUT);               //SET BUZZER AS OUTPUT.
  pinMode(ledPin, OUTPUT);                  //SET LED AS OUTPUT.
  pinMode(pirPin, INPUT);                   //SET PIR AS INPUT.
}
void loop() {                               //COMMAND TO BE REPEATED.
  sensor1Value = digitalRead(pirPin1);        //READ PIR INPUT PIN.
  sensor2Value = digitalRead(pirPin2);
  if ( sensor1Value == HIGH)and (sensor2Value == HIGH) {               
    tone(buzzerPin, 1200);                   
    digitalWrite(ledPin, HIGH);            
    delay(100);                             
    noTone(buzzerPin);                      
    digitalWrite(ledPin, LOW);              
    delay(100);                             
  }
  else if ( sensor1Value == HIGH)and (sensor2Value == LOW) {               
    tone(buzzerPin, 1200);                   
    digitalWrite(ledPin, HIGH);            
    delay(100);                             
    noTone(buzzerPin);                      
    digitalWrite(ledPin, LOW);              
    delay(100);                             
  }
  else if ( sensor1Value == LOW)and (sensor2Value == HIGH) {               
    tone(buzzerPin, 1200);                   
    digitalWrite(ledPin, HIGH);            
    delay(100);                             
    noTone(buzzerPin);                      
    digitalWrite(ledPin, LOW);              
    delay(100);                             
  }
  else {                                  
    noTone(buzzerPin);                      
    digitalWrite(ledPin, LOW);             
  }
}

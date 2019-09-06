int buzzerPin = 8,7;                          
int ledPin = 13,12;                           
int pirPin1 = A0; 
int pirPin2 = A1;
int sensor1Value = LOW;                     
int sensor2Value = LOW;

void setup() {                              
  pinMode(buzzerPin, OUTPUT);               
  pinMode(ledPin, OUTPUT);                  
  pinMode(pirPin1, INPUT);
  pinMode(pirPin2, INPUT);
}
void loop() {                               
  sensor1Value = digitalRead(pirPin1);        
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

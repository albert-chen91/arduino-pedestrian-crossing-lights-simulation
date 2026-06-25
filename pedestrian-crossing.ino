const int buttonPin = 2;
const int redPin = 7;     
const int yellowPin = 8; 
const int greenPin = 9;   

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  
  if (buttonState == LOW) {
    
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(500); 

    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(10000); 
    
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    
    delay(1000); 
  }
}
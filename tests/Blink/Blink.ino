// this is a test script

const int BLINK_PIN_1 =   12;
const int BLINK_PIN_2 =   11;
const int BLINK_PIN_3 =   10;
const int BUTTON_PIN  =    2;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(BLINK_PIN_1, OUTPUT);
  pinMode(BLINK_PIN_2, OUTPUT);
  pinMode(BLINK_PIN_3, OUTPUT);
  pinMode(BUTTON_PIN , INPUT );
}

void loop() {

  if(digitalRead(BUTTON_PIN) == HIGH){
    digitalWrite(BLINK_PIN_1, HIGH); 
    delay(333);
    digitalWrite(BLINK_PIN_2, HIGH); 
    delay(333);
    digitalWrite(BLINK_PIN_3, HIGH); 
    delay(333);
    digitalWrite(BLINK_PIN_1, LOW);
    delay(333);
    digitalWrite(BLINK_PIN_2, LOW);
    delay(333);
    digitalWrite(BLINK_PIN_3, LOW);
    delay(333);
  }else{
    digitalWrite(BLINK_PIN_1, LOW);
    digitalWrite(BLINK_PIN_2, LOW);
    digitalWrite(BLINK_PIN_3, LOW);
    delay(10);
  }
  
}





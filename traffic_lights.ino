#define LED_RED 34
#define LED_GREEN 13
#define LED_YELLOW 12


void setup() {
  Serial.begin(9600);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);

  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, LOW);
}


void loop() {


  digitalWrite(LED_RED, HIGH);
  delay(7000);
  digitalWrite(LED_RED, LOW);
  
  digitalWrite(LED_YELLOW, HIGH);
  delay(3000);
  digitalWrite(LED_GREEN, HIGH);

  digitalWrite(LED_GREEN, HIGH);
  delay(1000);
  digitalWrite(LED_GREEN, LOW);
  
   
}

// Traffic light program for Arduino UNO board

// Define pins for traffic light
#define RED_LED 2
#define YELLOW_LED 3
#define GREEN_LED 4

void setup() {
  // Initialize the pins as output
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // Turn on red light for 5 seconds
  digitalWrite(RED_LED, HIGH);
  delay(5000);

  // Turn on yellow light for 2 seconds
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  delay(2000);

  // Turn off yellow light and turn on green light for 5 seconds
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(5000);

  // Turn off green light and turn on yellow light for 2 seconds
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  delay(2000);

  // Turn off yellow light and turn on red light for 5 seconds
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, HIGH);
  delay(5000);
}

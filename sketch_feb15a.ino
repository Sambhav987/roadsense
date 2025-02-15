// Define the pin numbers for the buttons
const int buttonPin1 = 5;
const int buttonPin2 = 6;
const int buttonPin3 = 7;
const int buttonPin4 = 4;

void setup() {
  // Initialize the Serial communication at 9600 baud rate
  Serial.begin(9600);

  // Initialize the button pins as inputs with internal pull-up resistors
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
}

void loop() {
  // Read the state of each button
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  int buttonState4 = digitalRead(buttonPin4);

  // Check if Button 1 is pressed (active LOW with pull-up resistors)
  if (buttonState1 == LOW) {
    Serial.println(1);
    delay(500);  // Debounce delay to avoid multiple prints
  }

  // Check if Button 2 is pressed
  if (buttonState2 == LOW) {
    Serial.println(2);
    delay(500);  // Debounce delay
  }

  // Check if Button 3 is pressed
  if (buttonState3 == LOW) {
    Serial.println(3);
    delay(500);  // Debounce delay
  }

    if (buttonState4 == LOW) {
    Serial.println(4);
    delay(500);  // Debounce delay
  }
}
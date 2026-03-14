// ESP32 Touch Test with LED control
// Touch2 = T2 = GPIO 2

#define LED_PIN  5          // ← Change this to the GPIO you connected your LED to
                            // Common choices: 5, 18, 19, 21, 22, 23, 25, 26, 27, 32, 33...
                            // Many dev boards already have a built-in LED on GPIO 2 (but you're using it for touch)

const int TOUCH_THRESHOLD = 350;   // Adjust this value ↓ after testing!
                                  // Typical good starting values: 30–70
                                  // → smaller number = more sensitive

void setup() {
  Serial.begin(115200);
  delay(1000);                    // Time to open Serial Monitor
  Serial.println("ESP32 Touch + LED Test");

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);     // LED off at start
}

void loop() {
  int touchValue = touchRead(T2);   // Read touch value (usually 50–120 untouched, drops when touched)

  Serial.print("Touch value: ");
  Serial.print(touchValue);

  if (touchValue < TOUCH_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);    // LED ON when touched
    Serial.println(" → TOUCH DETECTED - LED ON");
  } else {
    digitalWrite(LED_PIN, LOW);     // LED OFF when not touched
    Serial.println(" → no touch - LED OFF");
  }

  delay(150);   // Faster feedback (~6–7 readings per second) — feel free to change
}

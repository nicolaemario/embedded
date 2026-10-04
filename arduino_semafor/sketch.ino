const int GREEN = 8;
const int YELLOW = 9;
const int RED = 10;
const int BUTTON = 2;

enum LIGHTS_COLOR {RED_LIGHT, YELLOW_LIGHT, GREEN_LIGHT};
LIGHTS_COLOR light = RED_LIGHT;

unsigned long moment = 0;
bool previouslyPressed = false;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  unsigned long now = millis();
  bool pressed = digitalRead(BUTTON) == LOW;

  if (light == RED_LIGHT && pressed && !previouslyPressed) {
    light = YELLOW_LIGHT;
    moment = now;
  }

  if (light == YELLOW_LIGHT && now - moment >= 3000) {
    light = GREEN_LIGHT;
    moment = now;
  }

  if (light == GREEN_LIGHT && now - moment >= 5000) {
    light = RED_LIGHT;
  }

  digitalWrite(GREEN, light == GREEN_LIGHT);
  digitalWrite(YELLOW, light == YELLOW_LIGHT);
  digitalWrite(RED, light == RED_LIGHT);

  previouslyPressed = pressed;
}

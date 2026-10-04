const int VERDE = 8;
const int GALBEN = 9;
const int ROSU = 10;
const int BUTON = 2;

enum Stare { ASTEPTARE, ATENTIE, TRAVERSARE };
Stare stare = ASTEPTARE;

unsigned long moment = 0;
bool apasatAnterior = false;

void setup() {
  pinMode(VERDE, OUTPUT);
  pinMode(GALBEN, OUTPUT);
  pinMode(ROSU, OUTPUT);
  pinMode(BUTON, INPUT_PULLUP);
}

void loop() {
  unsigned long acum = millis();
  bool apasat = digitalRead(BUTON) == LOW;

  if (stare == ASTEPTARE && apasat && !apasatAnterior) {
    stare = ATENTIE;
    moment = acum;
  }

  if (stare == ATENTIE && acum - moment >= 3000) {
    stare = TRAVERSARE;
    moment = acum;
  }

  if (stare == TRAVERSARE && acum - moment >= 5000) {
    stare = ASTEPTARE;
  }

  digitalWrite(VERDE, stare == ASTEPTARE);
  digitalWrite(GALBEN, stare == ATENTIE);
  digitalWrite(ROSU, stare == TRAVERSARE);

  apasatAnterior = apasat;
}

//output numbers corresponfing to lights
int GREEN = 3;
int RED = 7;
int YELLOW = 5;
int DELAY_GREEN = 3000;
int DELAY_RED = 1500;
int DELAY_YELLOW = 3000

void setup()
{
  // determine input or output
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  // put specific lights at high and low for delay green period
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // run all the code on top during this delay
  delay(DELAY_GREEN);

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW)

  delay(DELAY_YELLOW);

  // put specific lights at high and low for delay red period
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);

  // runn all the code on top during this delay
  delay(DELAY_RED);
};


#define inpin 7
#define outpin 13

void setup()
{
  pinMode(inpin, INPUT);
  pinMode(outpin, OUTPUT);
}

void setup()
{
  digitalWrite(outpin, digitalRead(inpin));
}

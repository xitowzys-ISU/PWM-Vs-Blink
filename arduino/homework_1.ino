#define G_PIN 9
#define B_PIN 10
#define R_PIN 11

#define G_PIN_D 2
#define B_PIN_D 4
#define R_PIN_D 7

void pwm(int pin, int dc){
  int T = 255;
  float c = float(T)/float(dc);
  digitalWrite(pin, HIGH);
  delayMicroseconds(int(dc*c));
  digitalWrite(pin,LOW);
  delayMicroseconds(int((T-dc)*c));
}


void setup()
{
  pinMode(R_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);
  
  pinMode(R_PIN_D, OUTPUT);
  pinMode(G_PIN_D, OUTPUT);
  pinMode(B_PIN_D, OUTPUT);
}

void loop()
{ 
//  pwm(R_PIN_D, 50);
//  pwm(G_PIN_D, 100);
//  pwm(B_PIN_D, 150);

  digitalWrite(R_PIN_D, (millis() / 200) % 2);
  digitalWrite(G_PIN_D, (millis() / 400) % 2);
  digitalWrite(B_PIN_D, (millis() / 600) % 2);
  
  analogWrite(R_PIN, 50);
  analogWrite(G_PIN, 100);
  analogWrite(B_PIN, 150);
}
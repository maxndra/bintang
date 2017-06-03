const int hit = 6;
const int button = 7;
const int led = 2;
const int led1 = 3;
const int led2 = 4;
const int led3 = 5;
int lives = 3;
int state = 0;
int gameRunning = false;

void setup()
{
  pinMode(hit, INPUT);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  pinMode(lives, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  state = digitalRead(button);
  if (state == HIGH)
  {
    gameRunning = true;
  }
  else if (lives = 0)
  {
    gameRunning = false;
  }

  while(gameRunning)
  {
    state = digitalRead(hit);
    if (state == HIGH)
    {
      digitalWrite(led, HIGH);
      delay(1500);
    }
    else
    {
      digitalWrite(led, LOW);
    }
  
    state = digitalRead(hit);
    if (state == HIGH)
    {
      lives -= 1;
    }
    if (lives = 3)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
    }
    else if (lives = 2)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
    }
    else if (lives = 1)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
    }
    else if (lives = 0)
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
    }
  }
}

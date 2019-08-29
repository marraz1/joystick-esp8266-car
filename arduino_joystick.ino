// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output

const int forwardD4 = 4;  // i prieki
const int backD5 = 5;     // atgal
const int leftD6 = 6;     // i kaire
const int rightD7 = 7;   // i desine
const int stopD8 = 8;   // stop

void setup() {
  pinMode(forwardD4, OUTPUT);
  pinMode(backD5, OUTPUT);
  pinMode(leftD6, OUTPUT);
  pinMode(rightD7, OUTPUT);
  pinMode(stopD8, OUTPUT);
  
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(115200);
}

void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n");
  if(analogRead(X_pin) > 1000)// && analogRead(Y_pin) > 400)
  {
    digitalWrite(forwardD4, HIGH);
    Serial.print("i prieki");
    Serial.print("\n");
  }
    else
  {
     digitalWrite(forwardD4, LOW);
  }

  if(analogRead(X_pin) < 5 && analogRead(Y_pin) > 400 && analogRead(Y_pin) < 800)
  {
    digitalWrite(backD5, HIGH);
    Serial.print("i atgal");
    Serial.print("\n");
  }
    else
  {
    digitalWrite(backD5, LOW);
  }

  if(analogRead(X_pin) > 400 && analogRead(Y_pin) == 0)
  {
    digitalWrite(leftD6, HIGH);
    Serial.print("i kaire");
    Serial.print("\n");
  }
    else
  {
    digitalWrite(leftD6, LOW);
  }

  if(analogRead(X_pin) > 400 && analogRead(Y_pin) > 1000)
  {
    digitalWrite(rightD7, HIGH);
    Serial.print("i desine");
    Serial.print("\n");
  }
    else
  {
    digitalWrite(rightD7, LOW);
  }

    if(analogRead(X_pin) > 510 && analogRead(X_pin) < 530 && analogRead(Y_pin) > 500 && analogRead(Y_pin) < 530)
  {
    digitalWrite(stopD8, HIGH);
    Serial.print("stop");
    Serial.print("\n");
  }
  else
  {
    digitalWrite(stopD8, LOW);
  }
  
  Serial.print("\n\n");

}

const int potPin = 15;
const int motor1 = 16;
const int motor2 = 5;

void setup()

{

pinMode(motor1, OUTPUT);// where the motor is connected to
pinMode(motor2, OUTPUT);
digitalWrite(motor1, HIGH);
digitalWrite(motor2, HIGH);

Serial.begin(9600);

while (! Serial);

Serial.println("Speed 0 to 1024");

}

void loop()

{

if (Serial.available())

{ int speed = Serial.parseInt();

if (speed >= 0 && speed <= 512){
  digitalWrite(potPin, speed);
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, HIGH);
  Serial.println("Forward");
}else if (speed >= 512 && speed <= 1024){
  digitalWrite(potPin, speed);
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, LOW);
  Serial.println("Reverse");
}

{

analogWrite(potPin, speed);//sets the motors speed
Serial.print("Speed = ");
Serial.println(speed);
}

}

}

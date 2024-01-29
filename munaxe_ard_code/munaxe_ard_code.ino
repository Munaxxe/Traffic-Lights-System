//Traffic Light Code
int red = 9;
int green = 8;
int orange = 5;

void green_light(){
  digitalWrite(green, HIGH);
  digitalWrite(orange, LOW);
  digitalWrite(red, LOW);
 }

void orange_light(){
  digitalWrite(green, LOW);
  digitalWrite(orange, HIGH);
  digitalWrite(red, LOW); 
 }

void red_light(){
  digitalWrite(green, LOW);
  digitalWrite(orange, LOW);
  digitalWrite(red, HIGH);
 }

void setup() {
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
}

void loop() {
  red_light();
  delay(1000);
  
  green_light();
  delay(1000);

  orange_light();
  delay(500);
}

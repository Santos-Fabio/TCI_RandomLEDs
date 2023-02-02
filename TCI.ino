int randomNumber;
int l1,l2,l3; //Saídas Referentes a cada conjunto de LEDs
int r = 0;
void setup()
{

  pinMode(11,OUTPUT);
 // Red1 LED
  pinMode(12,OUTPUT);
 // Yellow1 LED
  pinMode(13,OUTPUT);
 // Blue1 LED
  pinMode(7,OUTPUT);
 // Red2 LED
  pinMode(8,OUTPUT);
 // Yellow2 LED
  pinMode(9,OUTPUT);
 // Blue2 LED
  pinMode(2,OUTPUT);
 // Red3 LED
  pinMode(3,OUTPUT);
 // Yellow3 LED
  pinMode(4,OUTPUT);
 // Blue3 LED
}

void loop()
{
  r +=1;
  if(r==6){
    r = 0;
  }
  randomSeed(analogRead(r));
  l1 = random(11,14);

  l2 = random(7,10);

  l3 = random(2,5);


  digitalWrite(l1, HIGH);
  delay(100);
  digitalWrite(l2, HIGH);
  delay(100);
  digitalWrite(l3, HIGH);
  delay(2500);

  digitalWrite(l1, LOW);
  delay(100);
  digitalWrite(l2, LOW);
  delay(100);
  digitalWrite(l3, LOW);
  delay(100);

}
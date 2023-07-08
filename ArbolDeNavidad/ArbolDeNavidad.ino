  int luzdinamica2 = 0;
  int luzdinamica = 255;
  int chupa = 5;
  int led = 9;
  int led2 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
         analogWrite(led, luzdinamica);
         analogWrite(led2, luzdinamica2);
 
        if (luzdinamica == 0 && luzdinamica2 == 255)
        {
          luzdinamica = 255;
          luzdinamica2 = 0;
        }
     luzdinamica2 = luzdinamica2 + chupa;
     luzdinamica = luzdinamica - chupa;
        delay(200);
}
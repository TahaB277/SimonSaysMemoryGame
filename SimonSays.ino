void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
int k[4];
bool running = true;
void Randomize(int nb){
  delay(750);
  for(int i =0;i<nb;i++){
    k[i]=random(10,14);
    digitalWrite(k[i],HIGH);
    delay(750);
    digitalWrite(k[i],LOW);
    delay(750);
}
}

void Win()
{
  for(int j=0;j<10;j++)
    for(int i=10;i<14;i++)
    {
      digitalWrite(i,HIGH);
      delay(50);
      digitalWrite(i,LOW);
      delay(50);
    }
}
void Lose()
{
  for(int i =0;i<20;i++){
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(50);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(50);
  }
  running = false;
}

void loop() 
{
  running = true;
  while(running)
  {
    Randomize(1);
    while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
    if(digitalRead(k[0]-8)==HIGH)
    {
        Randomize(2);
        while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
        if(digitalRead(k[0]-8)==HIGH)
        {
            delay(500);
            while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
            if(digitalRead(k[1]-8)==HIGH)
            {
                Randomize(3);
                while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
                if(digitalRead(k[0]-8)==HIGH)
                {
                    delay(500);
                    while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
                    if(digitalRead(k[1]-8)==HIGH)
                    {
                        delay(500);
                        while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
                        if(digitalRead(k[2]-8)==HIGH)
                        {
                            Randomize(4);
                            while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
                            if(digitalRead(k[0]-8)==HIGH)
                            {
                                delay(500);
                                while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
                                if(digitalRead(k[1]-8)==HIGH)
                                {
                                    delay(500);
                                    while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
                                    if(digitalRead(k[2]-8)==HIGH)
                                    {
                                        delay(500);
                                        while((digitalRead(2) == LOW) && (digitalRead(3) == LOW) && (digitalRead(4) == LOW) && (digitalRead(5) == LOW)){}
                                        if(digitalRead(k[3]-8)==HIGH)
                                        {
                                            Win();
                                        }
                                        else
                                          Lose();
                                    }
                                    else
                                      Lose();
                                }
                                else
                                  Lose();
                            }
                            else
                              Lose();
                        }
                        else
                          Lose();
                    }
                    else
                      Lose();
                }
                else
                  Lose();
            }
            else
              Lose();
        }
        else
          Lose();
    }
    else
      Lose();
  }
}
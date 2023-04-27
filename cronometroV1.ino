int t1 = 0;
int t2 = 0;
int start_millist = millis();
int s1 = 4;
int s2 = 15;


void setup() {
  Serial.begin(115200);
}

void loop() {
  if (digitalRead(s1)) {
    t1 = millis();
  } 
  Serial.print("Time: ");
  Serial.println(millis()-t1); // imprime o tempo desde que o programa iniciou
  if(digitalRead(s2)){
    t2 = millis();
    Serial.println(t2-t1);
    while(1){
      }
    }
  }
 // espera um segundo, para não enviar quantidades massivas de dados
}

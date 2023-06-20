/*
Projeto produzido pela Maua Racing, dedicado ao teste do veiculo para a competição da FSAE.
Este código foi feito para contar o tempo que o carro demora em cada volta do SKIDPAD(Carro passa pelo infravermelho 5x no percuso), tendo uma ideia que seja simples e facil de compreender.
A ideia é utilizar apenas UM(1) ESP32, tendo apenas um par de cones na pista, no meio do SKIDPAD.
*/

// Constantes
const unsigned int pino = 26;                   // Pino de sinal do infravermelho

//Variavel
bool status;                                    // Mostra se o status está ON(true) ou OFF(false)
unsigned int volta = 0;                         // Indica a volta
unsigned long lista_tempo[5];                   // Lista com todos os milisegundos que passou pelo infra 
/*(0 = volta 1, 1 = volta 2, 2 = volta 3, 3 = volta 4, 4 = fim do skidpad)*/

void setup() {
  Serial.begin(115200);
  pinMode(pino, INPUT);                         // Define o pino 26 como INPUT
}

void loop() {
  // Se carro passar no infra, ativa o cronometro
  if (digitalRead(pino) == 1) {
    volta += 1;
    status = true;
    Serial.print("---- VOLTA " + String(volta) + " ----");
    lista_tempo[volta] = millis();              // Guarda o milisegundo que o carro passou no infra
  }

  if (status == true) {                         // Mostra o tempo que está sendo decorrido na volta
    Serial.print(millis() - lista_tempo[volta]);
    Serial.println(" milisegundos");

    if (volta == 5) {                           // Se tiver tido a ultima volta(passdo pela 5 vez) poderá dar print em tudo
      status = false;
      unsigned long volta1 = lista_tempo[1] - lista_tempo[0];
      unsigned long volta2 = lista_tempo[2] - lista_tempo[1];
      unsigned long volta3 = lista_tempo[3] - lista_tempo[2];
      unsigned long volta4 = lista_tempo[4] - lista_tempo[3];
      unsigned long volta24 = volta2 + volta4;

      Serial.println("Volta 1: " + String(volta1));
      Serial.println("-> Volta 2: " + String(volta2));
      Serial.println("Volta 3: " + String(volta3));
      Serial.println("-> Volta 4: " + String(volta4));
      Serial.println("-> Tempo volta 2 e 4: " + String(volta24));
    }
  }
}

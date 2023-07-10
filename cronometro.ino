/*
Projeto produzido pela Maua Racing, dedicado ao teste do veiculo para a competição da FSAE.
Este código foi feito para contar o tempo que o carro demora no ENDURO, ACELERAÇÃO, AUTOCROSS(Tendo um começo e fim em pontos diferentes), tendo uma ideia que seja simples e facil de compreender.
A ideia é utilizar apenas UM(1) ESP32, conectando o outro infravermelho por um cabo longo no primeiro cone(Que contem o ESP32).
*/

// Constantes
const unsigned int pino_inicio = 26;              // Pino de sinal de start
const unsigned int pino_fim = 4;                 // Pino de sinal de end

//Variavel
bool crono_on = false;                            // Status do cronometro (Ligado ou Desligado)
unsigned long tempo_inicio = 0;                   // Tempo de incio
unsigned long tempo_fim = 0;                      // Tempo de fim

void setup() {
  Serial.begin(115200);
  pinMode(pino_inicio, INPUT);                    // Define o pino 26 como INPUT
  pinMode(pino_fim, INPUT);                       // Define o pino 14 como INPUT

  tempo_inicio = millis();
}

void loop() {
  // Começa a contar (Se passar pelo primeiro cone)
  if (digitalRead(pino_inicio) == 0 && crono_on == false) {
    Serial.println("COMEÇANDO!");
    tempo_inicio = millis();                     // Começa o cronometro
    crono_on = true;                             // Status do cronometro como ligado
  }

  // Mostra o tempo decorrido
  if (crono_on == true) {
    Serial.print(millis() - tempo_inicio);
    Serial.println(" milisegundos");

    // Para de contar (Se passar pelo segundo cone)
    if (digitalRead(pino_fim) == 0) {
      tempo_fim = millis();
      crono_on = false;

      // Calculo de tempo
      unsigned int tempo_decorrido = tempo_fim - tempo_inicio;
      unsigned int milisegundos = tempo_decorrido % 1000;
      tempo_decorrido = tempo_decorrido / 1000;
      unsigned int segundos = tempo_decorrido % 60;
      tempo_decorrido = tempo_decorrido / 60;
      unsigned int minutos = tempo_decorrido;

      // Saida no monitor serial
      Serial.println("##################### RESULTADO #####################");
      Serial.print("Tempo decorrido foi: ");
      Serial.print(minutos);
      Serial.print(" minutos, ");
      Serial.print(segundos);
      Serial.print(" segundos, ");
      Serial.print(milisegundos);
      Serial.print(" milisegundos.");
    }
  }
}

// Bibliotecas
#include <esp32/RTC.h>

// Configurações iniciais
void setup() {
  // Inicializa a porta serial
  Serial.begin(9600);

  // Inicializa o modulo RTC
  rtc_clk_apb_freq_set(RTC_APB_FREQ_1M);                                // Frequencia do barramento periferico RTC
  rtc_clk_cpu_freq_set(RTC_CPU_FREQ_80M);                               // Frquencia da CPU do RTC
  rtc_clk_slow_freq_set(RTC_SLOW_FREQ_32K_EXT);                         // Frequencia do sinal lento RTC
}

// Comandos para acontecer o tempo todo
void loop() {
  // Receber dados
  Recebe os dados do infra
    Serial.read //le o dados recebido
    if o dado for play                                                  // Se receber os dados certos dar play
      play = millis();

  if (play>0){
    uint32_t tempoDecorrido = millis() - play;                        // Calcula o tempo (milisegundo)

  
    printf("Tempo decorrido foi =>%02u:%02u.%03u\n", minutos, segundos, milisegundos);
  }


  }

}

const int LED_INTERNO = 2;

//realizar config
void setup() {
  //configura o pino como saída
  pinMode(LED_INTERNO, OUTPUT);
  
  //Inicia a comunicação com o computador 
  Serial.begin(115200);

  delay(1000);
  Serial.println("--Sistema Iniciado com Sucesso--");
}

//vai ficar rodando sempre
void loop() {
  //liga o led
  digitalWrite(LED_INTERNO, HIGH);
  Serial.println("LED: ligado");
  delay(500); //espera meio segundo


  //Desliga o led
  digitalWrite(LED_INTERNO, LOW);
  Serial.println("LED: desligado");
  delay(500); //espera meio segundo
  }

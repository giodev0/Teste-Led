const int LED_INTERNO = 2;
bool Sistema_ligado = false;

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
if(Serial.available() > 0){
  String comando = Serial.readString();
  comando.trim();

//liga o led
  if (comando == "LIGADO"){
  Sistema_ligado = true;
  digitalWrite(LED_INTERNO, HIGH);
  Serial.println("LED: ligado");
  delay(500); //espera meio segundo
  }

  //Desliga o led
  else if(comando == "DESLIGADO"){
  Sistema_ligado = false;
  digitalWrite(LED_INTERNO, LOW);
  Serial.println("LED: desligado");
  delay(500); //espera meio segundo
  }
  else{
    Serial.println("Comando inválido");
   }
  }
}

// Definindo as portas dos LEDs
const int ledVerde = 8;
const int ledAmarelo = 9;
const int ledVermelho = 10;

void setup() {
  // Configurando as portas como saídas
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  // Acende o LED vermelho por 6 segundos
  digitalWrite(ledVermelho, HIGH);
  delay(6000);
  digitalWrite(ledVermelho, LOW);

  // Acende o LED amarelo por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  delay(2000); 
  digitalWrite(ledAmarelo, LOW);

  // Acende o LED verde por 2 segundos
  digitalWrite(ledVerde, HIGH);
  delay(2000);

  // Pausa de 2 segundos com todos os LEDs desligados
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  delay(2000);  // Fazendo isso para conferir a diferença entre o Led dos Pedestres

  // Acende o LED verde por mais 2 segundos (tempo adicional para pedestres)
  digitalWrite(ledVerde, HIGH);
  delay(2000);
  digitalWrite(ledVerde, LOW);

  // Acende o LED amarelo por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  delay(2000);
  digitalWrite(ledAmarelo, LOW);
}

const int sensorPin = A2;    // Porta analógica onde está o sensor de luz
const int greenPin = 8;      // Porta digital para o LED verde
const int yellowPin = 9;     // Porta digital para o LED amarelo
const int redPin = 10;       // Porta digital para o LED vermelho

int sensorValue = 0;         // Variável para armazenar o valor lido do sensor
int threshold = 400;         // Limite para definir quando está escuro

void setup() {
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);        // Inicializa a comunicação serial para monitorar os valores do sensor
  
  // Inicializa o semáforo com o LED verde aceso
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
}

void loop() {
  sensorValue = analogRead(sensorPin);  // Lê o valor do sensor de luz
  Serial.println(sensorValue);          // Mostra o valor do sensor no monitor serial (opcional)

  // Verifica se está escuro
  if (sensorValue < threshold) {
    // Apaga o LED verde e acende o LED amarelo
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(4000);  // Espera 4 segundos no amarelo

    // Apaga o LED amarelo e acende o LED vermelho
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
    delay(6000);  // Espera 6 segundos no vermelho

    // Após o ciclo, volta ao LED verde
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }

  delay(500);  // Intervalo de leitura do sensor para evitar leituras muito rápidas
}

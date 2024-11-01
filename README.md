# PonderadaArduino-Semana2
**Ponderada Arduino - Semana 2 (Projeto Farol)**

**Nome:** [Kauã Rodrigues dos Santos](https://github.com/kauarodriguessss)  
**Turma:** 11  
**Módulo:** 4 - Engenharia da Computação  

Este exercício consistia em montar e programar um semáforo que garanta a segurança de pedestres e veículos, seguindo a lógica de tempo de cada fase das luzes, desde a montagem dos LEDs até a programação da sequência correta.

#

# Parte 1 - Montagem Física do Semáforo
Nesta etapa, vou deixar uma imagem abaixo representando a construção física do projeto do farol

![Projeto](https://github.com/user-attachments/assets/74e753b3-3407-44fd-96fb-2df2325c06ba)

Eu utilizei a seguinte lógica na construção:
- Led Verde: Jumper Verde;
- Led Amarelo: Jumper Amarelo;
- Led Vermelho: Jumper Vermelho;
  
- Jumpers Brancos: Representando o Negativo;
- Jumper Marrom: Negativo ligado no GND (Arduino) e na protoboard.

- Leds conectados corretamente aos resistores para proteção dos leds

Realizei tudo isso para garantir clareza e facilidade de visualização do projeto.

## Especificações dos Componentes Utilizados
Para complementar o entendimento do projeto, abaixo segue a lista dos componentes utilizados e a explicação de cada um deles


| Componente    | Especificação                             | Quantidade | Função                                                       |
|---------------|------------------------------------------|------------|--------------------------------------------------------------|
| Arduino Uno   | Microcontrolador ATmega328P              | 1          | Controla o funcionamento e a lógica do semáforo              |
| Protoboard    | Protoboard padrão                        | 1          | Base para a conexão e organização dos componentes            |
| LED Vermelho  | Tensão: 2V, Corrente: 20mA              | 1          | Representa a fase de "parar" no semáforo                     |
| LED Amarelo   | Tensão: 2V, Corrente: 20mA              | 1          | Representa a fase de "atenção" no semáforo                   |
| LED Verde     | Tensão: 2V, Corrente: 20mA              | 1          | Representa a fase de "seguir" no semáforo                    |
| Resistores    | 220Ω                                     | 3          | Limitam a corrente para proteger os LEDs                     |
| Cabos Jumper  | Cabos macho-macho                        | 7     | Conectam os componentes ao Arduino e à protoboard            |

### Explicação dos Componentes

- **Arduino Uno**: Microcontrolador que executa o código e controla a sequência dos LEDs.
- **Protoboard**: Facilita a montagem do circuito sem a necessidade de solda.
- **LEDs**: Cada cor representa uma fase do semáforo.
- **Resistores de 220Ω**: Protegem os LEDs de corrente excessiva.
- **Cabos Jumper**: Realizam as conexões entre o Arduino e os LEDs na protoboard.


#

# Parte 2: Programação e Lógica do Semáforo
Nesta etapa eu realizei o código para o projeto. O código fonte está no repositório e ele segue a seguinte regra para a sequência dos faróis.

- 6 segundos no vermelho
- 2 segundos no amarelo
- 2 segundos no verde
- 2 segundos de pausa para separação de tempo do led verde
- +2 segundos no verde (simulando um tempo adicional para pedestres terminarem a travessia)
- 2 segundos no amarelo

Antes de iniciar o projeto na protoboard, eu desenvolvi o mesmo projeto utilizando o tinkercad:
https://www.tinkercad.com/things/0KDSNfUrEdi-neat-allis-amur/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=kt3oytEjUobuAIcu1dLPgLgYmvioTgJETUjUwFfU5bk 

Eu também tirei uma foto, mas para a documentação nao ficar muito poluido com muitas imagens, gerei essa edição com a sequencia dos leds:

![Sequencia](https://github.com/user-attachments/assets/9ed5e3d4-b565-419b-b164-06953ae0df6a)

**Vídeo para assistir a sequencia do farol funcionando abaixo:**
https://drive.google.com/file/d/1HDDRxvw68jtXrUohjHZ7eKXzTWF8-zts/view?usp=sharing


#

# NOVO PROJETO DESENVOLVIDO EM SALA DE AULA (SUPORTE DO FAROL)
Temos um grande update desta atividade, pois a professora de design, Bruna, desenvolveu um suporte para os leds, e a atividade foi refeita durante o horário de aula utilizando o suporte. Sendo assim, daqui para baixo, está o desenvolvimento da atividade porém com o suporte.

# Parte 1 - Montagem Física do Semáforo
Abaixo vou deixar um link de um vídeo do projeto que eu desenvolvi:
https://drive.google.com/file/d/1noJPjZqbdNEEr5fKHAw_qF7nhHnEVbJh/view?usp=sharing

# Especificações dos Componentes Utilizados

| Componente                | Descrição                                                                                          | Especificações Técnicas                                                                                                                                                       | Aplicação no Projeto                                                                                           |
|---------------------------|----------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------|
| **Sensor de Luz (LDR)**   | Sensor que detecta a luminosidade do ambiente. Varia sua resistência conforme a intensidade da luz | - Resistência no escuro: ~1 MΩ <br> - Resistência sob luz intensa: ~10 kΩ <br> - Resposta rápida às mudanças de luminosidade                                                | Detecta quando o ambiente está escuro, ativando a lógica do semáforo.                                          |
| **LED Vermelho**          | LED que emite luz na cor vermelha, indicado para sinalização de alerta ou "pare".                  | - Tensão direta: ~1.8V a 2.2V <br> - Corrente: 20 mA                                                                                                                          | Sinaliza que o semáforo está na fase de parada quando o ambiente está escuro.                                  |
| **LED Verde**             | LED que emite luz na cor verde, geralmente utilizado para indicar status de "siga".               | - Tensão direta: ~2.0V a 3.0V <br> - Corrente: 20 mA                                                                                                                          | Sinaliza que o semáforo está na fase de passagem livre.                                                        |
| **LED Amarelo**           | LED que emite luz na cor amarela, utilizado para indicar atenção ou transição.                    | - Tensão direta: ~2.0V a 2.5V <br> - Corrente: 20 mA                                                                                                                          | Indica fase intermediária antes da ativação do LED vermelho.                                                   |
| **Resistores (4)**        | Limitam a corrente elétrica, protegendo os LEDs e o sensor de luz de sobrecorrente.               | - Resistência: 220Ω a 1kΩ (valor sugerido) <br> - Tolerância: ±5%                                                                                                            | Um resistor é utilizado em série com cada LED e o sensor para garantir a segurança dos componentes.            |
| **Jumpers Macho-Macho (8)** | Cabos de conexão para ligar os componentes à protoboard e ao Arduino.                          | - Tipo de Conexão: Macho para Macho <br> - Comprimento: Geralmente entre 10 cm a 20 cm                                                                                        | Interconectam o sensor de luz, LEDs, resistores e a placa do Arduino na protoboard.                            |
| **Jumpers Macho-Fêmea (6)** | Cabos de conexão usados para conectar componentes com pinos fêmea.                            | - Tipo de Conexão: Macho para Fêmea <br> - Comprimento: Geralmente entre 10 cm a 20 cm                                                                                        | Facilita as conexões entre o Arduino e a protoboard.                                                           |
| **Protoboard**            | Placa de prototipagem que permite montar circuitos sem a necessidade de solda.                    | - Dimensões: Varia entre 170 a 830 pontos de conexão <br> - Conexões: Pistas de alimentação laterais e área central para componentes                                         | Utilizada para montar o circuito dos LEDs e do sensor de luz.                                                  |
| **Arduino Uno**           | Placa microcontroladora baseada no ATmega328P.                                                    | - Tensão de Operação: 5V <br> - Pinos Digitais: 14 (6 podem ser usados como PWM) <br> - Pinos Analógicos: 6 <br> - Corrente DC por pino I/O: 20 mA | Controla a lógica do semáforo e processa os sinais recebidos do sensor de luz.                                 |



# Parte 2: Programação e Lógica do Semáforo
Como eu já havia desenvolvido a atividade antes da aula. Terá 2 códigos no repositório e o código com a nova lógica se chama "FarolComSensor".

A lógica consiste em, ser um farol, porém com um sensor de luminosidade que enquanto houver luz o farol fica verde (indicando que não tem nenhuma pessoa querendo atravessar), porem quando fica sombra (indicando que tem uma pessoa esperando para passar) o farol passa a ficar amarelo por 4 segundos e vermelho por 6 segundos. Depois volta a ficar verde novamente esperando indentificar outro momento de sombra para fechar o farol.

Voce pode verificar o funcionamento do projeto com o vídeo a seguir:
https://drive.google.com/file/d/1KizCjeezN-gzNzNmao0sSrPfmNECFQva/view?usp=sharing

# Parte 3: Avaliação em Pares
### Avaliador: Ian Pereira Simão

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                            | 0                        |    A utilização dos resistores está correta, me atentaria para o uso do resistor no ground ao invés de usá-lo no positivo.   |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        |       Apesar da inversão da ordem dos comandos a temporização está correta.     | 
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        |  os códigos estão bem implementados e comentados.  |
| Extra: Implmeentou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | Até 1              |  Até 0,5                         | 0                        |        o sensor de luminosidade é uma boa utilização de componente para esta implementação, parabens!                   |
|  |                                                             |  | |*Pontuação Total 10*|

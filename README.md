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
Nesta etapa eu realizei o código para o projeto. O código fonte está no repositório e ele segue a seguinte regra para a sequência dos faróis

- 6 segundos no vermelho
- 2 segundos no amarelo
- 2 segundos no verde
- 2 segundos de pausa para separação de tempo do led verde
- +2 segundos no verde (simulando um tempo adicional para pedestres terminarem a travessia)
- 2 segundos no amarelo

**Vídeo para assistir a sequencia do farol funcionando abaixo:**
https://drive.google.com/file/d/1HDDRxvw68jtXrUohjHZ7eKXzTWF8-zts/view?usp=sharing

Eu também tirei uma foto, mas para a documentação nao ficar muito poluido com muitas imagens, gerei essa edição com a sequencia dos leds:

![Sequencia](https://github.com/user-attachments/assets/9ed5e3d4-b565-419b-b164-06953ae0df6a)

#

# Parte 3: Avaliação de Pares
[Aguardando...]

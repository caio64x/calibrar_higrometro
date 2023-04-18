
# Calibração de higrometro 

Este projeto tem o objetivo de auxiliar na calibração do sensor higrômetro ou sensor de umidade de solo.

Objetivos:

- [x] Leitura do valor analógico do sensor de umidade de solo. 
- [x] Escala da umidade.
- [x] Exibir porcentagem da umidade do solo.
- [x] Calibração do sensor.


## 🚀 Instruções de montagem

Estas são as instruções de ligações para a montagem do circuito, existem modelos deste sensor, onde pode variar qual o metodo de aferição, ou seja, pode medir resistência ou condução, sendo a condução de 1024 à 0 (Seco - Molhado) ou 0 à 1024 (Molhado - Seco) respectivamente.
OBS: A imagem é apenas uma orientação, pode apresentar diferenças entre layot de peças ou modelos inseridos em comparação em seu modelo real.

<img src="/calibrar_higrometro/montagem.png">

### Materiais utilizados:
```
- Arduino Uno R3.
- Sensor higrometro ou sensor de umidade de solo.
- Cabos para as ligações.
```


### 🔧 Sobre o higrômetro ou sensor de umidade de solo

<table>
  <tr>
    <td>Higrômetro ou sensor de umidade de solo</td>
    <td><img src="/calibrar_higrometro/sensor_solo_higrometro.jpeg" alt="sensor higrometro"></td>
  </tr>
</table>


>O higrômetro ou sensor de umidade do solo é um dispositivo utilizado para medir a umidade da terra. Ele é geralmente enterrado no solo, próximo às raízes das plantas, para monitorar a quantidade de água disponível no solo. É comumente utilizado em aplicações de irrigação, plantações, agricultura e pecuária.

>Os sensores de umidade do solo são projetados para serem resistentes à corrosão e capazes de suportar as condições climáticas e ambientais em que são instalados. Eles geralmente possuem uma instalação simples, com dois eletrodos que são inseridos no solo para conduzir corrente elétrica. A umidade do solo afeta a resistência elétrica do solo, onde a água diminui a resistência e o solo seco conduz com mais dificuldade.

>A leitura da umidade do solo é obtida por meio da comparação da resistência elétrica medida pelo sensor com os valores de referência previamente calibrados. Com base nessa leitura, é possível determinar o nível de umidade do solo e tomar decisões informadas sobre a irrigação ou outras práticas agrícolas.

>É importante notar que a calibração adequada dos sensores de umidade do solo é essencial para obter medições precisas. A calibração deve ser realizada com base nas características do solo específico em que o sensor está sendo utilizado, uma vez que diferentes tipos de solo têm diferentes propriedades elétricas.


## Como realizar a calibração do sensor higrômetro ou sensor de solo

>A calibração de um sensor higrômetro para a função map do Arduino envolve os seguintes passos resumidos:

>Obtenha leituras de umidade do sensor: Use o sensor higrômetro conectado ao Arduino para obter leituras de umidade do solo em diferentes condições.

>Anote as leituras e os valores de referência: Anote as leituras de umidade obtidas pelo sensor e os valores de referência correspondentes, obtidos por meio de um método confiável de medição de umidade do solo, como um gravímetro ou outro sensor de umidade calibrado.

>Determine a relação entre as leituras do sensor e os valores de referência: Use a função map do Arduino para mapear as leituras do sensor de umidade para os valores de referência correspondentes. Uma diversão

>Ajuste os parâmetros da função map: Ajuste os parâmetros da função map, como os valores de entrada e os valores de saída, com base nas leituras do sensor e nos valores de referência anotados na etapa 2. É

>Valide a calibração: Verifique se a calibração do sensor higrômetro é precisa, comparando as leituras do sensor com os valores de referência em diferentes condições de umidade e solo ao longo do tempo.

O ajuste será feito na função map que funciona da seguinte forma.

`map(valor lido, mínimo v sensor, máximo v sensor, mínimo %, máximo %)`

```
//conversão da escala do valor analogico para escala de 0% a 100%
void PorcentagemUmidade(int readValue){
  // sensor - valor do solo, minimo sensor, maximo sensor, minimo e maximo em percentual
  readValue = 100 - (map(readValue, 330, 1024, 0, 100));

  Serial.print("Umidade do solo: "); 
  Serial.print(readValue);
  Serial.print("%");
  Serial.println("");
}
```

Outra alternativa é trabalhar como uma escala manualmente, como neste exemplo.

```
const int drySoil = 1010;   //solo muito seco
const int dampSoil = 600;   //solo seco
const int soakedSoil = 545; //solo encharcado
```
## 🛠️ Construído utilizando

* [Arduino IDE 2.0.4](https://downloads.arduino.cc/arduino-ide/nightly/arduino-ide_nightly-latest_Windows_64bit.zip) - O IDE usado.

* [Fritzing](https://fritzing.org/download/) - Software para prototipagem.

Alternativa ao Fritzing

* [Tinkercad](https://www.tinkercad.com/) - Site de simulação de projetos com arduino e modelagem.


[⬆ Voltar ao topo](#Acionamento_de_motor)<br>

// Define o pino A0 como "Sensor de umidade"
const int pinSensor = A0;

//porcentagem de umidade do solo
int readValue = 0;

void setup() {
  Serial.begin(9600);
  //sensorpin mode
  pinMode(pinSensor, INPUT);
}

//converção da escala do valor analogico para escala de 0% a 100%
void PorcentagemUmidade(int readValue){
  // sensor - valor do solo, minimo sensor, maximo sensor, minimo e maximo em percentual
  readValue = 100 - (map(readValue, 330, 1024, 0, 100));

  Serial.print("Umidade do solo: "); 
  Serial.print(readValue);
  Serial.print("%");
  Serial.println("");
}

void loop() {
 
  //leitura do sensor
  readValue = analogRead(pinSensor);
  
  Serial.print("Valor no sensor: "); 
  Serial.println(readValue);
  
  PorcentagemUmidade(readValue);
  
  delay(2000);
}
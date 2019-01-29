/*
  ESP8266 Blink 
  Sergio Valdez
   sketch que enciende el LED_BUILTIN, LED interno del WEMOS
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // inicializamos LED_BUILTIN como salida
}


void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // Apagamos el LED
  delay(1000);                      // espera un segundo
  digitalWrite(LED_BUILTIN, HIGH);  // Encendemos el LED
  delay(2000);                      // Semantiene encendido por dos segundos
}

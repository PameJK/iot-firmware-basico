#include <Arduino.h>

const int ledPin = 22; // Pin donde está conectado el LED

void setup() {
  // Inicializar comunicación serial para ver los mensajes
  Serial.begin(115200);
  
  // Configurar el pin 22 como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Encender el LED
  digitalWrite(ledPin, HIGH);
  Serial.println("LED encendido");
  
  // Esperar 3 segundos (3000 milisegundos)
  delay(3000);
  
  // Apagar el LED
  digitalWrite(ledPin, LOW);
  Serial.println("LED apagado");
  
  // Esperar 3 segundos antes de volver a encenderlo
  delay(3000);
}

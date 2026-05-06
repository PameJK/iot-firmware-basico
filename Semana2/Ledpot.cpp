const int ledPin = 22;      // Pin donde está conectado el LED
const int potPin = 34;      // Pin analógico para el potenciómetro (se recomiendan pines ADC1 como el 34, 35, 32 o 33)

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  
  // El pin del potenciómetro no requiere inicialización explícita para analogRead
}

void loop() {
  // 1. Leer el valor del potenciómetro 
  // El ESP32 tiene un ADC de 12 bits, por lo que el valor va de 0 a 4095
  int potValue = analogRead(potPin);
  
  // 2. Mapear el valor leído (0-4095) a un valor de PWM (0-255)
  int pwmValue = map(potValue, 0, 4095, 0, 255);
  
  // 3. Escribir el valor PWM en el pin del LED para ajustar su brillo
  // Nota: En versiones recientes del núcleo de Arduino para ESP32, analogWrite funciona directamente.
  analogWrite(ledPin, pwmValue);
  
  // Mostrar los valores en el Monitor Serie
  Serial.print("Valor Potenciómetro: ");
  Serial.print(potValue);
  Serial.print("\t|\tBrillo LED (PWM): ");
  Serial.println(pwmValue);
  
  delay(15); // Pequeño retardo para dar estabilidad a la lectura
}

from machine import Pin
import time

# Configurar el pin 22 como salida
led = Pin(22, Pin.OUT)

# Encender el LED
led.value(1)
print("LED encendido")

# Esperar 3 segundos
time.sleep(3)

# Apagar el LED
led.value(0)
print("LED apagado")

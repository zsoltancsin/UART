import serial
import led_pb2  # Ez a generált protobuf fájl

# UART kommunikáció beállítása
ser = serial.Serial('COM5', 115200)  # Cseréld ki a megfelelő COM portot és baud rate-et!

# LED parancs készítése (bekapcsolás)
led_command = led_pb2.LedCommand()
led_command.command = led_pb2.LedCommand.LED_ON  # LED bekapcsolása

# Üzenet elküldése
ser.write(led_command.SerializeToString())  # Az üzenet elküldése a kártyára

# Várakozás 1 másodpercet
import time
time.sleep(1)

# LED kikapcsolása
led_command.command = led_pb2.LedCommand.LED_OFF  # LED kikapcsolása
ser.write(led_command.SerializeToString())  # Az üzenet elküldése a kártyára

ser.close()  # Kommunikáció lezárása
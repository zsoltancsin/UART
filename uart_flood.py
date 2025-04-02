import serial
import led_pb2  # A generált protobuf fájl
import time
import random

def send_command(ser, command):
    """LED parancs küldése az STM32-re."""
    led_command = led_pb2.LedCommand()
    led_command.command = command
    ser.write(led_command.SerializeToString())

def send_invalid_data(ser):
    """Érvénytelen adat küldése az STM32-re."""
    invalid_data = bytes([random.randint(0, 255) for _ in range(random.randint(1, 10))])
    ser.write(invalid_data)

def flood_test(port='COM5', baudrate=115200, duration=10):
    """Flood teszt az STM32-re UART-on keresztül."""
    ser = serial.Serial(port, baudrate, timeout=1)
    start_time = time.time()
    
    while time.time() - start_time < duration:
        if random.random() < 0.8:
            command = random.choice([led_pb2.LedCommand.LED_ON, led_pb2.LedCommand.LED_OFF])
            send_command(ser, command)
        else:
            send_invalid_data(ser)
        
        time.sleep(random.uniform(0.001, 0.01))  # Nagyon gyors küldés kis random szünetekkel
    
    ser.close()
    print("Flood teszt befejezve.")

if __name__ == "__main__":
    flood_test()
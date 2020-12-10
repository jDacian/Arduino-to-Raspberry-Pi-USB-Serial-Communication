import serial #uninstall serial and install pyserial first

data = serial.Serial('/dev/ttyACM0',9600)
s = [0]
while True:
	read_serial=data.readline()

	print(read_serial)

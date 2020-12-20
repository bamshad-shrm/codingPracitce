import sys

while True:
	try:
		f = open(str(input("Please enter the name of the file: ")),'r')
		break
	except IOError as e:
		print ("Error number:",e.errno,"Error message:",e.strerror)

print("Great it is the content of the file:")
for line in f:
	print(line)






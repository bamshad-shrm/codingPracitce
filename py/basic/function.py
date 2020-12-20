#! /usr/bin/python


def mySum(firstNumber,secondNumber):
	sum = firstNumber+secondNumber
	return sum

x = int(input("Enter an integer: "))
y = int(input("Enter another integer: "))	

result = mySum(x,y)

print('The sum of ', x, ' and ', y, ' is ', result, '.', sep='')

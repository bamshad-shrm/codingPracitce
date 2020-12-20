#! /usr/bin/python

class mathCls:

	# If we do not use self as the first argumment and call the function from an object, we will face with following error:
	# TypeError: sumFnc() takes 2 positional arguments but 3 were given  

	def sumFnc(self,firstNumber,secondNumber):
		sum = firstNumber+secondNumber
		return sum


x = int(input("Enter an integer: "))
y = int(input("Enter another integer: "))	

mathObj = mathCls()



print('The sum of ', x, ' and ', y, ' is ', mathObj.sumFnc(x,y), '.', sep='')

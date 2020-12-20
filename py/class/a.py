# Note: if we use import bamshadMath we will face with the error of: TypeError: 'module' object is not callable 
from bamshadMath import bamshadMath

x = int(input("Enter an integer: "))
y = int(input("Enter another integer: "))	

bamshadMathObj = bamshadMath()

print('The sum of ', x, ' and ', y, ' is ', bamshadMathObj.sumFnc(x,y), '.', sep='')



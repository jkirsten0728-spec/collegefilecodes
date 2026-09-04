friends = 10

#addition

    #friends += 1

#subtraction

    #friends -=2

#multiplication

    #friends *=3

#division

    #friends /=2

#exponent

    #friends **=2

#modulus
remainder = friends % 6

print(friends)
print(remainder)


x = 3.14
y= 4
z= 5
#result = round (x)

    #absolute value
#result =abs(y)

#4x4x4
#result=pow(4,3)

#result= max(x,y,z)
#result= min(x,y,z)
#print(result)

import math

#print(math.pi)
#print(math.e)

x=9.1

#result=math.sqrt(x)
#print(result)

#result= math.ceil(x)
#result= math.floor(x)
#print(result)

#radius= float(input('enter the radius of a circle'))
#circumference = 2*math.pi*radius
#print(f"the circumfernce is: {round(circumference, 2)}")


#area of the circle
#radius = float(input("enter the radius of a circle:"))
#area = math.pi* pow  (radius, 2)
#print(f"the area of the circle is: {round(area)}cm^2")

#hypothenus of the right triangle 
a= float(input("enter side A:"))
b= float(input("enter side B:"))

c= math.sqrt(pow(a,2) +pow(b,2))

print(f"Side C={round(c, 2)}")

name = input("What is your name")
age = int(input("How old are you?"))

age= age +1
print(f"Hello {name}!")
print(f"you are {age} yrs old")

######################## exercise

length=int(input("Enter the length"))
width=int (input("Enter the width"))
area= length * width
print(f"the area is: {area} cm")

######################## exercise 2

item= input("What item would you like to buy?: ")
price= float(input("what is the price?: "))
quantity= int(input("How many would you like?: "))
total= price * quantity

print(f"you have bout {quantity} x {item}/s")
print(f"your total is {total}")
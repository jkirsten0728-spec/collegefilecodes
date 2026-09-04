
age = int(input("Enter your age: "))


if age >100:
   print("You're too old to sign up")


elif age>= 18:
   print("You are now signed up!")


elif age <0:
   print(" you havent born yet!")


else:
   print(" you must be 18+ to sign up")
response = input("Would you like food? (Y/N):")
#############################################

if response == "Y" or "y":
   print("have some food!")


else:
   print("no food for you!")


#####################################

name = input("Enter your name:")
if name == "":
   print("You did not type in your name!")


else:
   print(f"hello{name}")


###############################
for_sale =True
if for_sale:
    print("This item is for sale")
else:
    print("This item is Not for sale")
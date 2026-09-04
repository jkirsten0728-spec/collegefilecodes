weight= float(input("enter your weight:"))
unit = input("kilograms or pounds? (K or L): ").strip().upper()


if unit == "K":
    weight = weight * 2.205
    unit ="Lbs"
print(f"Your weight is: {round(weight, 1)} {unit}")

if unit == "L": 
    weight = weight / 2.205
    unit = "Kgs."
print(f"Your weight is: {round(weight, 1)} {unit}")

else:
print(f"'{unit}' was not valid")



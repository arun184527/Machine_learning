a = int(input("Enter first number a : "))
b = int(input("Enter second number b : "))
c = int(input("Enter third number c : "))

if a > b and a > c:
    print("Largest is a :", a)
elif b > c:
    print("Largest is b :", b)
else:
    print("Largest is c :", c)
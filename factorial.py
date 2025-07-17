def factorial(n):
    return 1 if n == 0 else n * factorial(n - 1)
n = int(input("Enter the number: "))
print("factorial is:" , factorial(n)) 

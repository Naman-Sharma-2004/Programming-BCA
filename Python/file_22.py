# WAP to find a number is prime or not
number = int(input("Enter the number: "))
if(number > 1):
    for i in range(2, number):
        if(number % i == 0):
            print("Not a prime number")
            break
        else:
            print("Prime number")
   
    
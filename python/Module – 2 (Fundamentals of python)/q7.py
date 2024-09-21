# Write a Python program to find whether a given number is even or odd,print out an appropriate message to the user

num = int(input("enter the number:"))
if num % 2 == 0:
    print("number is even",num)
elif num % 2 != 0:
    print("number is odd",num)
elif num == 0:
    print("number is zero",num)
else:
    print("number is negative",num)

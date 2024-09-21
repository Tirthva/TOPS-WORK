# Write python program that swap two number with temp variable and without temp variable.
num1 = int(input("enter the first number:"))
num2 = int(input("enter the second number:"))
print("num1 is:",num1)
print("num2 is:",num2)

temp = num1
num1 = num2
num2 = temp

print("after swaping num1=",num1)
print("after swaping num2=",num2)

#without temp

num1 = int(input("enter the first number:"))
num2 = int(input("enter the second number:"))
print("num1 is:",num1)
print("num2 is:",num2)

num1 , num2 = num2 , num1

print("after swaping num1=",num1)
print("after swaping num2=",num2)
# Write a Python program to sum of three given integers. However, if two values are equal sum will be zero

n1=int(input("enter num1:"))
n2=int(input("enter num2:"))
n3=int(input("enter num3:"))
if n1 == n2 or n2 == n3 or n3 == n1:
    print("sum is zero")
else:
    sum = n1 + n2 + n3 
    print("the sum of n1,n2 and n3 is",sum)

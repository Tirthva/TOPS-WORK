# Write a Python program to generate and print a list of first and last 5
# elements where the values are square of numbers between 1 and 30.
n=[]
for i in range(1,31):
    n.append(i*i)
print("fisrt 5",n[0:5])
print("last 5",n[-5:])







    
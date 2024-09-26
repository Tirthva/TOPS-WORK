# Write a Python function to check whether a number is perfect or not.
n1 = 6
sum = 0
for i in range(1, n1):
    if n1 % i == 0:
        sum += i
if sum == n1:
    print(n1,"perfect num")
else:
    print(n1,"not perfect num")
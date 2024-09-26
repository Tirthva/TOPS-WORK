# Write a Python function to calculate the factorial of a number (a
# nonnegative integer)
number = 5
result = 1
for i in range(1, number + 1):
    result *= i
print("fact. no:{result}")
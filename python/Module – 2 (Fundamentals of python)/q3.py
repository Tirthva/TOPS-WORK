# Write a Python program to get the Fibonacci series of given range.
n = int(input("Enter the number: "))
a, b = 0, 1
print("Fibonacci no:")
for _ in range(n):
    print(a, end=" ")
    a, b = b, a + b


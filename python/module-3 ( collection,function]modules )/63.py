# Write a Python program to returns sum of all divisors of a number
num = 12
#1 * 2 * 3 * 4 * 6 *
sum_divisor= 0
for i in range(1, num + 1):
    if num % i == 0:
        sum_divisor += i

print("sum of divisor:", sum_divisor)
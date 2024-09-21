n = int(input("enter number : "))
for i in range(1, 2 * n):
    spaces = abs(n - i)
    stars = "*" if i == 1 or i == 2 * n - 1 else "*" + " " * (2 * (n - spaces) - 3) + "*"
    print(" " * spaces + stars)

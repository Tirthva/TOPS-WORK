# Write a Python program to count the number of characters (character frequency) in a string
string = input("Enter a string: ")

print("frequency:")
for char in set(string):
    print(f"{char}: {string.count(char)}")
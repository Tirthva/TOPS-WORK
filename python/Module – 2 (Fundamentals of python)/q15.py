# Write a Python program to count occurrences of a substring in a string
# string = ("hey radhi hello hello hey")
# print(string.count("hello"))

string = input("enter string")
print(string)
sub_string = input("enter word from string:")

if sub_string in string:
    print(string.count(sub_string))
else:
    print("word is not in string")

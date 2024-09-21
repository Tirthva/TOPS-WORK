# Write a Python program to test whether a passed letter is a vowel or not.

letter = input("enter the letter from A-Z:")
vowel = ['a','e','i','o','u']
if letter in vowel:
    print("letter is",letter,"vowel")
else:
    print("letter is" ,letter,"const")
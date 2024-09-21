# Write a Python program to get a single string from two given strings,separated by a space and swap the first two characters of each string.
fname = input("Enter the first string: ")
lname = input("Enter the second string: ")

if len(fname) >= 2 and len(lname) >= 2:
    swapped_fname = lname[:2] + fname[2:]
    swapped_lname = fname[:2] + lname[2:]
    print(swapped_fname + ' ' + swapped_lname)
else:
    print("must have two character")
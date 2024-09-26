# Write a Python program to count the number of strings where the string
# length is 2 or more and the first and last character are same from a given
# list of strings.

string = ["abcda", "hello", "world", "roar", "xyz", "lol"]
count = 0
for s in string:
    if len(s) >= 2 and s[0] == s[-1]:
        count += 1
print("length is 2 or more and first and last character same:", count)
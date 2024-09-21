# Write a Python function that takes a list of words and returns the length of the longest one.
# string = input("enter the string")
sentence = input("enter the string")
for word in sentence.split():
    print(f"{word}: {len(word)}")
    
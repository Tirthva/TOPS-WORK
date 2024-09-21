s = input("Enter a string: ")
def str1(s):
    if len(s) < 2:
        return "instead"
    else:
        return s[:2] + s[-2:]
print("Result:", str1(s))
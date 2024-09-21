# Write a Python function to insert a string in the middle of a string.
string = input("Enter the main string: ")
def add_middle(string, insert_s1):
    halfoflength = len(string) // 2
    return string[:halfoflength] + insert_s1 + string[halfoflength:]
insert_s1 = input("Enter the string to insert: ")

print("Result: ", add_middle(string, insert_s1))

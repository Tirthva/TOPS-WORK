# def convert_string(s1, s2):
#     operations = []
#     i = 0
#     j = 0

#     while i < len(s1) and j < len(s2):
#         if s1[i] == s2[j]:
#             i += 1
#             j += 1
#         elif s1[i] != s2[j]:
#             if j + 1 < len(s2) and s1[i] == s2[j + 1]:
#                 operations.append("Insert " + s2[j])
#                 j += 1
#             elif i + 1 < len(s1) and s1[i + 1] == s2[j]:
#                 operations.append("Delete " + s1[i])
#                 i += 1
#             else:
#                 operations.append("Update " + s1[i] + " to " + s2[j])
#                 i += 1
#                 j += 1

#     while i < len(s1):
#         operations.append("Delete " + s1[i])
#         i += 1

#     while j < len(s2):
#         operations.append("Insert " + s2[j])
#         j += 1

#     return operations

# s1 = input("enter the string : ")
# s2 = input("enter string to convert string s1 :")
# operations = convert_string(s1, s2)

# print("Initial Strings:")
# print("s1 =", s1)
# print("s2 =", s2)
# print("")

# for i, operation in enumerate(operations):
#     print("Operation", i + 1, "-", operation)

# print("\nFinal Result:")    
# print("s1 =", s2)
# print("s2 =", s2)




def convert_string(s1, s2):
    operations = []
    i = 0
    j = 0

    while i < len(s1) and j < len(s2):
        if s1[i] == s2[j]:
            i += 1
            j += 1
        elif s1[i] != s2[j]:
            if j + 1 < len(s2) and s1[i] == s2[j + 1]:
                operations.append("Insert " + s2[j])
                j += 1
            elif i + 1 < len(s1) and s1[i + 1] == s2[j]:
                operations.append("Delete " + s1[i])
                i += 1
            else:
                operations.append("Update " + s1[i] + " to " + s2[j])
                i += 1
                j += 1

    while i < len(s1):
        operations.append("Delete " + s1[i])
        i += 1

    while j < len(s2):
        operations.append("Insert " + s2[j])
        j += 1

    return operations

s1 = input("enter the string : ")
s2 = input("enter string to convert string s1 :")
operations = convert_string(s1, s2)

print("Initial Strings:")
print("s1 =", s1)
print("s2 =", s2)
print("")

index = 1
for operation in operations:
    print("Operation", index, "-", operation)
    index += 1

print("\nFinal Result:")    
print("s1 =", s2)
print("s2 =", s2)
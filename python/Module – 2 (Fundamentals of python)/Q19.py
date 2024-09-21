# Write a Python program to find the first appearance of the substring
# 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the
# # whole 'not'...'poor' substring with 'good'. Return the resulting string.
def result(str1):
    poor = str1.find('poor')
    not_poor = str1.find('not')

    if poor != -1 and not_poor != -1 and not_poor < poor:
        return str1.replace(str1[not_poor:poor + 4], 'good')
    else:
        return str1

print(result("The is not that poor!")) 

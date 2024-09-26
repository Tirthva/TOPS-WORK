#Differentiate between append () and extend () methods?
"""
append(): a method adds a single element to the end of a list.
          It takes only one argument, which is the element to be added.
          example:
            my_list = [1, 2, 3]
            my_list.append(4)
            print(my_list)  
            Output: [1, 2, 3, 4]

extend(): extend() method adds multiple elements to the end of a list.
          It takes an iterable variable as an argument, and adds all its elements to the list.
          example:
            my_list = [1, 2, 3]
            my_list.extend([4, 5, 6])
            print(my_list)  
            Output: [1, 2, 3, 4, 5, 6]
            """
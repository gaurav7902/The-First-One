number = int(input("Enter a number: "))
table_rows = [] #list declaration
for i in range(1,11):    # starting point (inclusive),ending point (exclusive)
#range(1, 10, 2) starts from 1 and increases by 2 until it reaches 10 (not including 10)
    row = f"{number} * {i} = {number*i}"
    table_rows.append(row)
for row in table_rows:   #runs the loop until there is an element in list
    print(row)

#Python allows the elements of the list to have different types
# my_list = [1, 2, 3, 'apple', 4.5]  
# negetive index also exists my_list[1] is 2 and is my_list[-1] is 4.5
# append() adds an item at the end of the list

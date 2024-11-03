#make uppercase to any text ie. strings by .upper

hello = 'heLlo rEaLiTy'
print(hello.upper())
print(hello)
#or do like this to permanent
hello = 'heLlo rEaLiTy'.upper()
print(hello)
print(hello.lower())
print(hello.capitalize())
# .lower() also exists
#.capitalize
print(hello.lower().count('ll'))
#used to check a substrings numbers of repetetion
print(hello.lower().count('e'))
print('hello idiots how are you'.count('o'))
score = int(input("Enter the score -->"))
present = input("Present in the classes (yen/no):").lower() == "yes"
if score >=90 and present:    #beware of the colon please
    grade = 'A'
elif score >=85 and present:
    grade = 'B'
elif score >=80 and present:
    grade = 'C'
elif score >=70 and present:
    grade = 'D'
    # grade = 'X' //this is also in the same block of elif
else:
    grade = 'E'
print("Your grade is:",grade)
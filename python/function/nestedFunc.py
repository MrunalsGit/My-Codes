def student_report(list,m):

    def average(list,m):
        sum = 0
        for x in list:
            sum = sum + x

        avg = sum/m
        return avg
    def grades(avg):
        
        if avg >90:
            return "A+"
        elif avg > 80 :
            return "A"
        elif avg > 70 :
            return "B+"
        elif avg > 60 :
            return "B"
        elif avg > 50 :
            return "C+"
        elif avg > 40 :
            return "C"
        elif avg < 41 :
            return "F"
        
    avg = average(list,m)
    grade = grades(avg)

    return avg,grade
        

n = int(input("Enter number of students = "))
m = int(input("Enter number of subjects = "))

student = {}
student_grade = {}
for x in range (n):
    student[x] = []
    print("\nEnter student ", x+1 , " marks :\n")
    for y in range (m):

        a = int(input(f"Subject {y+1} marks = "))
        student[x].append(a)
    student_grade[x] = []
    student_grade[x].append( student_report(student[x],m) )

print("\n\nGrades of students....")
for x in range (n):
    
    print(f"\nStudent {x+1} average = ", student_grade[x][0][0])
    print(f"Student {x+1} grade   = ", student_grade[x][0][1])

print("\n",student)
"""
Takes two inputs, n (number of students) and m (number of subjects), and then take each student's marks 
for each subject. Using nested functions, it should calculate the average for each student and assign a
grade based on their average marks. The program should also display each students grade at the end.
"""
def course():
    courses = []
    n = int(input("Enter no. of courses = "))
    for x in range(n):
        print("---------------")
        c_name = input("Enter course name = ")
        prof_name = input("Enter professor name = ")
        no_std = int(input("Enter no. of std = "))
        duration = int(input("Enter duration in weeks = "))

        courses.append({"course_name":c_name, "professor_name": prof_name, "no_of_std": no_std,"course_duration":duration})

    h_std = 0
    index = 0

    for x in range (len(courses)):
        if courses[x]["no_of_std"] > h_std:
            h_std = courses[x]["no_of_std"]
            index = x

    print("***************")
    print("Profesor with highest enrollment in a course = ", courses[index]["professor_name"])
    print("And name of that course is = ", courses[index]["course_name"])
    
    print("**************")
    search = input("\nWhich professors avg do u want to know = ")

    weeks = 0
    course_count = 0
    for x in range(len(courses)):
        if courses[x]["professor_name"] == search:
            weeks += courses[x]["course_duration"]
            course_count += 1

    avg = weeks/course_count
 
    print("Average course duration of ", search , " is = ", avg)

course()
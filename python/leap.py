year = int(input("Enter year"))

# if year % 400 == 0 :
#     print("True")

# elif year % 100 == 0 :
#     print("False")

# elif year % 4 == 0 :
#     print("True")

# else :
#     print("False")


def leap(year) :

    ret = False

    if year % 400 == 0 :
        print("True")

    elif year % 100 == 0 :
        print("False")
    elif year % 4 == 0 :
        print("True")

    else :
        print("False")

    return ret

print (leap(year))
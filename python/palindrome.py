
num = int(input("Enter a number ="))

a = num

r = 0

rev = 0


while a > 0 :

    r = a % 10 

    rev = (rev*10) + r

    a = a // 10 


if rev == num :

    print("It is a palindroe number ")

else :

    print ("It is not a palindrome")

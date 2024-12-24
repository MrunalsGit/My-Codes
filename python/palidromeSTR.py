def if_palin(a):

    count = 0
    b = 0

    for x in range (1, len(a)+1):

        if a[-x] == a[b] :
            count = count
            b += 1

        else :
            count += 1
            b += 1

    if count == 0 :
        return "It is a palindrome "
    else:
        return "It is not a palindrome "
    
a = input("Enter number = ")

print(if_palin(a))
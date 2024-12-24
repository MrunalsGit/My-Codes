class math :

    def __init__(self,num) :

        self.num = num

    def factorial (self) :

        n =1
        sum = 1

        while n < self.num + 1 :

            sum = sum *n

            n += 1

        print(f'Factorial = {sum}')

x = math(5)

x.factorial()
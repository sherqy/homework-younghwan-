# 10/16 practice

a0 = 1
a1 = 0.125
s = a0 + a1


n = int (input ("Enter the index number (n): " ))


if n == 1 :
    print ("a1 = %.8f" %a0)

elif n == 2 :
    print ( "a2 = %.8f" %a1)

elif n >= 3 :

    for i in range (3, n+1) :
        a2 = -0.25*a1 + 0.125*a0
        s += a2

        a0 = a1
        a1 = a2

        print ("a%i = %.8f" %(i, a2) )
        print ("Sum of a%i is %.8f" %(i, s) )
        print ()

else :
    print ("You entered a wrong number!")



# Finding prime numbers
#2018. 10. 30
#version 2: printing prime numbers in the function is_prime ()


def is_prime (primes, number, printed_cnt):
    count= 0
    
    for prime_number in primes :
        if (number % prime_number) == 0 :
            break
        else :
            count += 1

    if count == len (primes) :
        primes.append (number)

        print ("%7i" %number, end = "  ")
        printed_cnt += 1
        if printed_cnt % 10 == 0 :
            print ( )
    return printed_cnt


prime_num = [2, 3, 5, 7]
Maxnumber = int (input("Enter the maximum integer of prime numbers: ") )
printed_cnt = 4

for n in prime_num :
    print ("%7i" %n, end = "  ")  #처음 4개만 출력 
    
for n in range (11,Maxnumber+1) :
    printed_cnt = is_prime (prime_num, n, printed_cnt)

#count = 0
#for n in prime_num :
#    print ("%7i" %n, end = "  ")
#    count += 1
#    if count % 10 == 0 :
#        print ( )


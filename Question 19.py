#19.Find the Factors of a Number in Python Language.
def printDivisors(n) :
    i = 1
    while i <= n :
        if (n % i==0) :
            print (i,end=" ")
        i = i + 1
         
# Driver method
print ("The divisors of 100 are: ")
printDivisors(100)
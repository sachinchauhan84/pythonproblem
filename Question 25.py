# Check Whether or Not a Number is a Harshad Number in Python.
n = 21
p=n
l=[]
sum1=0
while(n>0):
    x=n%10
    l.append(x)
    n=n//10
sum1=sum(l)
if(p%sum1==0):
    print("Harshad number")
else:
    print("Not harshad number")

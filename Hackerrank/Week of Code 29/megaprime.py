import sys

def is_prime(n):

    if(n == 1):
        return False
    else:
        for i in range(2,n):
            if n%i == 0:
                return False

        return True


megaprimes = []
f,l = (raw_input().split(' '))
f = long(f)
l = long(l)

for i in range(f,l+1):
    if(is_prime(i)):
        temp = i
        flag = 1
        while(temp > 0):

            rem = temp % 10
            if(is_prime(rem) == False):
                flag = 0
                break
            temp = temp/10

        if flag == 1:
            megaprimes.append(i)

print len(megaprimes)

def check_forward(prev,remain):
    if(len(remain) == 0):
        return 1
    if(len(remain) >= 1 and remain[0] == '0'):
        return 0

    a = -1   # taking -1 as intializing value
    pos = -1
    flag = -1

    for i in range(1,(len(remain)+1)):
        a = int(str(remain[:i]))
        if(a == prev+1):
            flag = 1
            pos = i
            break

    if(flag == 1):
        return check_forward(a,remain[pos:])

def beautiful_numbers(num):
    for i in range(1,((len((num))/2)+1)):
        #print "****"
        prev = int((num[:i])) 
        remain = num[i:]
        if(check_forward(prev,remain) == 1):
            return prev


if __name__ == "__main__":
    q = int(input())
    for i in range(q):
        num = (raw_input())
        # num = list(str(num)) # typecasting it into a list in order to play with digits
        final = beautiful_numbers(num)
        if(final):
            print ("YES" + " " + str(final))
        else:
            print("NO")

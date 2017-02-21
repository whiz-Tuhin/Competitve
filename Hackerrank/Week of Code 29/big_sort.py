a = []
n = int(raw_input())

for i in range(0,n):
    v = int(raw_input())
    a.append(v)
print a

a.sort()
for i in range(0,n):
    print str(a[i])

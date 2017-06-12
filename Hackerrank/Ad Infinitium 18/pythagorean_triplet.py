import sys

def pythagoreanTriple(a):
    if(a % 2 == 0):
        n = int(a/2);
        m = 1;
        return map(int, [a, n**2 - m**2, n**2 + m**2]);
    else:
        m = int((a - 1)/2);
        n = m + 1;
        return map(int, [a, 2*m*n, n**2 + m**2]);

a = int(input().strip())
triple = pythagoreanTriple(a)
print (" ".join(map(str, triple)))

import math

n, m = input().split()
n = int(n)
m = int(m)
res = math.factorial(2*m+n-1)//math.factorial(n-1)//math.factorial(2*m)
print(res%1000000007)

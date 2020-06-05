a, b = input().split()
a = int(a)
b = int(b)
strin=""
while a + b !=2:
    if a==1:
        strin= strin+ str(b-1)+"B"
        break
    elif b == 1:
        strin= strin+ str(a-1)+"A"
        break

    if a < b:
        strin=strin + str(int(b/a))+"B"
        b= b%a
    elif a>b:
        strin=strin + str(int(a/b))+"A"
        a= a%b
    elif a==b and a!=1:
        strin = "Impossible"
        break
    if (a*b==0 ):
        strin = "Impossible"
        break
strin.replace(' ', '')
print(strin)


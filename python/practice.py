n=9
a=0
b=1
l=[0,1]
for i in range(n):
    c=a+b
    l.append(c)
    a=b
    b=c
print(l)

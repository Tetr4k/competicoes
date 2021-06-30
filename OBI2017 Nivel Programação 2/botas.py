n = int(input())
m = [0]*n
l = [0]*n
cont2 = int(0)
cont = int(0)
for x in range(n):
    b = input().split(" ")
    m[x] = int(b[0])
    l[x] = b[1]
for x in range(n):
    cont2 = cont
    cont3 = 1
    while (cont == cont2) and (cont3<n):
        if (m[x] == m[cont3]) and l[x]!=l[cont3]:
            cont+=1
        cont3+=1
    m[x] = 0
print("%d"% cont)

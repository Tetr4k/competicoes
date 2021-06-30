n = int(input())
dario = xerxes = int(0)
for y in range(n):
    a = input().split(" ")
    d = int(a[0])
    x = int(a[1])
    if d == 0:
        if x == 1 or 2:
            dario+=1
        else:
            xerxes+=1
    if d == 1:
        if x == 2 or 3:
            dario+=1
        else:
            xerxes+=1
    if d == 2:
        if x == 3 or 4:
            dario+=1
        else:
            xerxes+=1
    if d == 3:
        if x == 4 or 0:
            dario+=1
        else:
            xerxes+=1
    if d == 4:
        if x == 0 or 1:
            dario+=1
        else:
            xerxes+=1
if dario > xerxes:
    print("dario")
else:
    print("xerxes")

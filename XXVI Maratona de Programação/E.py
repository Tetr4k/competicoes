N = int(input())
L = input().split(" ")
ti = int(L[0])
di = int(L[1])
tq = 0
T = 0
for x in range(N-1):
	L = input().split(" ")
	t = int(L[0])
	d = int(L[1])
	if d != di:
		tq = t
		continue
	if t-ti>=10 and tq!=ti and tq != 0:
		T += ti
		ti = tq
		tq = t
		di = d
		continue
	ti = t
if tq != ti and tq != 0:
	T += ti+10
if ti>T:
	T=ti
print(T+10)

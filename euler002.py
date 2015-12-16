t = int(input())
for i in range(t):
	n = int(input())
	a, b, sum = 1, 2, 0
	while b <= n:
		if b%2 == 0:
			sum += b
		a, b = b, a+b
	print sum
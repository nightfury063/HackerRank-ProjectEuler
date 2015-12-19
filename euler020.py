def fact(n):
	factorials = [0]*1001
	factorials[0] = 1

	for i in range(1, n + 1):
		factorials[i] = i*factorials[i-1]

	if n == 0:
		return factorials[0]
	else:
		return factorials[n]

def digitSum(n):
	sum = 0
	while n > 0:
		sum += n%10
		n = n/10
	return sum

T = int(raw_input())
for tc in xrange(T):
	N = int(raw_input())

	print digitSum(fact(N))
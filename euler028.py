
def s(n):
	return n*(n+1)/2

def s2(n):
	return n*(n+1)*(2*n+1)/6

T = int(raw_input())
for i in xrange(T):
	N = long(raw_input())

	n = (N+1)/2

	#sum (odd squares ) sum for i to n[(2*i - 1)^2]
	diagonal1 = 4*s2(n) - 4*s(n) + n

	#sum for i to n[(2*i - 1)^2 - 2*i +2]
	diagonal2 = diagonal1 - 2*s(n) + 2*n

	#sum for i to n[(2*i - 1)^2 - 2*i +2 - 2*i + 2]
	diagonal3 = diagonal2 - 2*s(n) + 2*n

	#sum for i to n[(2*i - 1)^2 - 2*i +2 - 2*i + 2 - 2*i + 2] 
	diagonal4 = diagonal3 - 2*s(n) + 2*n


	print (diagonal1+diagonal2+diagonal3+diagonal4 - 3) % (10**9 + 7)
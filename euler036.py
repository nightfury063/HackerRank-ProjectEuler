def isPal(n):
	s1 = str(n)
	s2 = str(n)[::-1]
	if s1 == s2:
		return True
	else:
		return False

def decToBaseK(n, k):
	res = ""
	while n>0:
		rem = n%k
		n =n/k
		res += str(rem)
	return int(res[::-1])

N, K = map(int, raw_input().split())

fat = 0
for i in xrange(1, N):
	if isPal(i) and isPal(decToBaseK(i, K)):
		fat += i

print fat
# print decToBaseK(N, K)
# print isPal(decToBaseK(N, K))


# 10/2 = 5, 0
# 5/2 = 2, 1
# 2/2 = 1, 0
# 1/2 = 0, 1

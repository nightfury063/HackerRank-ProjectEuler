import math
def is_prime(n):
    if n==2 or n==3: return True
    if n%2==0 or n<2: return False
    for i in range(3,int(n**0.5)+1,2):
        if n%i==0:
            return False    
    return True


def reverse(n):
	s1 = str(n)
	s2 = s1[::-1]
	return int(s2)

#print reverse(3797)

def isTruncatableL2R(n):
	b = True
	pw = len(str(n))-1

	while n>0 and pw >= 0:
		if not is_prime(n):
			b = False
		msb = n/(10**pw)
		n = n - msb*(10**pw)
		pw -= 1

	return b

#print isTruncatableL2R(3797)

def isTruncatableR2L(n):
	b = True
	while n>0:
		if not is_prime(n):
			b = False
		n /= 10
	return b

N = int(raw_input())

res = 0
for i in xrange(11, N):
	if isTruncatableR2L(i) and isTruncatableL2R(i):
		#print i
		res += i

print res




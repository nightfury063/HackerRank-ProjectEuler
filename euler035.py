import math
def is_prime(n):
    if n==2 or n==3: return True
    if n%2==0 or n<2: return False
    for i in range(3,int(n**0.5)+1,2):
        if n%i==0:
            return False    
    return True

def rotate(n):
	num = []
	pw = len(str(n))
	i = 0
	while i<pw:
		x = n%10
		n = n/10
		n += x*(10**(pw-1))
		#print n
		num.append(n)
		i+=1
	return num

def allPrime(n):
	b = True
	for j in rotate(n):
		if not (is_prime(j)):
			b = False
	return b

def sumCircular(n):
	res = 0
	for i in xrange(n):
		if is_prime(i) and allPrime(i):	
			res += i
	return res

N = int(raw_input())
print sumCircular(N)









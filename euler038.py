# #pandigital multiples
def is_pandigital(M , K):
	#create a pandigital string
	res = ""
	for i in xrange(1, K+1):
		res += str(i)
	#print res

	temp = ""
	for i in xrange(1, 10):
		if(len(temp) < K):
			x = M*i
			temp += str(x)

	#print temp

	sorted_res = ''.join(sorted(temp)) 

	sorted_res = sorted_res #strip the string to K length
	#print sorted_res

	if(sorted_res == res):
		return True
	else:
		return False

#print is_pandigital(18, 8)

N, K = map(int, raw_input().split())

for i in xrange(2, N):
	if is_pandigital(i, K):
		print i


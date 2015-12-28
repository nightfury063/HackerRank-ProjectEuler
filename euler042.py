# def tri(n):
# 	return int(n*(n+1))/2

# def reversetri(n):
# 	temp = n
# 	res, i = 0, 1
# 	while n > 0:
# 		n -= i
# 		res += 1
# 		i += 1

# 	#print res
# 	if tri(res) == temp: 
# 		return res
# 	else:
# 		return -1

#print tri(10)
# print reversetri(55)

# T = int(raw_input())
# for tc in xrange(T):
# 	res, i = 0, 1
# 	N = int(raw_input())
# 	print reversetri(N)

#using binary search
T = int(raw_input())
for tc in xrange(T):
	N = int(raw_input())
	be = 1
	en = 2000000000
	res = 0
	while be<=en:
		m = (be+en)/2
		if m*(m+1) <= 2*N:
			res = m
			be = m+1
		else:
			en = m-1

	if res*(res+1) == 2*N:
		print res
	else:
		print -1



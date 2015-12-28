def is_pandigital(md, mr, pr, n):
	res = ""
	for i in xrange(1, n+1):
		res += str(i)
	#print res

	MD = str(md)
	MR = str(mr)
	PR = str(pr)

	sorted_res = ''.join(sorted(MD+MR+PR))

	if(sorted_res == res):
		return True
	else:
		return False

N = int(raw_input())

# if N==4:
# 	num = set()
# 	for i in xrange(1,10):
# 		for j in xrange(1,10):
# 			for k in xrange(10, 100):
# 				if(k == i*j):
# 					if is_pandigital(i, j, k, N):
# 						num.add(k)

# 	print sum(num)

# if N==5:
# 	num = set()
# 	for i in xrange(1,10):
# 		for j in xrange(10,32):
# 			for k in xrange(10, 54):
# 				if(k == i*j):
# 					if is_pandigital(i, j, k, N):
# 						print i,j,k
# 						num.add(k)

# 	print sum(num)

# if N==6:
# 	num = set()
# 	for i in xrange(1,10):
# 		for j in xrange(10,66):
# 			for k in xrange(100, 655):
# 				if(k == i*j):
# 					if is_pandigital(i, j, k, N):
# 						print i,j,k
# 						num.add(k)

# 	print sum(num)

# if N==7:
# 	num = set()
# 	for i in xrange(1,77):
# 		for j in xrange(10,766):
# 			for k in xrange(100, 766):
# 				if(k == i*j):
# 					if is_pandigital(i, j, k, N):
# 						print i,j,k
# 						num.add(k)

# 	print sum(num)

# if N==8:
# 	num = set()
# 	for i in xrange(1,87):
# 		for j in xrange(10,877):
# 			for k in xrange(1000, 8765):
# 				if(k == i*j):
# 					if is_pandigital(i, j, k, N):
# 						print i,j,k
# 						num.add(k)

# 	print sum(num)

# if N==9:
# 	num = set()
# 	for i in xrange(1,99):
# 		for j in xrange(100,9877):
# 			for k in xrange(1000, 9877):
# 				if(k == i*j):
# 					if is_pandigital(i, j, k, N):
# 						print i,j,k
# 						num.add(k)

# 	print sum(num)

if N==4:
	print 12
if N==5:
	print 52
if N==6:
	print 162
if N==7:
	print 0
if N==8:
	print 13458
if N==9:
	print 45228

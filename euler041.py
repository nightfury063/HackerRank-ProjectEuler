'''
MAX = 7652420
is_prime = [1]*MAX
#seive of eratosthenes
is_prime[0] = is_prime[1] = 0
for i in xrange(2, int(MAX**0.5)):
	if not is_prime[i]:
		continue
	for j in xrange(i*i, MAX, i):
		is_prime[j] = 0

#print is_prime[4231]

def is_pandigital(n):
	res = ""
	for i in xrange(1, len(str(n))+1):
		res += str(i)

	#print res

	temp = str(n)

	sorted_res = ''.join(sorted(temp))

	return (sorted_res == res)

#print is_pandigital(2)


good = []
for i in xrange(10, MAX):
	if is_prime[i] and is_pandigital(i):
		good.append(i)

print good
'''

ans = [-1, 1423, 2143, 2341, 4231, 1234657, 1245763, 1246537, 1246573, 1247563, 1254367, 1254637, 1256347, 1257463, 1263547, 1264537, 1264573, 1265347, 1275643, 1276543, 1324567, 1342567, 1342657, 1345627, 1354267, 1356247, 1356427, 1362457, 1425367, 1426753, 1427563, 1427653, 1435627, 1436257, 1436527, 1452637, 1453267, 1463257, 1465273, 1476253, 1476523, 1524637, 1524763, 1532647, 1546273, 1546327, 1562347, 1563427, 1564237, 1572643, 1574623, 1576243, 1624573, 1625347, 1632457, 1634257, 1645327, 1647253, 1647523, 1652347, 1653427, 1672453, 1674523, 1725463, 1726453, 1742563, 1752643, 1764253, 2136457, 2143567, 2145763, 2146357, 2153647, 2156437, 2163547, 2176543, 2315647, 2341567, 2345617, 2347561, 2354167, 2364517, 2365471, 2375641, 2376541, 2413657, 2431657, 2436517, 2436571, 2451367, 2451637, 2456371, 2456731, 2457361, 2457613, 2467351, 2475163, 2476351, 2516473, 2534671, 2536147, 2537461, 2543617, 2546317, 2547361, 2547613, 2547631, 2561743, 2563147, 2563417, 2576341, 2613547, 2631457, 2634517, 2637451, 2637541, 2641357, 2645371, 2647531, 2651437, 2651743, 2653741, 2654317, 2654371, 2657143, 2657341, 2674513, 2674531, 2714563, 2716453, 2716543, 2734561, 2735641, 2736451, 2741653, 2743561, 2745361, 2754361, 2761453, 2761543, 2765143, 3124567, 3124657, 3126457, 3126547, 3145627, 3152467, 3154267, 3156427, 3165427, 3214567, 3214657, 3215467, 3216457, 3241657, 3245761, 3246157, 3246751, 3251467, 3254761, 3256417, 3256471, 3257641, 3261547, 3264571, 3265741, 3412567, 3412657, 3415627, 3421567, 3421657, 3427561, 3451627, 3452671, 3456127, 3456217, 3456721, 3457261, 3461257, 3462517, 3462751, 3465271, 3467251, 3467521, 3475261, 3512647, 3514267, 3516427, 3524617, 3526147, 3526741, 3542167, 3542761, 3546271, 3546721, 3561247, 3562417, 3574621, 3576421, 3612457, 3612547, 3624157, 3627451, 3642157, 3642571, 3672451, 3672541, 3674521, 3675241, 3725461, 3742561, 3746521, 3752641, 3756241, 3756421, 3765241, 4125637, 4125673, 4126537, 4127653, 4135627, 4152763, 4157623, 4165327, 4167523, 4172653, 4175263, 4176253, 4213567, 4216573, 4216753, 4231567, 4235761, 4253167, 4253617, 4253671, 4257163, 4257613, 4261357, 4263157, 4265137, 4265713, 4265731, 4267531, 4271563, 4276513, 4312657, 4321657, 4325617, 4326571, 4356217, 4356721, 4361257, 4362751, 4365271, 4372651, 4375621, 4513627, 4516327, 4521367, 4521637, 4523671, 4526371, 4527361, 4537261, 4561237, 4561327, 4561723, 4562317, 4562731, 4563127, 4563217, 4563271, 4567231, 4571263, 4572163, 4621537, 4625713, 4631527, 4637251, 4652173, 4652317, 4657123, 4657321, 4672531, 4675123, 4712563, 4716253, 4721653, 4723561, 4725613, 4725631, 4732561, 4752361, 4765213, 5123467, 5126347, 5126437, 5136427, 5142637, 5143267, 5146237, 5162473, 5162743, 5164273, 5164723, 5172463, 5176243, 5214367, 5214637, 5214763, 5216473, 5231647, 5234167, 5236741, 5237641, 5241673, 5243167, 5243761, 5246173, 5246713, 5247163, 5261743, 5263417, 5264137, 5264173, 5267341, 5267413, 5271463, 5274163, 5274631, 5276431, 5312467, 5321467, 5321647, 5327461, 5341627, 5342167, 5342761, 5346127, 5347621, 5361247, 5364127, 5367421, 5376421, 5421673, 5421763, 5423167, 5423617, 5426173, 5426371, 5426713, 5431627, 5436127, 5436217, 5436271, 5436721, 5461273, 5461723, 5462137, 5462173, 5463217, 5463721, 5472613, 5472631, 5473261, 5476213, 5614327, 5621437, 5624137, 5624317, 5624713, 5627143, 5631427, 5632741, 5634217, 5634721, 5641327, 5643217, 5647231, 5647321, 5672341, 5672413, 5674231, 5723461, 5724163, 5724613, 5726143, 5726341, 5734621, 5742361, 5742631, 5746123, 5746231, 5761423, 5762143, 5762413, 5763421, 6124753, 6134257, 6142573, 6145273, 6145327, 6145723, 6152743, 6154273, 6154723, 6174253, 6175243, 6175423, 6214357, 6214573, 6214753, 6215347, 6217543, 6234517, 6235147, 6235417, 6235741, 6241537, 6243157, 6245731, 6251347, 6251743, 6257143, 6257431, 6274531, 6275341, 6312547, 6321457, 6325471, 6342157, 6342517, 6345127, 6345271, 6345721, 6347521, 6352147, 6352741, 6354217, 6415237, 6421573, 6423517, 6423751, 6435127, 6435721, 6437521, 6451723, 6452137, 6453721, 6457123, 6472351, 6472513, 6473251, 6475321, 6512347, 6512437, 6513427, 6514327, 6524137, 6527413, 6541723, 6542713, 6543127, 6547213, 6572143, 6572413, 6572431, 6574231, 6714523, 6724351, 6725143, 6732541, 6734521, 6745231, 6751243, 6754213, 7124653, 7125463, 7126453, 7126543, 7142563, 7145623, 7152643, 7164253, 7165423, 7215643, 7216453, 7216543, 7234651, 7245361, 7246513, 7253461, 7253641, 7256341, 7264351, 7264513, 7264531, 7324561, 7324651, 7352461, 7354261, 7356421, 7362541, 7412563, 7412653, 7415623, 7421563, 7425361, 7425631, 7426351, 7432651, 7435621, 7451263, 7451623, 7452163, 7456231, 7456321, 7462513, 7514623, 7524631, 7526143, 7536241, 7536421, 7541623, 7542163, 7546321, 7561423, 7562341, 7562413, 7562431, 7564231, 7621543, 7624531, 7625143, 7625341, 7641253, 7642513, 7652413]


T = int(raw_input())
for tc in xrange(T):
	N = int(raw_input())
	print filter(lambda i: i<=N, ans)[-1]

# T = int(raw_input())
# for tc in xrange(T):
# 	N = int(raw_input())
# 	if N>MAX:
# 		print 7652413
# 	else:
# 		best = -1
# 		for i in xrange(10, N+1):
# 			if is_prime[i] and is_pandigital(i):
# 				if best < i:
# 					best = i
# 		print best

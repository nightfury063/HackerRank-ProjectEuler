#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long sumOfPower(long long n, long long pw){
	long long sop = 0;
	while(n>0){
		sop += pow(n%10, pw);
		n = n/10;
	}
	return sop;
}

int main() {
	//printf("%d\n", sumOfPower(1634, 4));
 	long long N;
 	scanf("%lld", &N);
 	if(N == 3){
 		long long sum = 0;
	 	for(long long i=100; i<=999; i++){
	 		if(sumOfPower(i, N) == i)
	 			sum += i;
	 	}
	 	printf("%lld\n", sum);     
	}
	if(N == 4){
 		long long sum = 0;
	 	for(long long i=1000; i<=9999; i++){
	 		if(sumOfPower(i, N) == i)
	 			sum += i;
	 	}
	 	printf("%lld\n", sum);     
	}
	if(N == 5){
 		long long sum = 0;
	 	for(long long i=1000; i<=443830; i++){
	 		if(sumOfPower(i, N) == i)
	 			sum += i;
	 	}
	 	printf("%lld\n", sum);     
	}
	if(N == 6){
 		long long sum = 0;
	 	for(long long i=100000; i<=999999; i++){
	 		if(sumOfPower(i, N) == i)
	 			sum += i;
	 	}
	 	printf("%lld\n", sum);     
	}
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;


long long triNum(long long n){
	return n*(n+1)/2;
}

long long factors(long long n){

	long long i=1;

	int res = 0;
	for(; i*i < n; i++){
		if(n % i == 0){
			res += 2;
		}
	}
	if(i*i == n){
		res+=1;
	}

	return res;
}
int main(){

	long long i = 1;
	int best = 0;
	for(; best < 1000; i++){
		long long  f = factors(triNum(i));
		if(f>best){
			printf("%lld, %lld\n", i, f);
			best = f;
		}
	}
	
}
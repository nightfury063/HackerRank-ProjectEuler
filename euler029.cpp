#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

const int MAX = 100000+7;

int num_unique[17], is_base[MAX];

int main() {

	int N;
	scanf("%d", &N);

	set<int> unique;
	for(int pw = 1; pw< 17; ++pw){
		for(int b = 2; b <= N; ++b){
			int m = pw*b;
			unique.insert(m);
		} 
		num_unique[pw] = unique.size();		
	}


	for(int i = 0; i<MAX; i++)
		is_base[i] = 1;

	long long result = 0;

	//filtering out base numbers just like 
	// seive of eratosthenes
	for(long long i = 2; i<=N; ++i){
		if(is_base[i]){
			int pw = 0;
			for(long long j = i; j<=N; j*=i){
				is_base[j] = 0;
				++pw;
			}
			result += num_unique[pw];
		}
	}
	

	printf("%lld\n", result);
    return 0;
	
}
/*
duplicates come when 
	for i = 2 to ...
	a = x^i

We will consider only such numbers for which 
	there is no x, p >1: a = x^p <- base number

2, 3, (4-bad), 5, 6, 7, 8 ,(9-bad)*/


#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a%b); 
}
//find lcm of n natural numbers
int lcm(int n){
	int res = 1;
	for(int i=1; i<=n; i++){
		res = res*i/gcd(res, i);
	}
	return res;
}
int main(){
	int T;
	scanf("%d", &T);

	while(T--){
		int N;
		scanf("%d", &N);
		
		printf("%d\n", lcm(N));
	}
	return 0;
}
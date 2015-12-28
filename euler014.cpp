#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>

using namespace std;

const int MAX = 5000007;
int values[MAX], answer[MAX];

int collatz(long long n){
	if(n == 1){
		return 0;
	}

	if(n< MAX && values[n]){
		return values[n];
	}

	int result;
	if(n%2 == 0){
		result = collatz(n/2) + 1;
	}else{
		result = collatz(3*n + 1) + 1;
	}

	if(n<MAX){
		values[n] = result;
	}
	return result;
}

int main(){
	//backtracking
	for (int i = 1; i < MAX; ++i)
	{
		
		int act = collatz(i);
		if(act >= values[answer[i-1]]){
			answer[i] = i;
		}else{
			answer[i] = answer[i-1];
		}
	}
	int T;
	scanf("%d", &T);
	while(T--){
		int N;
		scanf("%d", &N);
		printf("%d\n", answer[N]);

	}
	return 0;
}
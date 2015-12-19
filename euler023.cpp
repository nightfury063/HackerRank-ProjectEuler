#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 28123+7;

int is_abundant[MAX];
 
int sumDiv(int n){
	int i = 2;
	int res = 1;
	for (; i*i < n; ++i)
	{
		if(n%i == 0)
			res += i + n/i;
	}
	if(i*i == n){
		res += i;
	}
	return res;
}

int main() {

	vector<int> abundant;
	for (int i = 2; i < MAX; ++i)
	{
		if(sumDiv(i) > i){
			abundant.push_back(i);
			is_abundant[i] = 1;
		}
	}

    int T;
    scanf("%d", &T);
    while(T--){
    	int N;
    	scanf("%d", &N);
    	
    	if(N > MAX){
    		printf("YES\n");
    	}
    	else
    	{
    		int ok = 0;
    		for (int i = 0; i < abundant.size() && abundant[i]<N; ++i)
    		{
    			if(is_abundant[N-abundant[i]]){
    				ok = 1;
    				break;
    			}
    		}
    		if(ok){
    			printf("YES\n");
    		}else{
    			printf("NO\n");
    		}
    	}
    }
    return 0;
}

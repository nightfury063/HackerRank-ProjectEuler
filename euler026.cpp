#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 10007;

int seen[MAX];

int cycle[MAX];

int ans[MAX];

int recur(int den){

	for(int i = 0; i< den; i++){
		seen[i] = 0;
	}	

	int num = 1;
	for (int count = 1; num > 0; ++count)
	{
		if( seen[num] > 0)
			return count-seen[num];
		seen[num] = count;
		num *= 10;
		int v = num/den;
		num %= den;	
	}
	return 0; // if there is no repeting cycle
}

int main() {

	for(int i = 1; i<MAX; i++){
		cycle[i] = recur(i);
	}

	//back-track
	ans[2] = 2;
	for (int i = 3; i < MAX; ++i)
	{
		if(cycle[i] > cycle[ans[i-1]])
			ans[i] = i;
		else
			ans[i] = ans[i-1];
	}

    int T;
    scanf("%d", &T);
    while(T--){
    	int N;
    	scanf("%d", &N);
  		
       	printf("%d\n", ans[N-1]);
    }
    return 0;
}

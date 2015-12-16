#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool isPal(int n){
	vector<int> v;

	while(n){
		v.push_back(n%10);
		n /= 10;
	}

	for (int i = 0; i < v.size(); ++i)
	
		if(v[i] != v[v.size()-i-1])
			return false;
		return true;
	
}

int main(int argc, char const *argv[])
{

	/*optimization*/
	vector<int> pals;
	for (int n1 = 100; n1 <= 999; ++n1)
		{
			for (int n2 = 0; n2 < n1; ++n2)
			{
				int m = n1 * n2;
				if(isPal(m)){
				pals.push_back(m);
			}
			}
		}
	sort(pals.begin(), pals.end());
	/*precalculate all palindromes and save them in a vector*/

	int T;
	scanf("%d", &T);
	while(T--){
		int N, best=0;
		scanf("%d", &N);
		for (int i = 0; i < pals.size(); ++i)
		{
			if(pals[i]< N)
				best = max(best, pals[i]);
		}
		printf("%d\n",best );
	}
}
















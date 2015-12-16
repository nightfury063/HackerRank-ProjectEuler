#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long int largestPrimeFactor(long long int n){
	long long int p = 1;
	for (long long int i = 2; i*i <= n; ++i)
	{
		while(n%i == 0){
			p = i;
			n /= i;
		}
		if(n>1) p = n;
		
	}
	return p;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		cout<<largestPrimeFactor(n)<<"\n";
	}
	return 0;
}
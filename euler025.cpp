#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// solution not working 



const int MAX = 5007;
int ans[5007];

void add(vector<int> &a, vector<int> &b){
	// a += b
	int carry = 0, i = 0;
	for (; i < b.size(); ++i)
	{
		if(i == a.size()) a.push_back(0);
		a[i] = b[i] + carry;
		carry = a[i]/10;
		a[i] %= 10;
	}
	while(carry){
		if(i == a.size()) a.push_back(0);
		a[i] += carry;
		carry = a[i]/10;
		a[i] %= 10;
		++i;
	}
}


int main() {
	vector<int> a(1,1), b(1,1);
	int index = 2;
	while(true){
		int len = b.size();
		if( len >= MAX) break;
		if(ans[len] == 0)
			ans[len] = index;
		add(b, a);
		a.swap(b);
		++index;
	}

	int T;
	scanf("%d", &T);
	while(T--){
		int N;
		scanf("%d", &N);
		cout<<ans[N]-1<<endl;
	}
    return 0;
}















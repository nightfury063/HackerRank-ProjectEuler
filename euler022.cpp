#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

const int MAX = 5200+7;
string in[MAX];
map<string, int> ans;

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; ++i)
	{
		cin>>in[i];
	}
	sort(in, in+N);

	for (int i = 0; i < N; ++i)
	{
		int score = 0;
		for (int j = 0; j < in[i].size(); ++j)
		{
			score += in[i][j] - 'A'+1;
		}
		ans[in[i]] = score*(i+1);
	}

	int Q;
	scanf("%d", &Q);
	while(Q--){
		string str;
		cin >> str;
		cout << ans[str] << "\n";
		}

    return 0;
}

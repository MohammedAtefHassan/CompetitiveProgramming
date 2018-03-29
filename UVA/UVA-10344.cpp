#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define all(v) v.begin(),v.end()
#define sz(n) (int)n.size()
#define pb(s) push_back(s);
#define format(n) fixed<<setprecision(n)
#define finl "\n"
#define Mohammed_Atef_Hassan fastt();
#define mod 1000000007
#define INF 1000000000000000000;
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
void fastt(){
	fast();
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);

	freopen("output.out", "w", stdout);
#endif
}
ll arr[5];
int solve(int i, ll yield)
{
	if (i == 5)
	{
		return (yield == 23?1:0);
	}
	return max(solve(i + 1, yield+arr[i]), max(solve(i+1,yield-arr[i]), solve(i+1,yield*arr[i])));
}
int main()
{
	Mohammed_Atef_Hassan
	while (cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]&& arr[0])
	{
		sort(arr, arr + 5);
		int x = 0;
		do{
			x = max(x, solve(1, arr[0]));
		} while (next_permutation(arr, arr + 5));
		cout << (x>0 ? "Possible" : "Impossible") << finl;
	}
		

}

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
int n, arr[100];
int solve( int cur,int prev)
{
	if (cur == n)
		return 0;
	int x = solve(cur + 1, prev);
	if (arr[cur] > arr[prev])
		x = max(x, 1 + solve(cur + 1, cur));
	return x;
}
int main()
{
	Mohammed_Atef_Hassan
			cin >> n;
		for (int i = 0; i < n; i++)
		cin >> arr[i];
		cout << solve(0,n)<< finl;		
}

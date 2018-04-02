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

  	//freopen("output.out", "w", stdout);
#endif
}
vector<int>v[1000002];
int main()
{
	Mohammed_Atef_Hassan
		int n, m, x, k,u;
	while (cin >> n >> m)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			v[x].push_back(i);
		}
		while (m--)
		{
			cin >> k >> u;
			cout << (k > v[u].size() ? 0 : v[u][k - 1]) << finl;
		}
	}
	
}

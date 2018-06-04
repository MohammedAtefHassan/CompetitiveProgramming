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
#define Mohammed_Atef_Hassan fast();
#define mod 1000000007
#define INF 1000000000000000000;
#define PI acos(-1)
void fast(){

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);

	freopen("output.out", "w", stdout);
#endif
}
int a1, a2, b1, b2;
int n, m;
pair<int, int>arr[101];
int vis[10][10];
int solve(int x, int cnt)
{
	if (cnt == n)
		return (x == a2?1:0);
	int mx = 0;
	for (int i = 0; i <= 6; i++)
	{
		if (vis[x][i])
		{
			vis[i][x]--;
			vis[x][i]--;
			mx = max(mx, solve(i, cnt + 1));
			vis[i][x]++;
			vis[x][i]++;
		}
	}
	return mx;
}
int main()
{
	Mohammed_Atef_Hassan
	while (cin >> n >> m&&n)
	{
		memset(vis, 0,sizeof vis);
		cin >> a1 >> b1 >> a2 >> b2;
		for (int i = 0; i < m; i++)
		{
			cin >> arr[i].first >> arr[i].second;
			vis[arr[i].first][arr[i].second]++;
			vis[arr[i].second][arr[i].first]++;
		}
		cout << (solve(b1, 0) ? "YES" : "NO") << finl;
	}
	
		
} 

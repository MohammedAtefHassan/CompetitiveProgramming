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
int n, m;
char grid[100][100];
int cnt;
int dx[] = { 0, 1};
int dy[] = { 1, 0};
int solve(int x, int y)
{
	if (x ==0 || x > n || y ==0 || y > m || grid[x][y] == '#')
		return 0;
	if (x == n && y == m)
		return 1;
	int cnt = 0;
	for (int i = 0; i < 2; i++)
		cnt += solve(x + dx[i], y + dy[i]);
	return cnt;
}
int main()
{
	Mohammed_Atef_Hassan
		int t,x,a;
	string s = "";
	while (cin >> t)
	{
		while (t--)
		{
			cin >> n >> m;
			cin.ignore();
			for (int i = 0; i <= n;i++)
			for (int j = 0; j <= m; j++)
				grid[i][j] = '.';
			for (int i = 0; i < n; i++)
			{
				getline(cin, s);
				x = -1;
				a = 0;
				for (int i = 0; i < s.size(); i++)
				{
					if (s[i] == ' ')
					{
						if (x != -1)
						{
							grid[x][a] = '#';
						}
						else
						{
							x = a;
						}
						a = 0;
					}
					else
						a = a * 10 + (int)(s[i] - '0');
				}
				if (x!=-1)
				grid[x][a] = '#';
			}
			cout << solve(1, 1) << finl;
			if (t!=0)
				cout << finl;
		}
	}
}

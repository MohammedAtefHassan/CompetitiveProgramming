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

#ifndef ONLINE_JUDGE
	//freopen("input.in", "r", stdin);
	//	freopen("output.out", "w", stdout);
#endif
}
int n, m;
string s;
char arr[9][9];
vector<pair<int, int>>v;
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
void dfs(int x, int y, int i)
{
	if (x < 0 || y < 0 || x == n || y == m || arr[x][y] != s[i])
		return;
	v.push_back({ x, y });
	for (int k = 0; k < 4; k++)
	{
		dfs(x + dx[k], y + dy[k], i + 1);
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int t;
	while (cin>>t)
	{
		s = "@IEHOVA#";
		while (t--)
		{
			cin >> n >> m;
			int x, y;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cin >> arr[i][j];
					if (arr[i][j] == '@')
					{
						x = i, y = j;
					}
				}
			}
			dfs(x, y, 0);
			for (int i = 1; i < v.size(); i++)
			{
				if (v[i].first>v[i - 1].first || v[i].first < v[i - 1].first)
					cout << "forth";
				else if (v[i].second>v[i - 1].second)
					cout << "right";
				else
					cout << "left";
				if (i < v.size() - 1)
					cout << " ";
			}
			cout << finl;
			v.clear();
		}
	}

}

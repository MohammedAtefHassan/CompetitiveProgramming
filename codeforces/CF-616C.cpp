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
#define clr(dp,n) memset(dp,n,sizeof dp)
#define ex(n) return cout<<n<<finl,0;
void fast(){

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
	//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	//freopen("input.in", "r", stdin);

	//  freopen("output.out", "w", stdout);
#endif
}
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
vector<pair<int, int>>edg[1000001]; int cnt; char arr[1001][1001]; bool vis[1001][1001]; int pr[1001][1001];
int n, m;
bool valid(int x, int y)
{
	return x > -1 && y > -1 && x < n&&y < m;
}
void dfs(int x, int y)
{
	if (!valid(x, y) || arr[x][y] == '*'||vis[x][y])
		return;
	edg[cnt].push_back({ x, y });
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		dfs(x + dx[i], y + dy[i]);
	}
}
int main()
{
	Mohammed_Atef_Hassan
	cin >> n >> m;
	for (int i = 0; i < n;i++)
	for (int j = 0; j < m; j++)
		cin >> arr[i][j];

	for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++)
	{
		if (arr[i][j] == '.'&&vis[i][j] == 0)
		{
			cnt++;
			dfs(i, j);
		}
	}

	for (int i = 1; i <= cnt; i++)
	{
		for (auto s : edg[i])
			pr[s.first][s.second] = i;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == '*')
			{
				cnt = 1;
				set<int>s;
				for (int k = 0; k < 4; k++)
				{
					int x = i + dx[k], y = j + dy[k];
					if (valid(x, y) && arr[x][y] == '.')
					{
						s.insert(pr[x][y]);
					}
				}
				for (auto z : s)
					cnt += edg[z].size();
				cout << cnt%10;
			}
			else
				cout << '.';
		}
		cout << finl;
	}
}

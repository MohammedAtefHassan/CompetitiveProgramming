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
		freopen("input.in", "r", stdin);

		freopen("output.out", "w", stdout);
#endif
}
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
int arr[101][101]; bool vis[101][101]; int cnt[101]; int n,flag;
void dfs(int x, int y)
{
	if (x == 0 || y == 0 || x == n + 1 || y == n + 1||vis[x][y]||arr[x][y]!=flag)
		return;
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		dfs(x + dx[i], y + dy[i]);
	}
}
int main()
{
	Mohammed_Atef_Hassan
		int x, y; string s;
	while (cin >> n&&n)
	{
		clr(arr, 0); clr(vis, 0); clr(cnt, 0);	cin.ignore();
		for (int i = 1; i <n; i++)
		{
		
			getline(cin, s, '\n');
			stringstream ss;
			ss << s;
			while (ss >> x&&ss >> y)
			{
				arr[x][y] = i;
			}
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (vis[i][j] == 0)
				{
					cnt[arr[i][j]]++; flag = arr[i][j];
					dfs(i, j);
				}
			}
		}
		bool b = true;
		for (int i = 0; i < n;i++)
		if (cnt[i]>1)
			b = false;
		cout << (b ? "good" : "wrong") << finl;
	}

}

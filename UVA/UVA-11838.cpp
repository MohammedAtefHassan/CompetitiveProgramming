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
vector<vector<int>>edg1,edg2; int cnt1, cnt2; bool vis[100000];
vector<int> s; stack<int>s1;
void dfs1(int u,int flag)
{
	vis[u] = 1;
	for (auto ch : edg1[u])
	if (vis[ch] == 0)
		dfs1(ch,flag);
	if (flag)
		s1.push(u);
}
void dfs2(int u)
{
	vis[u] = 1;
	for (auto ch : edg2[u])
	if (vis[ch] == 0)
		dfs2(ch);
}
int main()
{
	Mohammed_Atef_Hassan
		int n, m; int x, y, p;
	while (cin >> n >> m&&n)
	{
		cnt1 = cnt2 = 0;edg1=edg2 = vector<vector<int>>(n + 1, vector<int>()); s = vector<int>();
		while (m--)
		{
			cin >> x >> y >> p;
				edg1[x].push_back(y);
				edg2[y].push_back(x);
				if (p==2)
				{
				edg1[y].push_back(x);
				edg2[x].push_back(y);
			}
		}
		clr(vis, 0);
		for (int i = 1; i <= n; i++)
		{
			if (vis[i] == 0)
			{
				s.push_back(i);
				dfs1(i,0);
			}
		}
		clr(vis, 0);
		reverse(all(s));
		for (auto a : s)
		{
			if (vis[a] == 0)
			{
				cnt1++;
				dfs1(a,1);
			}
		}
		clr(vis, 0);
		while (!s1.empty())
		{
			x = s1.top(); s1.pop();
			if (vis[x] == 0)
			{
				cnt2++;
				dfs2(x);
			}
		}
		if (cnt1 > 1 || cnt2 > 1)
			cout << 0 << finl;
		else cout << 1 << finl;
	}
}

#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define all(v) v.begin(),v.end()
#define format(n) fixed<<setprecision(n)
#define finl "\n"
#define Mohammed_Atef_Hassan fast();
#define mod 1000000007
#define INF 1000000
#define PI acos(-1)
void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	//freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
#endif
}
vector<int>emp[101];
vector<int>lan[101];
int cnt; bool vis[101];
void dfs(int node)
{
	vis[node] = true;
	for (auto l : emp[node])
	{
		for (auto x : lan[l])
		{
			if (vis[x] == false)
			{
				dfs(x);
			}
		}
	}
}
ll arr[50000];
ll w[50000];
int main()
{
	Mohammed_Atef_Hassan
		int n;

	while (cin >> n)
	{
		memset(w, 0, sizeof w);
		for (int i = 0; i < (1 << n); i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < (1 << n); i++)
		{
			for (int j = 0; j < n; j++)
			{
				bitset<15>s(i);
				s.flip(j);
				int x = s.to_ulong();
				w[i] += arr[x];
			}
		}
		ll mx = 0;
		for (int i = 0; i < (1 << n); i++)
		{
			for (int j = 0; j < n; j++)
			{
				bitset<15>s(i);
				s.flip(j);
				int x = s.to_ulong();
				mx = max(mx, w[i] + w[x]);
			}
		}
		cout << mx << finl;
	}
} 

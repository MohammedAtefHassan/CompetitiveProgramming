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
vector<set<int>>adj(100001);
int arr[100001];
map<int, int>cnt;
int main()
{
	Mohammed_Atef_Hassan
		int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	int x, y;
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;
		if (arr[x] != arr[y])
		{
			adj[arr[x]].insert(arr[y]);
			adj[arr[y]].insert(arr[x]);
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cnt[arr[i]] = adj[arr[i]].size();
	}
	ll mx = 0;
	int cc=100000;
	for (int i = 1; i <= n; i++)
	{
		if (cnt[arr[i]]==mx)
		{
			cc = min(cc,arr[i]);
		}
		else if (cnt[arr[i]] > mx)
		{
			mx = cnt[arr[i]];
			cc = arr[i];
		}

	}
	cout << cc << finl;
} 

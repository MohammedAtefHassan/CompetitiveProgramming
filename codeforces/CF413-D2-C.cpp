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

	freopen("output.in", "w", stdout);
#endif
}
ll arr[1000000];
multiset<ll>s;
int main()
{
	Mohammed_Atef_Hassan
		int n, m, x;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 0; i < m; i++)
	{
		cin >> x; s.insert(arr[x]);
		arr[x] = 0;
	}
	ll sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += arr[i];
	}
	for (multiset<ll>::reverse_iterator i = s.rbegin();i!= s.rend(); i++)
	{
		if (sum > *i)
			sum *= 2;
		else
			sum += *i;
	}
	cout << sum << finl;
}

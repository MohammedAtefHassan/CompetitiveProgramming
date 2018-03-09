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
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
void infile()
{
	freopen("input.in", "r", stdin);
}
void outfile()
{
	freopen("output.in", "w", stdout);
}

void fastt(){
	fast();
	//	infile();
	//	outfile();
}
ll a[100000], b[100000];
map<int, vector<int> >mp;
int main()
{
	Mohammed_Atef_Hassan
		int n;
	cin >> n;
	ll l, r, s;
	cin >> l >> r >> s;
	ll arr[20];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int cnt = 0;
	for (ll i = 1; i <(2<<n); i++)
	{
		ll mn =1000000;
		ll mx = 0;
		ll sum = 0;
		ll m = i;
		for (int j = 0; m; j++)
		{
			if (m & 1)
			{
				sum += arr[j];
				mn = min(mn, arr[j]);
				mx = max(mx, arr[j]);
			}
			m = m >> 1;
		}
		if (mx - mn >= s&&sum >= l&&sum <= r)
			cnt++;
	}
	cout << cnt << finl;
}
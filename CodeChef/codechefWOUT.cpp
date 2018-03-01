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
ll arr[1000001];
int main()
{
	Mohammed_Atef_Hassan
		int t;
	cin >> t;
	while (t--)
	{
		int n, h, l, r;
		cin >> n >> h;
		for (int i = 0; i <= n; i++)
		{
			arr[i] = 0;
		}
		for (int i = 0; i < n; i++)
		{
			cin >> l >> r;
			arr[l]++;
			arr[r + 1]--;
		}
		for (int i = 1; i < n; i++)
			arr[i] += arr[i - 1];

		for (int i = 0; i < n; i++)
			arr[i] = n - arr[i];

		for (int i = 1; i < n; i++)
			arr[i] += arr[i - 1];

		ll mn = arr[h - 1];
		for (int i = h; i < n; i++)
		{
			mn = min(mn, arr[i] - arr[i - h]);
		}

		cout << mn << finl;
	}
}
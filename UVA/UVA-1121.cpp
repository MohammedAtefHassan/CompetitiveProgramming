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
#define INF 1000000000000000000
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
	// infile();
	//	  outfile();
}
ll arr[1000000];
int main()
{
	Mohammed_Atef_Hassan
		int n;
	ll s;
	while (cin >> n >> s)
	{
		int mn = n; ll sum = 0, ss = 0;
		int l = 0, r = 0; bool b = true;
		for (int i = 0; i < n; i++)
			cin >> arr[i], ss += arr[i];
		while (l < n&&r < n)
		{
			if (b)
				sum += arr[r];
			if (sum < s)
				r++, b = true;
			else
			{
				mn = min(mn, r - l + 1);
				sum -= arr[l++];
				b = false;
			}
		}
		if (ss >= s)
			cout << mn << finl;
		else
			cout << 0 << finl;
	}
}

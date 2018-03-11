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
map<string, int>mp;
int main()
{
	Mohammed_Atef_Hassan
		int n, m;
	string key, s = "";
	ll val, sum;
	while (cin >> n >> m)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> key >> val;
			mp[key] = val;
		}
		while (m--)
		{
			sum = 0;
			while (cin >> s&&s != ".")
			{
				sum += mp[s];
			}
			cout << sum << finl;
		}
	}
}
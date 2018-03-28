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
int main()
{
	Mohammed_Atef_Hassan
		int t, n; string s;
	int cnt;
	while (cin >> t)
	{
		for (int j = 1; j <= t; j++)
		{
			cnt = 0;
			cin >> n >> s;
			int i = 0;
			for (int i = 0; i < s.size();)
			{
				if (s[i] == '.')
					cnt++, i += 3;
				else
					i++;
			}
			cout << "Case " << j << ": " << cnt << finl;
		}
		
	}
}

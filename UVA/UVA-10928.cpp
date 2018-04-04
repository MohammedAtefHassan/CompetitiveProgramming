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
void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	    freopen("input.in", "r", stdin);

		freopen("output.out", "w", stdout);
#endif
}
map<int, vector<int>>mp;
int main()
{
	Mohammed_Atef_Hassan

	int t, n; string s;
	while (cin >> t)
	{
		while (t--)
		{
			cin >> n;
			cin.ignore();
			for (int i = 1; i <= n; i++)
			{
				getline(cin, s);
				mp[count(all(s), ' ')].push_back(i);
			}
			map<int, vector<int>>::iterator x = mp.begin();
			for (int i = 0; i < x->second.size(); i++)
			{
				if (i != 0)
					cout << " ";
				cout << x->second[i];
			}
			cout << finl;
			mp.clear();
		}
		
	}
}

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
vector<set<int> >v(100000);
map<set<int>, int>mp;
int main()
{
	Mohammed_Atef_Hassan
		int n, x,cnt,mx;
	while (cin >> n&&n)
	{
		cnt = 0, mx = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cin >> x;
				v[i].insert(x);
			}
			mp[v[i]]++;
		}
		for (map<set<int>, int>::iterator i = mp.begin(); i != mp.end(); i++)
		{
			mx = max(mx, i->second);
		}
		for (int i = 0; i < n; i++)
		{
			if (mp[v[i]] == mx)
				cnt++;
			v[i].clear();
		}
		cout << cnt << finl;
		mp.clear();
	}
	
}
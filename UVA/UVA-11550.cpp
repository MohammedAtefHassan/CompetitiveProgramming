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

#ifdef ONLINE_JUDGE
//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);

	freopen("output.out", "w", stdout);
#endif
}
int n, m;
vector<int>v[100];
map < pair<int, int>, int>mp;
int main()
{
	Mohammed_Atef_Hassan
		int t; short x;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		for (int i = 0; i < n;i++)
		for (int j = 0; j < m; j++)
		{
			cin >>x;
			if (x==1)
				v[j].push_back(i);
		}
		bool b = true;
		for (int i = 0; i < m; i++)
		{
			if (v[i].size()!=2)
				b = false;
			sort(all(v[i]));
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < v[i].size(); j++)
			{
				for (int k = j + 1; k < v[i].size(); k++)
				{
					mp[{v[i][j], v[i][k]}]++;
					if (mp[{v[i][j], v[i][k]}]>1)
						b = false;
				}
			}
		}
		cout << (b ? "Yes" : "No") << finl;
		mp.clear();
		for (int i = 0; i < m; i++)
			v[i].clear();
	}
} 

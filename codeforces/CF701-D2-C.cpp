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
	//   infile();
	//	outfile();
}
set<char>c;
map<char, int>mp;
int main()
{
	Mohammed_Atef_Hassan
		int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		c.insert(s[i]);
	int l = 0, r = 0;
	bool b = true;
	int mn = 100000;
	int cnt = 0;
	while (l < s.size() && r < s.size())
	{
		if (mp[s[r]] == 0&&b)
			cnt++;
		if (b)
			mp[s[r]]++;
		if (cnt < c.size())
		{
			r++, b = true;
		}	
		else if (cnt == c.size())
		{
			mp[s[l]]--;
			mn = min(mn,r-l+1);
			b = false;
			if (mp[s[l]]==0)
			cnt--;
			l++;
		}
	}
	cout << mn << finl;
}

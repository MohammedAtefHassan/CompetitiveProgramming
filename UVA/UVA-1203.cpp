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
	//	   infile();
    // 	outfile();
}
map<int, set<int>>mp;
int main()
{
	Mohammed_Atef_Hassan
		string s;
	int k, num, pr;
	while (cin >> s&&s != "#")
	{
		cin >> num >> pr;
		for (int i = pr; i <= 10000; i+=pr)
		{
			mp[i].insert(num);
		}
	}
	cin >> k;
	for (map<int, set<int>>::iterator i = mp.begin(); i != mp.end()&&k; i++)
	{
		for (set<int>::iterator j = i->second.begin(); j != i->second.end() && k; j++)
			cout << *j << finl, --k;
	}
}

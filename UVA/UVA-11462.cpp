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
multiset<int>s;
int main()
{
	Mohammed_Atef_Hassan
		int n,x;
	while (cin >> n&&n)
	{
		while (n--)
		{
			cin >> x;
			s.insert(x);
		}
		while (!s.empty())
		{
			cout << *s.begin();
			if (s.size() > 1)
				cout << " ";
			s.erase(s.begin());
		}
		cout << finl;
	}

}
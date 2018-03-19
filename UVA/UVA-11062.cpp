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
	//  outfile();
}
set<string>ss;
int main()
{
	Mohammed_Atef_Hassan
		string s,a="";
	while (getline(cin,s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (i < s.size() - 1)
			{
				if (isalpha(s[i]) || s[i] == '-')
					a += (isalpha(s[i])?tolower(s[i]):s[i]);
				else
				{
					if (a != "")
						ss.insert(a), a = "";
				}
			}
			else
			{
				if (isalpha(s[i]))
					a += tolower(s[i]);
				if (s[i] != '-'&&a!="")
					ss.insert(a), a = "";
			}
		}
	}
	for (set<string>::iterator i = ss.begin(); i != ss.end(); i++)
		cout << *i << finl;
	
}
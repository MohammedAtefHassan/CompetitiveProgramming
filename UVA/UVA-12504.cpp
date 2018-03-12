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
map<string,string>s1, s2;
int main()
{
	//Mohammed_Atef_Hassan
	int n;
	string s,t;
	string k, v;
	string p, m, c;
	while (cin >> n)
	{

		while (n--)
		{
			 p = "+", m = "-", c = "*";
			k = v = "";
			cin >> s >> t;
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] >= 'a'&&s[i] <= 'z')
					k += s[i];
				else if (s[i] >= '0'&&s[i] <= '9')
					v += s[i];
				else if (s[i] == ',')
				{
					s1[k] = v;
					k = ""; v = "";
				}
				else if (s[i] == '}')
				{
					if (k != "")
					s1[k] = v;
				}
			}

			k = v = "";
			for (int i = 0; i <t.size(); i++)
			{
				if (t[i] >= 'a'&&t[i] <= 'z')
					k += t[i];
				else if (t[i] >= '0'&&t[i] <= '9')
					v += t[i];
				else if (t[i] == ',')
				{
					s2[k] = v;
					k = ""; v = "";
				}
				else if (t[i] == '}')
				{
					if (k != "")
					s2[k] = v;
				}
			}

			for (map<string, string>::iterator i = s2.begin(); i != s2.end(); i++)
			{
				if (s1[i->first] == "")
					p += i->first + ",";
				else
				{
					if (s1[i->first] != i->second)
						c += i->first + ",";
				}
			}
			for (map<string, string>::iterator i = s1.begin(); i != s1.end(); i++)
			{
				if (s2[i->first] == "")
					m += i->first + ",";
			}
			if (p.size() > 1)
			{
				p.erase(p.end() - 1);
				cout << p << finl;
			}
			if (m.size() > 1)
			{
				m.erase(m.end() - 1);
				cout << m << finl;
			}
			if (c.size() > 1)
			{
				c.erase(c.end() - 1);
				cout << c << finl;
			}
			if (p.size() == 1 && m.size() == 1 && c.size() == 1)
				cout << "No changes" << finl;
			cout << finl;
			s1.clear(), s2.clear();
		}
	}

}
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
int main()
{
	Mohammed_Atef_Hassan

		string s = "",t;
		while (getline(cin,s))
		{
			t = "";

			if (s == "DONE")
				return 0;

			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] >= 'a'&&s[i] <= 'z' || s[i] >= 'A'&&s[i] <= 'Z')
					t += toupper(s[i]);
			}

				s = t;
				reverse(all(t));

				if (s == t)
					cout << "You won't be eaten!";

				else
					cout << "Uh oh..";

				cout << finl;
		}
		
}
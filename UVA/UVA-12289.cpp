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
		int t;
	string s,o="one";
	while (cin >> t)
	{
		while (t--)
		{
			cin >> s;
			if (s.size() == 5)
				cout << 3;
			else
			{
				bool b = true;
				do{
					int cnt = 0;
					for (int i = 0; i < s.size(); i++)
					{
						if (s[i] != o[i])
							cnt++;
					}
					if (cnt <= 1)
						b = false;
				} while (next_permutation(all(s)));
				if (b)
					cout << 2;
				else
					cout << 1;
			}
			cout << finl;
		}
	}
}
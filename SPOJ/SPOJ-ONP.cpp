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
char arr[4000];
int main()
{
	Mohammed_Atef_Hassan
		int t;
	cin >> t;
	string s;
	while (t--)
	{
		int id = 0;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ')')
			{
				cout << arr[id-1];
				id--;
			}
			else if ((s[i]>'z' || s[i] < 'a') && s[i] != '(')
			{
				arr[id] = s[i];
				id++;
			}
			else if (s[i] >= 'a'&&s[i]<='z')
				cout << s[i];
		}
		cout << endl;
	}
}
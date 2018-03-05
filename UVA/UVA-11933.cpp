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
		ll n,a,b;
	while (cin >> n&&n)
	{
		a = 0, b = 0;
		int i = 0;
		ll po = 1;
		while (n)
		{
			if (n & 1)
			{
				i++;
				if (i % 2)
					a += po;
				else
					b += po;
			}
			po *= 2;
			n = (n >> 1);
		}
		cout << a << " " << b << finl;
	}
}
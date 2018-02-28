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
	while (true)
	{
		int B, N;
		bool check = true;
		ll b[40];
		cin >>B>>N;
		if (B == 0 && N == 0)
			return 0;
		
		for (int i = 1; i <= B; i++)
			cin >> b[i];
		int d, c;
		ll v;
		while (N--)
		{
			cin >> d >> c >> v;
			b[d] -= v;
			b[c] += v;
		}
		for (int i = 1; i <= B;i++)
		if (b[i] < 0)
		{
			check = false;
		}
		if (check)
			cout << "S";
		else
			cout << "N";
		cout << finl;

	}
}
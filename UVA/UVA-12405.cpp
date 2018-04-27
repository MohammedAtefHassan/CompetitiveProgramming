#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define all(v) v.begin(),v.end()
#define format(n) fixed<<setprecision(n)
#define finl "\n"
#define Mohammed_Atef_Hassan fast();
#define mod 1000000007
#define INF 1000000
#define PI acos(-1)
void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	//freopen("input.in", "r", stdin);
	// freopen("output.out", "w", stdout);
#endif
}
int main()
{
	Mohammed_Atef_Hassan
		int t;
	int n; string s;
	while (cin >> t)
	{
		for (int k = 1; k <= t;k++)
		{
			cin >> n >> s;
			int mn = 0;
			for (int i = 0; i < n;)
			{
				if (s[i] == '.')
				{
					mn++;
					i += 3;
				}
				else
					i++;
			}
			cout <<"Case "<<k<<": "<<mn << finl;
		}
	}

} 

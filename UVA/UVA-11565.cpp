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
	 /*infile();
	outfile();*/
}
int arr[3];
int main()
{
	
	Mohammed_Atef_Hassan
		int t; ll a, b, c;
	while (cin>>t)
	{
		while (t--)
		{
			cin >> a >> b >> c;
			ll x=100, y=100, z=100;
			for (ll i =0; i <= 100; i++)
			{
				for (ll j =-100; j <= 100; j++)
				{
					ll v = i + j;
					v = a - v;
					if (i*j*v == b&&(i*i + j*j + v*v) == c)
					{
						arr[0] = i, arr[1] = j, arr[2] = v;
						sort(arr, arr + 3);
						if (x > arr[0])
						{
							x = arr[0], y = arr[1], z = arr[2];
						}
						else if (x == arr[0] && y > arr[1])
						{
							y = arr[1], z = arr[2];
						}
					}
				}
			}
			
			if (x == 100 && y == 100 && z == 100||x==y||x==z||y==z)
				cout << "No solution." << finl;
			else
				cout << x << " " << y << " " << z << finl;
		}
	}
}

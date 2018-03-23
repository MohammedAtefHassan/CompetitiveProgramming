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
map<ll, vector<ll> >mp;
ll n, k;
ll arr[1000000];
ll a[1000000];
ll b[1000000];
int main()
{
	Mohammed_Atef_Hassan
	while (cin >> n >> k)
	{
		ll mx = 0; int idx=0;
		for (int i =0; i < k; i++)
			cin >> arr[i];
		for (ll i = 1; i <(1 << k); i++)
		{
			ll sum = 0, m = i;
			int id = 0, j = 0;
			while (m)
			{
				if (m % 2)
				{
					sum += arr[j];
					a[id++] = arr[j];
				}
				j++;
				m /= 2;
			}
			if (sum > mx&&sum <= n)
			{
				mx = sum;
				for (int i = 0; i < id; i++)
					b[i] = a[i];
				idx = id;
			}
		}
		for (int i = 0; i <idx; i++)
			cout << b[i] << " ";
		cout << "sum:" << mx << finl;
	}
}

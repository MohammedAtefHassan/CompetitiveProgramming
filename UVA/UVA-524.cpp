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
#define INF 1000000000000000000;
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
void fastt(){
	fast();
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);

	freopen("output.out", "w", stdout);
#endif
}
bool prime[10000];
void sieve()
{
	fill(prime, prime + sizeof prime, true);
	prime[1] = false;
	for (int i = 2; i <= 100; i++)
	{
		if (prime[i])
		{
			for (int j = i * 2; j <= 100; j += i)
			{
				prime[j] = false;
			}
		}
	}
}
int n;
vector<int>even, odd;
void print(vector<int>v)
{
	if (v.size() == n)
	{
		if (prime[v[0] + v.back()])
		{
			for (int i = 0; i < v.size()-1; i++)
				cout << v[i]<<" ";
				cout <<v.back()<<finl;
		}
		return;
	}

	bool vis[1000];
	memset(vis, false, sizeof vis);
	for (int i = 0; i < v.size(); i++)
		vis[v[i]] = true;

	if (v.back() & 1)
	{
		for (int i =0; i < even.size(); i++)
		{
			if (prime[v.back() + even[i]]&&vis[even[i]]==false)
			{
				v.push_back(even[i]);
				print(v);
				v.pop_back();
			}	
		}
	}

	else
	{
		for (int i =0; i < odd.size(); i++)
		{
			if (prime[v.back() + odd[i]]&&vis[odd[i]]==false)
			{
				v.push_back(odd[i]);
				print(v);
				v.pop_back();
			}	
		}
	}

}

int main()
{
	Mohammed_Atef_Hassan
		vector<int>v;
	v.push_back(1);

		sieve();
		for (int k = 1; cin >> n; k++)
		{
			
			for (int i = 2; i <= n; i++)
			{
				if (i & 1)
					odd.push_back(i);
				else
					even.push_back(i);
			}
			if (k != 1)
				cout << finl;
			cout << "Case " << k << ":" << finl;
			print(v);
			odd.clear(), even.clear();
		}
			
		

}

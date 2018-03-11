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
priority_queue<ll>pq;
int main()
{
	Mohammed_Atef_Hassan
		int n;
	ll x, sum,a,b;
	while (cin >> n&&n)
	{
		sum = 0;
		while (n--)
		{
			cin >> x;
			pq.push(-1 * x);
		}
		while (pq.size() > 1)
		{
			a = pq.top();
			pq.pop();
			b = pq.top();
			pq.pop();
			sum += -1*(a + b);
			pq.push(a + b);
		}
		cout << sum << finl;
		pq.pop();
	}
	
}
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
int arr[101][101];
int main()
{
	Mohammed_Atef_Hassan
		queue<int>q, d;
	int n;
	while (cin >> n&&n)
	{
		for (int i = 1; i <= n; i++)
			q.push(i);
		while (q.size() > 1)
		{
			d.push(q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}
		cout << "Discarded cards:";
		while (d.size()>1)
		{
			cout <<" "<<d.front() << ",";
			d.pop();
		}
		if (!d.empty())
			cout <<" "<<d.front(),d.pop();
		cout << finl;
		cout << "Remaining card: " << q.front() << finl;
		q.pop();
	}

}
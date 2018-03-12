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
stack<int>s;
queue<int>q;
priority_queue<int>pq;
int main()
{
	Mohammed_Atef_Hassan
		int n,k,v;
	int cnt,cs,cq,cpq;
	while (cin >> n)
	{
		cnt = 0, cs = 0, cq = 0, cpq = 0;
		while(n--)
		{
			cin >> k >> v;
			if (k == 1)
			{
				s.push(v);
				q.push(v);
				pq.push(v);
			}
			else if (k == 2)
			{
				if (!s.empty()&&s.top() == v)
				{
					cs++;
					s.pop();
				}
				if (!q.empty() && q.front() == v)
				{
					cq++;
					q.pop();
				}
				if (!pq.empty() && pq.top() == v)
				{
					cpq++;
					pq.pop();
				}
				cnt++;
			}

		}
		if (cs == cnt&&cq == cnt || cs == cnt&&cpq == cnt || cpq == cnt&&cq == cnt)
			cout << "not sure" << finl;
		else if (cs == cnt)
			cout << "stack" << finl;
		else if (cq == cnt)
			cout << "queue" << finl;
		else if (cpq == cnt)
			cout << "priority queue" << finl;
		else
			cout << "impossible" << finl;
		while (!s.empty())
			s.pop();
		while (!q.empty())
			q.pop();
		while (!pq.empty())
			pq.pop();
	}

}
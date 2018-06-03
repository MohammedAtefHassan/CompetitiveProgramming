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
#define Mohammed_Atef_Hassan fast();
#define mod 1000000007
#define INF 1000000000000000000;
#define PI acos(-1)
void fast(){

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
//	freopen("palindrome.in", "r", stdin);

	//freopen("palindrome.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);

	freopen("output.out", "w", stdout);
#endif
}
int n;
int arr[1001];
int main()
{
	Mohammed_Atef_Hassan
	while (cin >> n&&n)
	{
		bool b = true;
		while (b)
		{
			int i = 0;
			while (cin >> arr[i] && arr[i] && ++i<n);
			if (arr[0] == 0)
			{
				cout << finl;
				b = false;
				continue;
			}
			int x = 1;
			stack<int>s;
			i = 0;
			while (x <= n)
			{
				if (x == arr[i])
					x++, i++;
				else if (!s.empty() && arr[i] == s.top())
					s.pop(), i++;
				else
					s.push(x),x++;
			}
			bool c = true;
			while (c&&!s.empty()&&i<n)
			{
				if (s.top() != arr[i])
				{
					c = false; continue;
				}
				i++; s.pop();
			}
			cout << (c ? "Yes" : "No") << finl;
		}
	}
} 

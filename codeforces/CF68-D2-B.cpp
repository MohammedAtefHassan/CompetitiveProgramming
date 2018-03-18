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
	//   infile();
	//	outfile();
}
int n;
double arr[1000000],k;
bool valid(double x)
{
	double sum1 = 0,sum2=0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]>x)
			sum1 += (arr[i] - x) - (arr[i] - x)*k;
		else if (arr[i] < x)
			sum2 += x - arr[i];
	}
	return sum1 - sum2 >= 0;
}
double fun()
{
	double l = 0, r = arr[n - 1];
	double energy = 0;
	for (int i = 0; i < 100; i++)
	{
		double mid = (l + r) / 2;
		if (valid(mid))
		{
			energy = mid;
			l = mid;
		}
		else
			r = mid;
	}
	return energy;
}
int main()
{
	Mohammed_Atef_Hassan
		cin >> n >> k;
	k /= 100;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cout << format(6) << fun() << finl;
}
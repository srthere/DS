#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int binomialCoeff(int n, int k)
{
	long long res = 1;

	// Since C(n, k) = C(n, n-k)
	if ( k > n - k )
		k = n - k;

	// Calculate value of
	// [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
	for (int i = 0; i < k; ++i)
	{
		res *= (n - i)*1LL;
		res = (res/(i + 1))*1LL;
		res=res%MOD;
	}

	return res;
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout << "Value of C(" << n << ", "<< k << ") is " << binomialCoeff(n, k);
	return 0;
}

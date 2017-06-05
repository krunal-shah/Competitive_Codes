#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argv, char* args[])
{
	long long int n, m, s;
	cin >> n >> m >> s;
	long long int mod_n, mod_m;
	mod_n = n % s;
	mod_m = m % s;
	long long int nby = n/s;
	long long int mby = m/s;
	long long int ans = 1;
	if(mod_n != 0)
	{
		ans *= (nby + 1)* mod_n;
	}
	else
	{
		ans *= n; 
	}
	if(mod_m != 0)
	{
		ans *= (mby + 1)* mod_m;
	}
	else
	{
		ans *= m;
	}
	cout << ans << endl;
}

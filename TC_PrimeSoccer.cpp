#include <iostream>
#include <math.h>
using namespace std;
class PrimeSoccer
{
	public:
    double getProbability(int skillOfTeamA, int skillOfTeamB)
    {
   		double skilla = (double)skillOfTeamA/100;
        double skillb = (double)skillOfTeamB/100;
        double nskilla = 1-skilla;
        double nskillb = 1-skillb;
        double proba = 0, probb = 0;
        int arr[] = {2, 3, 5, 7, 11, 13, 17};
        int temp;
        for (int i=0;i<7;i++)
        {
        	temp = arr[i];
            proba += ncr(18, temp)*pow1(skilla, temp)*pow1(nskilla, 18-temp);
            probb += ncr(18, temp)*pow1(skillb, temp)*pow1(nskillb, 18-temp);
            cout << temp << skilla << pow1(skilla, temp)<< endl;
        }
        proba = 1-proba;
        probb = 1-probb;
        cout << ncr(18,2) << endl;
        return (1-proba*probb);
    }
    double pow1(double a, int n)
    {
    	double ans = 1;
        for(int i=1; i<=n; i++)
        {
            ans *= a;
        }
        return ans;
    }
    double ncr(int n, int r)
    {
    	double ans = 1;
        double ans1 = 1;
        for(int i=1; i<=r; i++)
        {
        	ans *= n; 
            ans1 *= i;
            n--;
        }
        
        return ans/ans1;
    }
};

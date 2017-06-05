#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;



int main(int argv, char* args[])
{
	int t;
    cin >> t;
    int value = 0;
    for(int z=0; z<t; z++)
    {
        value = 0;
        int n, k;
        cin >> n >> k;
        int arr[k+2];
        arr[0] = 0;
        for(int j=1; j<=k; j++)
        {
            cin >> arr[j];
        }
        arr[k+1] = n+1;
        int ptr = 0;
        for(int i=0; i<=n+1; i++)
        {
        	if(i != arr[ptr])
        	{
        		//cout << i << " ";
        	}
        	else
        	{
        		//cout << "(" << i << ") ";
        		ptr++;
        	}

        }
        //cout << endl;

        int dp[k+2][k+1];
        int mini = INT_MAX;
        for(int i=0; i<k+2; i++)
        {
        	for(int j=0; j<k+1; j++)
        	{
        		dp[i][j]=0;
        	}
        }
        for(int len=1; len<=k+1; len++)
        {
        	for(int i=0; i<k+2-len; i++)
        	{
        		mini = INT_MAX;
        		for(int itr = 1; itr<=len-1; itr++)
        		{
        			mini = min(mini, dp[itr][i] + dp[len-itr][i+itr]); 
        		}
        		if(mini!=INT_MAX)
        		{
        			//cout << "For len = " << len << " and i = " << i << " ";
        			dp[len][i] = arr[i+len] - arr[i] + mini - 2;
        			//cout << "min is "<< mini <<" and value is " << dp[len][i]<<endl;
        		}
        		else
        		{
        			dp[len][i] = 0;
        		}
        	}
        }
        //cout << "Here comes the array" << endl;
        for(int i=0; i<k+2; i++)
        {
        	for(int j=0; j<k+1; j++)
        	{
        		//cout << dp[i][j] << " ";
        	}
        	//cout << endl;
        }
        //cout << dp[k+1][0] << endl;

	   
        cout << "Case #"<<z+1<<": "<< dp[k+1][0] << endl << INT_MAX;    
    }
}

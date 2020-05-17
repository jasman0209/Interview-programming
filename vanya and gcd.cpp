#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long vanyaandgcd(int *arr,int n)
{
    long long dp[n][101];
     for(int k=0;k<n;k++)
         for(int i=0;i<=100;i++)
            dp[k][i]=0;
    dp[0][arr[0]]=1;
    for(int i=1;i<n;i++)
    {
        for(int k=i-1;k>=0;k--)
        {
            if(arr[k]<arr[i])
            {
                for(int g=1;g<101;g++)
                {
                    int ng=__gcd(arr[i],g);
                    dp[i][ng]=(dp[i][ng]+dp[k][g])%mod;

                }

            }
        }
        dp[i][arr[i]]++;
    }
    long long sum=dp[0][1];
    for(int i=1;i<n;i++)
     {
         sum=(sum+dp[i][1])%mod;

      }

      return sum;
}
int main()
{
    int n;
    cin>>n;
    int *x=new int[n];

    for(long i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<vanyaandgcd(x,n);
    delete []x;
}

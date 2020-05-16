#include<bits/stdc++.h>
using namespace std;
int findMaxSquareWithAllZeros(int** arr, int row, int col){

    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
     int i,j;
     int dp[row][col];
     for(i=0;i<row;i++)
     {
       if(arr[i][0]==1) dp[i][j]=0;
       else dp[i][0]=1;
     }
     for(j=0;j<col;j++)
    {
        if(arr[0][j]==1)
            dp[0][j]=0;
        else dp[0][j]=1;
    }
    int maxans=1;
    for(i=1;i<row;i++)
    {
        for(j=1;j<col;j++)
        {
            if(arr[i][j]==0){
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
            if(dp[i][j]>maxans) maxans=dp[i][j];
            }
                else dp[i][j]=0;
        }
    }
    return maxans;
}

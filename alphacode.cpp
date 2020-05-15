#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int numDecodings(string s)
{
    int *output=new int [s.length()+1]();
    output[1]=1;
    output[0]=1;
    for(int i=2;i<=s.length();i++)
    {
        if(s[i-1]!='0')
        	output[i]=output[i-1];
        	
        string s1=s.substr(i-2,2);
        //cout<<s1<<"  s1 ";
        int a=s1[0]-'0';
        int b=s1[1]-'0';
        int val=a*10+b;
        if(val>=1&&val<=26)
        {
                
            if(a==0) {}
            else{
            output[i]+=output[i-2];
            //cout<<output[i]<<"   aaaaa "<<endl;
            output[i]=output[i]% mod;
  
            }          
        }
        else if(b==0)
            return 0;     

    }
    int ans=output[s.length()];
    delete [] output;
    return ans;
}
int main(){
    while(1){
        string s;
        cin>>s;
        if(s=="0")	break;

        cout<<numDecodings(s)<<endl;


    }


    return 0;
}

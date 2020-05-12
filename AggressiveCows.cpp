#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPossible(ll *pos,int n, ll dis, int cows){
    if(cows <= 0 || (cows==1 && n>0) )	return true;
    for(int i=1;i<n;i++){
        if(pos[i] - pos[0] >= dis)	return isPossible(pos+i,n-i, dis,cows-1);
    }
    return false;
}
int main() {
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n,c;
        cin>>n>>c;
        ll positions[n];
        for(int i=0;i<n;i++)	cin>>positions[i];
        sort(positions,positions+n);
        ll start = 0;
        ll end = positions[n-1] - positions[0];
        ll ans = -1;
        while(start<=end){
            ll mid = start + (end-start)/2;
            //check if it is possible for mid as min distance.
            if(isPossible(positions, n,mid,c)){
                ans = mid;
                start = mid+1;
            }
            else	end = mid-1;
        }
        cout<<ans<<endl;
    }
}

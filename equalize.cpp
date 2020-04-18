/*
You are given two binary strings a and b of the same length. You can perform the following two operations on the string a

:

    Swap any two bits at indices i

and j respectively (1≤i,j≤n), the cost of this operation is |i−j|, that is, the absolute difference between i and j
.
Select any arbitrary index i
(1≤i≤n) and flip (change 0 to 1 or 1 to 0) the bit at this index. The cost of this operation is 1

    . 

Find the minimum cost to make the string a
equal to b. It is not allowed to modify string b

.
Input

The first line contains a single integer n
(1≤n≤106) — the length of the strings a and b

.

The second and third lines contain strings a
and b

respectively.

Both strings a
and b have length n

and contain only '0' and '1'.
Output

Output the minimum cost to make the string a
equal to b

.
Examples
Input
3
100
001
Output
2
*/





#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	std::cin >> n;
	string s,t;
	cin>>s>>t;
	int count=0;
	for(int i=0;i<n;)
	{
	    if(i+1<n&&s[i]!=t[i]&&s[i]!=s[i+1]&&s[i+1]!=t[i+1])
	    {
	        count++;
	        i+=2;
	    }
	    else if(s[i]!=t[i])
	    {
	        count++;
	        i++;
	    }
	    else
	    {
	    	i++;
		}
	    
	}
	std::cout << count<< std::endl;
	return 0;
}

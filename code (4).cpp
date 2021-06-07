#include<iostream>
using namespace std;
int dp[100000];//={-1};
int fact(int n)
{
	if(n==1||n==0)
	{
		return 1;	
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}	
	return dp[n]=n*fact(n-1);
}
int main()
{
	int num;//enter number of factorial terms in series;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		dp[i]=-1;
	}
	for(int i=1;i<=num;i++)
	{
		cout<<fact(i)<<" ";
	}
	
// 	cout<<fact(num);
}
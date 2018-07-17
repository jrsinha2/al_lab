#include<stdio.h>
#include<limits.h>
int lis(int a[],int n)
{	int i,j,dp[n],max=INT_MIN;
	for(i=0;i<n;i++)
		dp[i]=1;
	for(i=1;i<n;i++)
	{	for(j=0;j<i;j++)
		{	if(a[j]<a[i] && dp[i]<dp[j]+1)
				dp[i]=dp[j]+1;
		}
	}
	for(i=0;i<n;i++)
		if(dp[i]>max)
			max=dp[i];
	return max;
}
int main()
{	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	printf("The longest monotone increasing subsequence is %d\n",lis(a,n));
	return 0;
}

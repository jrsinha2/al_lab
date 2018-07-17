#include<stdio.h>
#include<limits.h>
#include<sys/time.h>
int main()
{	int n;
	scanf("%d",&n);
	while(n--)	
	{	int p,q;
		scanf("%d%d",&p,&q);
		int a[p][q];
		int c=0;
		int i,j;
		int min=INT_MAX;
		double t_start,t_end;
    	struct timeval tv;
		gettimeofday(&tv,NULL);
    	t_start = (tv.tv_sec *1e+6) + tv.tv_usec;    
		if(p>q)
			min=q;
		else
			min=p;
		min-=1;
		min/=2;
		while(c<=min)		
		{	for(i=c;i<p-c;i++)
			{	a[i][c]=c;
				a[i][q-1-c]=c;
			}		
			for(j=c;j<q-c;j++)
			{	a[c][j]=c;
				a[p-1-c][j]=c;
			}
			c++;
		}
		gettimeofday(&tv,NULL);
    	t_end = (tv.tv_sec *1e+6) + tv.tv_usec;
    	printf("Time Taken is %lf\n",t_end-t_start);    
		for(i=0;i<p;i++)
		{	for(j=0;j<q;j++)
			{	printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

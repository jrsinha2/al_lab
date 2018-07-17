#include"highcard.h"
int three(char *a,int l,int r)
{	int i,j,count1=0,count2=0,value=0;
	i=r;
	while(i>=l+2)
	{	char temp=a[i];
		count1=1;
		for(j=i-2;j>=l;j-=2)
		{	if(lookup(a[j])==lookup(temp))
			{	i-=2;
				count1++;
			}
			else
				break;
		}
		if(count1==3)
		{	value=lookup(temp);
			break;
		}
		i-=2;
	}
	return value;
}
		
		

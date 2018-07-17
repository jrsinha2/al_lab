#include"highcard.h"
#include<stdio.h>
int twopairs(char *a,int l,int r,int no)
{	int i,j,count1=0,count2=0,value=0,value2=0;
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
		if(count1==2)
		{	if(count2<1)
				value=lookup(temp);
			if(count2<2)
				count2++;
			if(count2==2)
			{	value2=lookup(temp);
			}
		}
		
		i-=2;
	}
	//printf("%d %d\n",value,value2);
	if(count2==2&& no==1)
		return value;
	else if(count2==2 && no==2)
		return value2;
	else return 0;
}
		
		

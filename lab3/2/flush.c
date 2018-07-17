#include"highcard.h"
int flush(char *a,int l,int r)
{	int i,j,count1=0,count2=0,value=0;
	i=r;
	while(i>=l+2)
	{	char temp=a[i];
		count1=1;
		for(j=i-2;j>=l;j-=2)
		{	if(a[j]==temp)
			{	i-=2;
				count1++;
			}
			else
				break;
		}
		if(count1==5)
		{	value=temp;
			break;
		}
		i-=2;
	}
	return value;
}
		
		

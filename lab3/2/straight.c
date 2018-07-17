#include"highcard.h"
int straight(char *a,int l,int r)
{	char c;
	int value=0;
	int i=r;
	if(lookup(a[i])-lookup(a[i-2])==1)
	{	if(lookup(a[i-2])-lookup(a[i-4])==1)
		{	if(lookup(a[i-4])-lookup(a[i-6])==1)
			{	if(lookup(a[i-6])-lookup(a[i-8])==1)
				{	value=lookup(a[i]);
					//return value;
				}
			}
		}
	}
	return value;
}

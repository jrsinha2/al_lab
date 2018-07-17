#include"highcard.h"
int lookup(char c)
{
	int index=0,i; 
	for(i=0;i<13;i++)
	{	if(pool[i]==c)
		{	index=i+2;
			break;
		}
	}
	return index; 
}

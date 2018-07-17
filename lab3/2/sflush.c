#include"highcard.h"
#include<stdio.h>
int straightflush(char *a)
{	int f1,f2,s1,s2;
	f1=flush(a,1,9);
	f2=flush(a,11,19);
	s1=straight(a,0,8);
	s2=straight(a,10,18);
	if(f1!=0 && s1!=0)		//full house
	{	if(f2==0 || s2==0) 
			return 1;
	}
	else if(f2!=0 && s2!=0)		
	{	//printf("\n\nWhite Wins because of full house\n");
		//continue;
		if(f1==0 && s1==0)
			return 2;
	}
	else if(f1!=0 && s1!=0 && f2!=0 && s2!=0)
	{	if(f1>f2)
			return 1;
		else
		 return 2;
	}
	return 0;
}

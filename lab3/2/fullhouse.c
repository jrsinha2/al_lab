#include"highcard.h"
#include<stdio.h>
int fullhouse(char *a)
{	int three1,three2,pair11,pair12;	
	three1=three(a,0,8);
	three2=three(a,10,18);
	pair11=pair(a,0,8);
	pair12=pair(a,10,18);
	//printf("%d %d \n%d %d",three1,three2,pair11,pair12);
	if(three1!=0 && pair11!=0)		//full house
	{	if(three2==0 || pair12==0) 
			return 1;
	}
	else if(three2!=0 && pair12!=0)		
	{	//printf("\n\nWhite Wins because of full house\n");
		//continue;
		if(three1==0 && pair11==0)
			return 2;
	}
	else if(three1!=0 && pair11!=0 && three2!=0 && pair12!=0)
	{	if(three1>three2)
			return 1;
		else
		 return 2;
	}
	return 0;
}

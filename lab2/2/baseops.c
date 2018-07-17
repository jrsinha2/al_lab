#include<stdio.h>
//#include"base.h"
int count=0;
int initializebase(FILE *basefile, char* d)
{	//FILE *basefile;
	//basefile=fopen("list","r");
	char ch;
	while(!feof(basefile))
	{	ch=fgetc(basefile);
		if(ch!=' ')
		{	d[count]=ch;
			count++;
		}
		//base(ch);
	}
	
	//printf("%d",count);
	return count-2;
}
int lookup(char c,char* l)
{	int i,index;	
	for(i=0;i<count;i++)
	{	if(l[i]==c)
		{	index=i;
			break;
		}
	}
	return index;
}
char lookupr(int n,char *l)
{	
	return l[n];
}	


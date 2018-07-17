#include<string.h>
#include<math.h>
#include<stdio.h>
#include"base.h"
//struct Number
//{	 
int createNumber(int b,char* n)
{	int d=strlen(n);
	//printf("\n%d ",d);
	int num=0;
	int i=d-1,power=1;
	while(i>=0)
	{	//if(n[i]>=97 && n[i]<=122)
		num+=(power*lookup(n[i],a));
		power=power*b;
		i--;
		//a[i]=n[i]-;
	}
	//printf("%d %d\n",b,num);
	return num;
}
void print(char *s,int b,int size)
{	int i=0;
	printf("%d ",b);	
	for(i=0;i<size;i++)
		printf("%c",s[i]);
	printf("\n");
}
void convert(int n,int b)
{	char s[100];
	char t;
	int i=0,len=0;	
	while(n>0)
	{	s[len]=lookupr(n%b,a);
		n/=b;
		len++;
	}
	
	for(i=0;i<len/2;i++)
	{	t=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=t;
	}
	print(s,b,len);
	
}	
void add(int b1,int n1,int b2,int n2)
{	int hb,sign;
	if(b1>b2)
		hb=b1;
	else
		hb=b2;
	int sum=n1+n2;
	convert(sum,hb);
}
void subtract(int b1,int n1,int b2,int n2)
{	int hb,sign;
	if(b1>b2)
		hb=b1;
	else
		hb=b2;	
	int dif;
	if(n1>n2)
	dif=n1-n2;
	else
	dif=n2-n1;
	convert(dif,hb);
}

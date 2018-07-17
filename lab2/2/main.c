#include<stdio.h>
#include<string.h>
#include "base.h"
int main(int argc,char* argv[])
{	FILE *f2,*f1;
	//char a[1000];
	int maxD;
	f1=fopen(argv[1],"r");
	maxD=initializebase(f1,a);
	int i=0;
	//for(i=0;i<maxD;i++)
		//printf("%c ",a[i]);
	//printf("\n");
	f2=fopen(argv[2],"r");
	char ins[8],ch,num1[1000],num2[1000];
	int b1,b2,n1,n2;
	while(!feof(f2))
	{	fscanf(f2,"%s\n",ins);
		//printf("%s\n",ins);
		fscanf(f2,"%d %s\n",&b1,num1);
		n1=createNumber(b1,num1);
		fscanf(f2,"%d %s\n",&b2,num2);
		n2=createNumber(b2,num2);
		if(strcmp(ins,"add")==0)
			add(b1,n1,b2,n2);
		if(strcmp(ins,"subtract")==0)
			subtract(b1,n1,b2,n2);
	}
	return 0;
}
	
	

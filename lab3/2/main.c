#include<stdio.h>
#include"highcard.h"
int main(int argc,char **argv)
{	FILE *f,*f1;
	char a[100],ch;
	int i=0,j,p=0,count=0;
	f1=fopen(argv[1],"r");
	while(!feof(f1))
	{	ch=fgetc(f1);
		if(ch!=' ')
			pool[count++]=ch;
	}
			
	f=fopen(argv[2],"r");
	while(!feof(f))
	{	if(i==20)
		{	int n=i;
			/*for(j=0;j<n-1;j+=2)
				printf("%c%c ",a[j],a[j+1]);
			*/
			i=0;
			//printf("\n");
			int hc,pair11,pair12,pair21,pair22,three1,three2,s1,s2,f1,f2,ff,four1,four2,ss;
			
			hc=highcard(a);
			
			//STRAIGHTFLUSH 
			ss=straightflush(a);
			if(ss!=0)
			{	if(ss==1)
					printf("Black Wins because of straightflush\n");
				else
					printf("White Wins because of straightflush\n");
			}
			else
			{	//FOUR OF A KIND
				four1=four(a,0,8);
				four2=four(a,10,18);
				if(four2==0 && four1!=0)
					printf("Black Wins  because of four of a kind\n");
				else if(four2!=0  && four1==0)
					printf("White Wins  because of four of a kind\n");
				else if(four1!=0 && four2!=0)
				{	if(four1>four2)
						printf("Black Wins because of four of a kind\n");
					else if(four1<four2)
						printf("White Wins because of four of a kind\n");
					continue;
				}
				else
				{	//FULL HOUSE
					ff=fullhouse(a);
					if(ff!=0)
					{	if(ff==1)
							printf("Black Wins because of fullhouse\n");
						else
							printf("White Wins because of fullhouse\n");
					}
					else
					{	//FLUSH
						f1=flush(a,1,9);
						f2=flush(a,11,19);
						if(f1!=0 && f2==0)
							printf("Black Wins because of flush\n");
						else if(f1==0 && f2!=0)
							printf("White Wins  because of flush\n");
						else if(f1!=0 && f2!=0)
						{	if(hc!=0)
							{	if(hc==1)	
								printf("Black Wins  because of flush and then high card\n");
								else
								printf("White Wins  because of flush and then high card\n");
							}
							else
								printf("Tie\n");
							continue;
						}	
						else
						{	//STRAIGHT
							s1=straight(a,0,8);
							s2=straight(a,10,18);
							if(s2==0 && s1!=0)
								printf("Black Wins  because of straight\n");
							else if(s2!=0  && s1==0)
								printf("White Wins  because of straight\n");
							else if(s1!=0 && s2!=0)
							{	if(s1>s2)
									printf("Black Wins  because of straight\n");
								else if(s1<s2)
									printf("White Wins  because of straight\n");
								continue;
							}
							else
							{	//THREE OF A KIND
								three1=three(a,0,8);
								three2=three(a,10,18);
								if(three2==0 && three1!=0)
									printf("Black Wins  because of three of a kind\n");
								else if(three2!=0  && three1==0)
									printf("White Wins  because of three of a kind\n");
								else if(three1!=0 && three2!=0)
								{	if(three1>three2)
										printf("Black Wins because of three of a kind\n");
									else if(three1<three2)
										printf("White Wins because of three of a kind\n");
									continue;
								}
								else
								{	//TWO PAIRS
									pair21=twopairs(a,0,8,1);
									pair22=twopairs(a,10,18,1);
									if(pair21==pair22 && pair21!=0)
									{	pair21=twopairs(a,0,8,2);
										pair22=twopairs(a,10,18,2);
									}
									if(pair21<pair22)
										printf("White Wins  because of two pairs\n");
									else if(pair22<pair21)
										printf("Black Wins because of two pairs\n");
									else
									{	//ONLY A PAIR
										pair11=pair(a,0,8);
										pair12=pair(a,10,18);
										if(pair12>pair11)
										printf("White Wins because of pair\n");
										else if(pair12<pair11)
											printf("Black Wins because of pair\n");
										else 
										{	//HIGH CARD
											if(hc!=0)
											{	if(hc==1)
												printf("Black Wins because of high card\n");
												else
												printf("White Wins because of high card\n");
											}
											else
											printf("Tie\n");
										}
									}	
								}
							}
						}
					}
				}
			}
		}
		ch=fgetc(f);
		if(ch!=' ' && ch!='\n')
			a[i++]=ch;
	}
	return 0;
}

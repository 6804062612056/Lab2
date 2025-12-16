#include <stdio.h>

int main() {
	int a,b,c,d,counta=0,countb=0,countc=0,countd=0,output;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	(a>b) ? counta++ : 0;
	(a>c) ? counta++ : 0;
	(a>d) ? counta++ : 0;
	
	(b>a) ? countb++ : 0;
	(b>c) ? countb++ : 0;
	(b>d) ? countb++ : 0;
	
	(c>a) ? countc++ : 0;
	(c>b) ? countc++ : 0;
	(c>d) ? countc++ : 0;
	
	(d>a) ? countd++ : 0;
	(d>b) ? countd++ : 0;
	(d>c) ? countd++ : 0;
	
	output = (counta == 2) ? a : (countb == 2) ? b : (countc == 2) ? c : (countd == 2) ? d : 0;
	
	printf("%d",output);
}

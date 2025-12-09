#include <stdio.h>

int main() {
	int a,b,c,d,counta=0,countb=0,countc=0,countd=0,output;
	a = 8;
	b = 9;
	c = 10;
	d = 6;
	
	(a>b) ? counta++ : NULL;
	(a>c) ? counta++ : NULL;
	(a>d) ? counta++ : NULL;
	
	(b>a) ? countb++ : NULL;
	(b>c) ? countb++ : NULL;
	(b>d) ? countb++ : NULL;
	
	(c>a) ? countc++ : NULL;
	(c>b) ? countc++ : NULL;
	(c>d) ? countc++ : NULL;
	
	(d>a) ? countd++ : NULL;
	(d>b) ? countd++ : NULL;
	(d>c) ? countd++ : NULL;
	
	output = (counta == 2) ? a : (countb == 2) ? b : (countc == 2) ? c : (countd == 2) ? d : 0;
	
	printf("%d",output);
}

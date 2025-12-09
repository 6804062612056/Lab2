#include <stdio.h>

int main() {
	int a,b,c,d,am,bm,cm,dm,max,output;
	a = 8;
	b = 7;
	c = 10;
	d = 6;
	
	m1 = (a>=b) ? a : b;
	m2 = (m1>=c) ? m1 : c;
	max = (m2>=d) ? m2 : d;
	
	am = a - max;
	bm = b - max;
	cm = c - max;
	dm = d - max;
	
	output = (am && (a > b || !bm) && (a > c || !cm) && (a > d || !dm)) ? a :
	(bm && (b > a || !am) && (b > c || !cm) && (b > d || !dm)) ? b : 
	(cm && (c > a || !am) && (c > b || !bm) && (c > d || !dm)) ? c :
	(dm && (d > a || !am) && (d > b || !bm) && (d > c || !cm)) ? d : NULL;
	
	printf("%d",output);
}

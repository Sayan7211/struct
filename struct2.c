#include<stdio.h>
struct emp

{
	int a;
	char ch;
	float s;
	
};
  
int main()
{
	struct emp e;
	printf("%u%u%u",&e.a,&e.ch,&e.s);
	return 0;
 } 

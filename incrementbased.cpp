#include<stdio.h>
int main(){
	int a=6,b=4,c;
	c=a++;
	b=++c;
	a=b++;
	a++;
	printf("%d %d %d\n",a,b,c);
	return 0;
}

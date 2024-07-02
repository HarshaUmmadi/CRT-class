#include<stdio.h>
int main(){
	int a,d,c=0,temp;
	scanf("%d",&a);
	temp=a;
	while(temp>0){
		d=temp%10;
		c=c*10+d;
		temp/=10;
	}
	printf("%d",c);
}

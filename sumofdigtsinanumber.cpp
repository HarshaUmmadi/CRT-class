#include<stdio.h>
int main(){
	int n,c,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	while(temp>0){
	   c=temp%10;
	   sum+=c;
	   temp=temp/10;	
	}
	printf("%d",sum);
}

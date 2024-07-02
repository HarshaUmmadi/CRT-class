#include<stdio.h>
int main(){
	int n,a[100],t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<t;j++)
	{
	n=a[j];
	if(n==1||n==2){
		printf(0);
	}
	else if(n%2==0){
		printf("%d\n",(n/2)-1);
	}
	else{
		printf("%d\n",n/2);
	}
    }
}

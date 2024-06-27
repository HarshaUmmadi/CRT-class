#include<stdio.h>
int main(){
	int n,a[3],i,j,t,r=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++)
		{
		   scanf("%d",&a);
		   t=a[0]+a[1]+a[2];
		   if(t>=2)
	    	r=r+1;
	    }
	    
	}
	printf("%d",r);
	return 0;
	
}

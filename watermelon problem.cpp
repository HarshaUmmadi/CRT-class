#include <stdio.h>

int main() {
    int a,t;
    scanf("%d",&a);
    t=a/2;
    if(a%2==0 && t%2==0)
       {
        printf("Yes\n");
    	printf("%d %d",t,t);
       } 
    else if(a%2==0 && t%2==1)
       {
        printf("Yes\n");
        printf("%d %d",t+1,t-1);
        }      
    else if(a=2)
	    printf("no");
	else{
		printf("no");
	}	
	return 0;
}

#include <stdio.h>

int main() {
    int a,t;
    scanf("%d",&a);
    t=a/2;
    if(a%2==0 && t%2==0)
    	printf("%d %d",t,t);
    else if(a%2==0 && t%2==1)
        printf("%d %d",t+1,t-1);
    else
	    printf("no");	
}

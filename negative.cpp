#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a&1==0)
    	printf("%d is even",a);
    else
        printf("%d is odd",a);
    if(a^1==a+1)
        printf("%d is even",a);
    else
        printf("%d is odd",a);
    
}

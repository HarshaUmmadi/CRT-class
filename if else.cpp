#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    char m[]={'one','two','three','four','five','six','seven','eight','nine'};
    int a, b;
    scanf("%d\n%d", &a, &b);
    for(int i=a;i<=b;i++){
        if(i<=9){
            printf("%s\n",m[i-1]);
        }
        else if(i>9 && i%2==0){
            printf("even\n");
        }
        else if(i>9 && i%2==1){
            printf("odd\n");
        }
        else{
            printf("Greater than 9");
        }
    }
  	// Complete the code.

    return 0;
}



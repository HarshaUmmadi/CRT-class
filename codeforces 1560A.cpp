#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
    	int k;
    	scanf("%d",&k);
    	int count=0,i=1;
    	while(1){
    		if(i%3!=0 && i%10!=3){
    			count++;
    			
    			if(count==k){
    				printf("%d\n",i);
    				break;
				}
			}
			i++;
		}
	}
}
 

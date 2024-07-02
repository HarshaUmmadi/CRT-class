#include<stdio.h>
int main(){#include<stdio.h>
#include<conio.h>
int main(){
    int n,a[100000],i,j;
    scanf("%d",&n);
    int ut=0;
    int p=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            p+=a[i];
        }
        else{
            p+=a[i];
            if(p<0){
                p=0;
                ut+=1;
            }
        }
    }
    printf("%d",ut);
}
	int i,j=2;
	for(i=2;i<=10;i+=2){
			printf("%d\t",i);
	}
	while(j<=10){
		printf("%d\t",j);
		j+=2;
	}
}

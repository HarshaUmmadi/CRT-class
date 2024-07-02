#include<stdio.h>
int main(){
	char s[]="harshaummadi",us[20],ps[20];
	char p[]="12345678";
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter username:");
		scanf("%s",us);
		printf("enter password:")
		scanf("%s",ps);
		if(strcmp(us,s)==0 && strcmp(ps,p)==0){
			printf("login successful");
			break;
		}
		else if(strcmp(us,s)!=0 && strcmp(ps,p)!=0)
			   {
		    	printf("both username and passwords are incorrect so reenter them");
		    	j++;
		    	printf("remaining attempts are:%d\n",3-j);
		    	i--;
			   }
		else
		   {
			if(strcmp(us,s)!=0)
				    {
					printf("username wrong reenter both username and password\n");
					i--;
			     	}
				else
				    {
				    j+=1;
					if(j==3)
					    {
						printf("account has been blocked\n");
						break;
					    }
					else
					   {
					   	printf("you have entered a wrong password, remaining attempts are: %d\n",3-j);
					   }
			    	}
		       }
	        }
	return 0;
}


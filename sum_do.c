#include<stdio.h>
main(){

    int i=1;
    int n,sum=0;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
     do{
     	sum=sum+i;
    	i++;
	}while(i<=n);
	
	printf("%d\n",sum);
}
	

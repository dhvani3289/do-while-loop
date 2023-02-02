#include<stdio.h>
main(){

    int i=1;
    int n;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
     do{
    	printf("%d\n",n);
    	n--;
	}while(i<=n);
}

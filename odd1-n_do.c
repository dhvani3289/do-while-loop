#include<stdio.h>
main(){

    int i=1;
    int n;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
     do{
     	if(i%2!=0){
     	printf("%d\n",i);
        i++;
	    }
	    i++;
   	}while(i<=n);
}
	
	

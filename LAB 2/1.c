#include<stdio.h>

int main(){
	
	int n;
	
	printf("\nEnter the Number ");
	scanf("%d",&n);
	
	int i, flag=1;
	
	for(i=2;i<=n/2;i++){
		
		if(n%i==0){
			flag = 0;
		}
		
	}
	
	if(flag==0){
		printf("\nNot Prime");
	}
    if(flag==1){
		printf("\nPrime");
	}
	
	return 0;
}

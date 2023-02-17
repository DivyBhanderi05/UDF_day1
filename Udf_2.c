#include<stdio.h>

void div(int i){
	if(i%15==0){
		printf("Number is Divisible by both 3 & 5");
	}else{
		printf("Number is NOT Divisible by 3 & 5");
	}
	
}
main(){
	
	int a; 
	printf("Enter number : ");
	scanf("%d",&a);
	
	div(a);
}

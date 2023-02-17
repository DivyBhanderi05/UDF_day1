#include<stdio.h>

void cube(int i){
	printf("Cube : %d",i*i*i);
}
main(){
	
	int a; 
	printf("Enter number : ");
	scanf("%d",&a);
	
	cube(a);
}

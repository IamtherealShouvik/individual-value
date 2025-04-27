// IV calculator for Pokemon GO.
// All stats range from 0-15

#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int result(float total){
	float diff= total - (int)total;
	int first_digit=(int)(10*diff);
	if((first_digit>=0) && (first_digit<=4))
	return (int)total;
	else
	return 1 + (int)total;
}
int main(){
	int A=0,D=0,S=0;
	float total=0.0;
	
	while(1){
	printf("\nEnter Attack stat: ");
	scanf("%d" ,&A);
	printf("\nEnter Defense stat: ");
	scanf("%d" ,&D);
	printf("\nEnter Stamina stat: ");
	scanf("%d" ,&S);
	
	if((A>=0 && A<=15) && (D>=0 && D<=15) && (S>=0 && S<= 15))
	break;
	else{
	printf("\nOne or more values exceed the range.");
	exit(1);
}
	}
	
	total = (A+D+S)* 20.0/9.0;
	total = roundf(total*100)/100;
	printf("\nIV = %d." ,result(total));
	return 0;
}

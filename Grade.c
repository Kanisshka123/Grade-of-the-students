#include <stdio.h>
int main(void){
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); 
	if (num>100) printf(" ! Wrong data ");
	else if(num >- 85-100){
	printf(" You got A grade"); 
		}
	else if ( num >- 70-84){
		printf(" You got B grade");
		}
	else if ( num >- 55-69){
		printf(" You got C grade");
		}
	else if ( num >- 40-54){
		printf(" You got d grade");
		}
  else if ( num >-40){
  printf(" you got f grade");
  }
return 0;
}

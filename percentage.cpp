#include<stdio.h>
#include<conio.h>
int main(){
	int totalmarks = 1200;
	int obrainedmarks = 1122;
	float percentage;
	
	printf("Enter your obtaned marks \n");
	scanf("%d",&obrainedmarks);
	printf("Enter your total marks \n");
	scanf("%d",&totalmarks);
	
	percentage = (float)obrainedmarks / totalmarks * 100.0;
	
	printf("Your Percentage = %.2f %% ",percentage);
	return 0;
	
}

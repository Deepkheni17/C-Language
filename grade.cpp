#include<stdio.h>
#include<conio.h>
void main(){
	int  student = 100;
	
	if(student >= 90 && student <=100){
		printf("A1");		
	} 
		else if(student >= 80){
		printf("A2");		
	} 
			else if(student >= 70){
		printf("B1");		
	} 
			else if(student >= 60){
		printf("B2");		
	} 
			else if(student >= 50){
			}
		printf("C1");		
	} 
			else if(student >= 40){
		printf("C2");
		}	
				else if(student >= 33){
		printf("C2");
		}
		else if (student<33){
			printf("Fail");
		}
		else{
			printf("Not Available");
		}	
	
}
#include<stdio.h>
//to check if given no. is even or not instead of %2 use bitwise bcas % has the highesttt time complexity
int main(){
	int var=10;
	if ((var&1)==0){ //bcas LSB of even num is 0
		printf("EVEN");
	}
	else if ((var&1)==1){
		printf("ODD");
	}
	
}

//example - person must be older than 18 and shld have an aadhar or id.
int main(){
	int age=5 , aadhar =1 , id=1;
	if(age>=18 &&(aadhar==1||id=1)){
		printf("ALLOWED")
	}
	else printf("NOT ALLOWED");
}

#include<stdio.h>
#include<math.h>

int main(){
	float a=1.0,b=1.0,c=5.0,d=1.0; //4.1
//	float a=9.0,b=2.0,c=0.0,d=1.0; //4.2
//	float a=0.0,b=3.0,c=3.0,d=3.0; //4.3

	printf("%5s =%7.1f\n","A",(3*a/5+1/b)); //A
	printf("%5s =%7.1f\n","B",((3*a+5*b)/(2+c))); //B
	printf("%5s =%7.1f\n","C",2.0/7*(pow(4,3+c)-5*d)); //C
	printf("%5s =%7.1f\n","D",sqrt((2+8*b)/a)); //D
	printf("%5s =%7.1f\n","E",cbrt(pow(b,2)-4*d)); //E
	
	return 0;
}

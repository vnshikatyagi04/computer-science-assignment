#include "mylib.h"
#include <math.h>
int isArmstrong(int num){
	int k=num;
	int c=0;
	int s=0;
	while(num>0){
		c++;
		num=num/10;
	}
	while(k>0){
		int i=k%10;
		s=s+(int)pow(i,c);
		k=k/10;
	}
	return s;
}
int* isAdams(int num){
	static int arr[2];
	int d=0;
	int d1=0;
	int sq=(int)pow(num,2);
	while(num>0){
		int i=num%10;
		d=d*10+i;
		num=num/10;
	}
	int sq1=(int)pow(d,2);
	while(sq>0){
		int j=sq%10;
		d1=d1*10+j;
		sq=sq/10;
	}
	arr[0]=sq1;
	arr[1]=d1;
	return &arr[0];
}
int* isPrimePalindrome(int num){
	int static arr[2];
	int c=0;
	for(int i=1;i<=num;i++){
		if(num%i==0){
			c++;
		}
	}
	int d=0;
	while(num>0){
		int j=num%10;
		d=d*10+j;
		num=num/10;
	}
	arr[0]=c;
	arr[1]=d;
	return &arr[0];
}

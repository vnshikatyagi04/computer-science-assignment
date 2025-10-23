#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"
int main(){
	int choice,ch,num;
	do{
		printf("1. check for armstrong number\n");
		printf("2. check for adams number\n");
		printf("3. check for primepalindrome\n");
		printf("4. Exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		if(choice==4){
			printf("Exiting Program Goodbye\n");
			break;
		}
		printf("enter number\n");
		scanf("%d",&num);
		switch(choice){
			case 1:{
				int s=isArmstrong(num);
				if(s==num){
					printf("number is a armstrong number\n");
				}
				else{
					printf("number is not a armstrong number\n");
				}
				break;
			}
			case 2:{
				int *arr=isAdams(num);
				if(*arr==*(arr+1)){
					printf("number is adams number\n");
				}
				else{
					printf("number is not adams number\n");
				}
				break;
			}
			case 3:{
				int *arr1=isPrimePalindrome(num);
				if(*arr1==2 && *(arr1+1)==num){
					printf("number is both prime and palindrome\n");
				}
				else if(*arr1==2 && *(arr1+1)!=num){
					printf("number is prime but not palindrome\n");
				}
				else if(*arr1!=2 && *(arr1+1)==num){
					printf("number is not prime but palindrome\n");
				}
				break;
			}
			default:
			    printf("Invalid choice please enter valid choice\n");
			}
		}while(choice!=0);
		do{
			printf("1 for max number in a array\n");
			printf("2 for min number in a array\n");
			printf("3 for average of array elements\n");
			printf("4 for displaying an array");
			printf("5 for reversing an array\n");
			printf("6 for sorting an array\n");
			printf("7 for searching an element in array\n");
			printf("8 Exit\n");
			printf("enter your choice\n");
			scanf("%d",&ch);
			if(ch==8){
				printf("Exiting Program Goodbye\n");
				break;
			}
			int l;
			printf("enter length of array\n");
			scanf("%d",&l);
			int arr[l];
			printf("enter array elements\n");
			for(int i=0;i<l;i++){
				scanf("%d",&arr[i]);
			}
			switch(ch){
				case 1:{
					int max=findMaxIndex(&arr[0],l);
					printf("Maximum element in array is %d\n",max);
					break;
				}
				case 2:{
					int min=findMinIndex(&arr[0],l);
					printf("Minimum element in array is %d\n",min);
					break;
				}
				case 3:{
					float avg=findAverage(&arr[0],l);
					printf("Average of array elements is %g\n",avg);
					break;
				}
				case 4:
					displayArray(&arr[0],l);
					break;
				case 5:
					reverseArray(&arr[0],l);
					break;
				case 6:
					sortArray(&arr[0],l);
					break;
				case 7:{
					int value;
					printf("enter element to be searched\n");
					scanf("%d",&value);
					int c=linearSearch(&arr[0],l,value);
					if(c==1){
						printf("Element found in array\n");
					}
					else{
						printf("Element found in array\n");
					}
					break;
				}
				default:
					printf("Invalid choice please enter valid choice\n");
				}
			}while(ch!=0);
			return 0;
		}

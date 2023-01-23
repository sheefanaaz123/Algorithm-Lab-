//Write a program by using a user defined function for computing⌊√n⌋for 
// any positive integer n.Besides assignment and comparison, your algorithm may only use the 
//four basic arithmeticaloperations.

#include<stdio.h>

void calculate_sqrt(int number){

    int sqrt=number/2;
    int t=0;

    while(sqrt!=t){
        t=sqrt;
        sqrt= (number/t+t) /2;
    }
    printf("Answer is : %d\n",sqrt);
    }


    void main(){
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("\nSquare root of %d :: \n",n);
        calculate_sqrt(n);
    }
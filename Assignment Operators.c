/*
    4.Assignment Operators
    Problem : Write a program that demonstrates the use of all assignment operators (=,+=,-=,*=,/=,%=). 
    Perform these operations on an integer and display the results after each operation.
*/

#include<stdio.h>

int main()
{
    printf("PROGRAM FOR PERFORMING ASSIGNMENT OPETATORS\n");
    
    printf("\nAssignment Operator :");
    int i = 10;
    printf("\nVariable i is assign to the value 10");
    
    int a, b;
    printf("\n\nEnter the first number a : ");
    scanf("%d", &a);
    printf("Enter the second number b : ");
    scanf("%d", &b);

    printf("\n+= Operator : %d", a += b);
    printf("\n-= Operator : %d", a -= b);
    printf("\n*= Operator : %d", a *= b);
    printf("\n/= Operator : %d", a /= b);
    
    printf("\n\nCurrent value of a : %d", a);
    printf("\nCurrent value of b : %d", b);
    
    return 0;
}

/*
Program (1) -> Write a program to make use of basic Input/Output functions using different data types.
Solution(1) -> Predefined Values
*/

#include <stdio.h>

int main()
{
    // Variable declaration
    int rollnum;
    float per;
    char grade;
    
    // Assigning predefined values
    rollnum = 55;
    per = 88.88;
    grade = 'A';
    
    // Output formatting using printf
    printf("----- Student Information -----\n");
    printf("\n Roll Number : %d", rollnum);
    printf("\n Percentage : %f", per);
    printf("\n Grade      : %c", grade);
    
    return 0;
}

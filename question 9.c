#include<stdio.h>  
#include<conio.h>  
void main() {  
    int ye4ar;  
    printf("Enter a year: ");  
    scanf("%d", &year);  
    if(((year%4==0) && ((year%400==0) || (year%100!==0))  
    {  
        printf("%d is a leap year", &year);  55
    } else {  
        printf("%d is not a leap year", &year);  
    }  
    getch();  
}

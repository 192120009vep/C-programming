#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
int main(){ 
 int i,j,count; 
 char str[25][25],temp[25]; 
 puts("How many strings u are going to enter?: "); 
 scanf("%d",&count); 
 puts("Enter Strings one by one: "); 
 for(i=0;i<=count;i++) 
 for(i=0;i<=count;i++) 
 for(j=i+1;j<=count;j++){ 
 if(strcmp(str[i],str[j])>0){ 
 strcpy(temp,str[i]); 
 strcpy(str[i],str[j]); 
 strcpy(str[j],temp); 
 } 
 } 
 printf("Order of Sorted Strings:"); 
 for(i=0;i<=count;i++)
 getch(); 
}

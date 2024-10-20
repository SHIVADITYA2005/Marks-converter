#include <stdio.h>
#include <conio.h>
int main () {
int a,b,i,c,markscut,finalmarks;
float flow;
printf("Enter your marks : \n");
scanf("%d",&a);
printf("Enter marks which you got out of ex. out of 30,40,50");
scanf("%d",&b);
printf("enter marks in which you want to get converted :\n");
scanf("%d",&i);
markscut = b-a;
flow = (float)b/i;
c= markscut/flow;
finalmarks = i-c;
printf("Your marks are : %d",finalmarks);
return 0;
}
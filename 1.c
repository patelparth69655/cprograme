//write a program to convert fahrenheit into celsius
/*
 steps 
   1.create variable fahrenheit and celsius
   2.take fahrenehit as input from user.
   3.convert fahrenheit into celsius using formula celsius = (fahrenheit - 32)/1.8
   4.display celsius  
*/
 
#include<stdio.h>
void main ()
{
float fahrenheit,celsius;
 printf("enter the fahrenheit");
 scanf("%f",&fahrenheit);
 celsius=(fahrenheit-32)/1.8;
 printf("celsius = %.2f",celsius);
   
}
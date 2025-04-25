/*
a
ab
abc
abcd
*/
#include<stdio.h>
void main ()
{
    char a;
    printf("enter the letter");
    scanf("%c",&a);

    for(int b = 97;b <= a;b++)
    {
        for(int c = 97;c <= b;c++)
    {
        printf("%c",c);
    }
        printf("\n");
    }
}
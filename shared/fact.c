#include<stdio.h>
#include"header.h"
#include <unistd.h>

int fact(int n)
{
    int i,fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
 printf("factorial=%d",fact);
 return 0;

}

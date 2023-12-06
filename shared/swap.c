#include<stdio.h>
#include"header.h"
#include <unistd.h>

int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swap a=%d and b=%d\n",a,b);
return 0;
}

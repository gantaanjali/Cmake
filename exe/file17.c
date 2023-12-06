#include<stdio.h>
#include"header.h"
#include<unistd.h>

void fun17()
{
printf("\nI am in file17.c\n");
printf("PID of fun17 is %d\n",getpid());
printf("\n calling callfun function\n");
callfun();

}

#include<iostream>
#include<typeinfo>
#include <unistd.h>
extern "C"{
    #include "header.h"
using namespace std;

int main()
{

printf("\ni am in main\n");
printf("\ncalling mylib1 function\n ");
mylib1();
printf("\ncalling mylib2 function\n ");
mylib2();
printf("\ncalling mylib3 function\n ");
mylib3();
printf("\ncalling mylib4 function\n ");
mylib4();
printf("\ncalling mylib5 function\n ");
mylib5();
printf("\nback in main.c\n");
return 0;
}
}

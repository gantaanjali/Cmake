#include<iostream>
#include<typeinfo>
#include <unistd.h>
extern "C"{
    #include "header.h"
using namespace std;

int main()
{

printf("\ni am in main\n");
printf("\ncalling hello function");
hello();
printf("\ncalling add function\n");
add(3,5);
printf("\ncalling multi functio\n");
multi(3,5);
printf("\ncalling swap function");
swap(3,5);
printf("\ncalling factorial function\n");
fact(5);
printf("\ncalling sub function\n");
sub(3,5);
printf("\ncalling bye function\n");
bye();
printf("\n calling close function\n");
closemain();
printf("\nback in main.c\n");
return 0;
}
}

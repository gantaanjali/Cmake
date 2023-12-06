#include<iostream>
#include<typeinfo>
#include <unistd.h>
extern "C"{
    #include "header.h"
using namespace std;
import void callfun(void);

int main()
{

printf("\ni am in main\n");
printf("\ncalling fun16 function");
fun16();
printf("\ncalling fun17 function");
fun17();
printf("\ncalling fun18 function");
fun18;
printf("\ncalling fun19 function");
fun19();
printf("\ncalling fun20 function");
fun20();
printf("\nback in main\n");

}
}

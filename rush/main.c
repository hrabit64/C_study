#include "rush_print.h"
#include "unistd.h"
#include "stdio.h"
#include "exception.h"
int main(){
    //test
    printf("test case 1:\n ");
    rush(0,1,'o','-','|');
    printf("\n");

    printf("test case 2:\n ");
    rush(-2,2,'o','-','|');
    printf("\n");

    printf("test case 3:\n");
    rush(2,2,'o','-','|');
    printf("\n");

    printf("test case 4:\n");
    rush(4,4,'o','-','|');
    printf("\n");

    printf("test case 5:\n");
    rush(5,5,'o','-','|');
    printf("\n");

    printf("test case 6:\n");
    rush(5,1,'o','-','|');
    printf("\n");

    printf("test case 7:\n");
    rush(1,5,'o','-','|');
    printf("\n");

    printf("test case 8:\n");
    rush(3,4,'o','-','|');
    printf("\n");
}
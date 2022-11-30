#include <stdio.h>

int main(){
    char ch = 'A';

    char p1 = &ch;     //ERRADO
    char *p2 = ch;     //ERRADO
    char *p3 = 'A';    //ERRADO
    double *p4 = &ch;  //ERRADO
    char *p5 = &ch;    //CERTO
}
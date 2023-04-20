#include <stdio.h>

void main()
{
    int a,b;
    int *c;
    int *d;
    
    a = 78 ;
    b = 77 ;
    
    c=&a;
    d=&b;
    
    a=*c;
    b=*d;
    if (a > b){
    printf  ("O maior endereço é:%p\n",c);}
    else { 
    printf  ("O maior endereço é:%p\n",d);}    
}

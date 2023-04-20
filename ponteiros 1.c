#include <stdio.h>

int main()
{
    int i, vet_7877[7] = {1,2,3,4,5,6,7};
    for ( i = 0 ; i < 7; i++)
        printf("endereco: %p\tConteudo: %d\n", vet_7877 + i, *(vet_7877 + i ));
    
    return 0;
    
   
}

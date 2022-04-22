#include<stdio.h>
#include<stdlib.h>

int main()
{
    int articulos;
    printf("Ingrese el numero del articulo: ");
    scanf("%d",&articulos);

    if(articulos<1200 || articulos>90000)
    {
        printf("Fuera del catalogo");
    }
    else if(articulos>=12121 && articulos<=18081 || articulos>=30012 && articulos<=45565 || articulos>=67000 && articulos<=68000)
    {
        printf("Defectuoso");
    }
    else
    {
        printf("No es defectuoso");
    }

    return 0;
}

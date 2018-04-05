#include <stdio.h>
#include <conio.h>

int main ()
{
    int num , tnt , cns;
    
    printf (" Adivinhe o numero! [digite 0 para sair] \n\n");
    cns = 6;
    
    for (num=0;; num++)
    {
        scanf ("%d", &tnt);
 if (tnt==0 || tnt==cns) {break;}
        else if (tnt <cns) {printf ("tente um numero maior...\n");}
        else if (tnt>cns) {printf ("tente um numero menor...\n");};
        }
    
    num++;
    printf ("\nNumero de tentativas = %d", num);
    getch ();
    return (0);
}   
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a,b,c;
    int r1,r2,delta;
    printf("Digite o a da equacao do segundo grau\n");
    scanf("%d",&a);
    printf("Digite o b da equacao do segundo grau\n");
    scanf("%d",&b);
    printf("Digite o c da equacao do segundo grau\n");
    scanf("%d",&c);


    delta = (b*b)-4*a*c;
    printf("Delta=%d\n",delta);

    r1=(-b+(delta^(1/2)))/(2*a);
    r2=(-b-(delta^(1/2))/(2*a));
    if(delta<0)
    printf("a equacao nao possui raizes reais");
    else
    printf("raiz 1=%d\n",r1);
    printf("raiz 2=%d\n",r2);


    return 0;
}

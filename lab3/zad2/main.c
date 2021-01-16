#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "head.h"


int main()
{
    double a,b;
    a = 2.0;
    b = 4.0;
    int potega;
    printf("Podaj potege epsilona k (epsilon = 10^-k)\n");
    scanf("%d",&potega);	
    double k = pow(10.0,(-potega));
	printf("Epsilon = %lf\n",k);
    double wynik = rozwiazanie(a,b,k);

    printf("Wynik %lf \n",wynik);


    return 0;
}

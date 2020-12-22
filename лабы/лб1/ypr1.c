    #include <stdio.h>
    #include <math.h>
    #include <locale.h>
    #include <stdlib.h>

    int main(void) {
        setlocale(LC_ALL,"Russian");

        float x, z;
        printf("Введи переменную x:");
        scanf("%f", &x);

        z = 5*pow(x,5);
        
        printf("%f", z);

        return 0;

    }

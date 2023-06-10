#include <stdio.h>
int main()
{
    int i, fibo[50] = {1,1};
    float juros, total, x;// total, juros e valor
    scanf("%f", &x);
    
        for (i = 2; i < 50; i++)
        {
            fibo[i] = fibo[i - 1] + fibo[i - 2]; //Atribuindos os valores de fibo
        }
        for (i = 0; total < 1000000; i++)
        {
            juros = (x / 100) * fibo[i];
            total = juros + x;
            printf("R$ %.2f / ", total);
        }
    return 0;
}

#include "sort.h"
void bubble_ite(int *v, int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int mudou = 0;

        for (int j = 0; j < i; j++)
            if (v[j] > v[j + 1])
            {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                mudou = 1;
            }
        if (mudou == 0)
            return;
    }
}
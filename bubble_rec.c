#include "sort.h"
void bubble_rec(int *v, int n)
{
    int mudou = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (v[j] > v[j + 1])
        {
            int aux = v[j];
            v[j] = v[j + 1];
            v[j + 1] = aux;
            mudou = 1;
        }
    }

    if (mudou)
    {
        bubble_rec(v, n - 1);
    }
}
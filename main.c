#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
int main()
{

    clock_t t;
    int tam;
    scanf("%d", &tam);
    int V[tam][4];
    srand(time(NULL));
    for (int i = 0; i < tam; i++)
    {
        V[i][0] = rand() % tam;
        V[i][1] = rand() % tam;
        V[i][2] = rand() % tam;
        V[i][3] = rand() % tam;
    } /*
     t = clock();
     merge_sort(V[2], 0, tam);
     t = clock() - t;
     printf("merge_sort: %.3f\n", (t / ((double)CLOCKS_PER_SEC)));

     t = clock();
     quick_sort(V[3], 0, tam);
     t = clock() - t;
     printf("quick_sort: %.3f\n", (t / ((double)CLOCKS_PER_SEC)));
 */
    t = clock();
    bubble_ite(V[1], tam);
    t = clock() - t;
    printf("bubble_int: %.3f\n", (t / ((double)CLOCKS_PER_SEC)));
    /*
        t = clock();
        bubble_rec(V[0], tam);
        t = clock() - t;
        printf("bubble_rec: %.3f\n", (t / ((double)CLOCKS_PER_SEC)));
    */
    return 0;
}
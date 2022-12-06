gcc main.c bubble_rec.c bubble_ite.c merge_sort.c quick_sort.c -o main

<table border=1>
    <tr>
    <th>tam vetor</th>
    <th  colspan=3>bubble_rec</th>
    <th colspan=3>bubble_int</th>
    <th colspan=3>merge_sort</th>
    <th colspan=3>quick_sort</th>
    </tr>
    <tr>
        <td>1000</td>
        <td>0.002</td>
        <td>0.002</td>
        <td>0.002</td>
        <td>0.001</td>
        <td>0.001</td>
        <td>0.001</td>
        <td>0.000</td>
        <td>0.000</td>
        <td>0.000</td>
        <td>0.000</td>
        <td>0.001</td>
        <td>0.000</td>
    </tr>
    <tr>
        <td>10000</td>
        <td>0.229</td>
        <td>0.225</td>
        <td>0.225</td>
        <td>0.104</td>
        <td>0.105</td>
        <td>0.056</td>
        <td>0.001</td>
        <td>0.001</td>
        <td>0.001</td>
        <td>0.066</td>
        <td>0.039</td>
        <td>0.039</td>
    </tr>
        <tr>
        <td>100000</td>
        <td>31.823</td>
        <td>31.187</td>
        <td>31.926</td>
        <td>24.745</td>
        <td>24.654</td>
        <td>24.412</td>
        <td>0.026</td>
        <td>0.025</td>
        <td>0.019</td>
        <td>0.024</td>
        <td>0.021</td>
        <td>0.023</td>
    </tr>
        </tr>
        <tr>
        <td>1000000</td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td>0.210</td>
        <td>0.205</td>
        <td>0.203</td>
        <td>1.256</td>
        <td>1.267</td>
        <td>1.254</td>
    </tr>
    </tr>
        <tr>
        <td>10000000</td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td></td>
        <td>2.049</td>
        <td>2.101</td>
        <td>2.112</td>
        <td>103.149</td>
        <td>103.745</td>
        <td>103.764</td>
    </tr>
</table>




### a) Alg iterativo X  Alg recursivo
* o algoritmo itarativo foi um pouco mais rapido
### b) Mergsort X Quicksort
merge sort é mais rapido
### c) A versão mais rápida de alg X o mais lento dentre Mergesort e Quicksort
* mesmo no pior caso o Quicksort é muito mais rapido que o bubble em todos os casos
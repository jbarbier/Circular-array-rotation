#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_array(int *a, int s)
{
    int i;

    for (i = 0; i < s; i++)
    {
        printf("%d, ", a[i]);    
    }
    printf("\n");
}

void solve_it(int *a, int n, int k, int m)
{
    printf("%d\n", a[(((m - k  % n) + n) % n)]);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, k, q; /* size of the array, rotation, number of questions */
    int *a; /* array of int */
    int i;
    int m;
    
    scanf("%d %d %d", &n, &k, &q);
    a = malloc(sizeof(*a) * n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    //print_array(a, n);
    for (i = 0; i < q; i++)
    {
        scanf("%d", &m);
        solve_it(a, n, k, m);
    }
    return 0;
}

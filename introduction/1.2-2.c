#include <stdio.h>
#include <math.h>

long long insert_sort_step(long long n)
{
    return 8 * n * n;
}

long long marge_sort_step(long long n)
{
    return 64 * n * log2(n);
}

int main(void)
{
    long long int n = 2;
    long long i_step, m_step;
    printf("n\tinsert\tmarge\n");
    printf("---------------------\n");
    do {
        i_step = insert_sort_step(n);
        m_step = marge_sort_step(n);
        printf("%lld\t%5lld\t%5lld\n", n, i_step, m_step);
        n++;
    } while (i_step < m_step);

    return 0;
}
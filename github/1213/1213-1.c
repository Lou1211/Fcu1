#include <stdio.h>

int main()
{
    int A, B, counter = 0;
    scanf("%d%d", &A, &B);
    int a[A][B];
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i < A - 1; i++)
    {
        for (int j = 1; j < B - 1; j++)
        {
            if (a[i][j] > a[i + 1][j] && a[i][j] > a[i - 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1])
            {
                printf("%d %d %d\n", a[i][j], i + 1, j + 1);
                counter++;
            }
        }
    }
    if (counter == 0)
    {
        printf("None %d %d\n", A, B);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void check(char *, int);
int main()
{
    char *p;
    int n;
    printf("enter the size of the string");
    scanf("%d", &n);
    p = (char *)malloc((n + 1) * sizeof(char));
    if (p == NULL)
    {
        printf("memory is not allocated");
    }
    else
    {
        printf("enter the string");
        scanf("%s",p);
        check(p, n);
    }
    return 0;
}
void check(char *p, int n)
{
    int i, d = 1, k, f;
    if (p[n - 1] == '\n')
    {
        p[n - 1] = '\0';
    }
    else
    {
        for (i = 0; p[i] != '\0'; i++);
        k = i - 1;
        for (f = 0; f <= k; f++)
        {
            if (p[f] != p[k])
            {
                d = 0;
                break;
            }
            k--;
        }
        if (d == 1)
        {
            printf("string is palindrone:-\n");
            puts(p);
        }
        else
        {
            printf("string is not palindrone:-\n");
            puts(p);
        }
    }
    free(p);
}
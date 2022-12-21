#include <stdio.h>
int main()
{
    int search, c, n,flag=0;
    printf("Enter size of array- ");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements- ");
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter a number to be searched- ");
    scanf("%d", &search);
    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            flag=1;
            printf("Found %d.\n", search, c);
            break;
        }
    }
    if (flag==0)
        printf("%d Not Found\n", search);
}

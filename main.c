#include <stdio.h>
#include <stdlib.h>

void traverse();
int a[20], n;

int main()
{
    int i;

    printf("ENTER SIZE OF AN ARRAY: ");
    scanf("%d", &n);

    printf("ENTER DATA OF AN ARRAY:\n");

    for(i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    traverse();

    return 0;6

}

void traverse()
{
    int i;

    system("cls");   // pwede ring alisin kung ayaw mong mag-clear

    printf("THE DATA OF THE ARRAY ARE: ");

    for(i = 1; i <= n; i++)
        printf("%d ", a[i]);
}
#include <stdio.h>
int main()
{
    int rows, number = 1;
    printf("Enter the number of rows");
    scanf("%d", &rows);
    for (int i = 1; i < rows; i++) // print pyramid
    {
        for (int j = i; j < rows; j++) // spaces
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) // numbers with spaces
        {
            printf("%d ", number);
            number++;
        }
        printf("\n"); // next line
    }
    return 0;
}
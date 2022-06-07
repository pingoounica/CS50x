#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

        //prints rows
    for (int row = 0; row < height; row++)
    {
        //prints space
        for (int space = height - row - 1; space > 0; space--)
        {
            printf(" ");
        }
        //prints hashes
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }
        printf("  ");
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}

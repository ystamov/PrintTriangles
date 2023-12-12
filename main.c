#include <stdio.h>

#define MAX_TRIANGLE_ROWS 12

void PrintTriangle(const int rows);

int main(int argc, char **argv)
{
    for(int triangleRows = 2; triangleRows <= MAX_TRIANGLE_ROWS; triangleRows++)
    {
        PrintTriangle(triangleRows);
    }
    
	return 0;
}

void PrintTriangle(const int rows)
{
    const char star = '*', space = ' ';
    const int columns = rows + (rows - 2);
    const int middlePoint = columns / 2 + 1;
    int shift = 0;
    
    for(int row = 1; row <= rows; row++)
    {
        int starPoint1 = middlePoint - shift;
        int starPoint2 = middlePoint + shift;
        
        for(int rowPoint = 1; rowPoint <= columns + 1; rowPoint++)
        {
            if(row < rows)
            {
                if(rowPoint != starPoint1 && rowPoint != starPoint2)
                    printf("%c", space);
                else
                    printf("%c", star);
            }
            else
                printf("%c", star);
        }
        
        printf("\n");
        shift++;
    }
}

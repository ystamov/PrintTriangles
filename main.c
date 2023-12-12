#include <stdio.h>

void PrintTriangle(const int rows);

int main(int argc, char **argv)
{
    int triangleRows = 0;
    printf("Enter the number of triangle rows you want: ");
    scanf("%d", &triangleRows);
    
    for(int triangleRow = 2; triangleRow <= triangleRows; triangleRow++)
    {
        PrintTriangle(triangleRow);
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
        
        for(int point = 1; point <= columns + 1; point++)
        {
            if(row < rows)
            {
                if(point != starPoint1 && point != starPoint2)
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

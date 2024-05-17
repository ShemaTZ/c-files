#include <stdio.h> 

int main(void)
{
    
    int num[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
   
    int rows = sizeof(num) / sizeof(num[0]);
    int columns = sizeof(num[0]) / sizeof(num[0][0]);

    printf("Rows: %d\n", rows);
    printf("Columns: %d\n", columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}
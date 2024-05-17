#include <stdio.h>
#include <string.h>

void sort(int numbers[], int size);
void printArray(int numbers[],int size);

int main(void)
{
    
    int numbers[] = {9,8,7,6,5,4,3,2,1,0};
    int size = sizeof(numbers)/sizeof(numbers[0]);
   

    sort (numbers, size);
    printArray(numbers, size);

     return 0;
}

void sort (int numbers[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
            
        }
    }
    
}

void printArray(int numbers[],int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ",numbers[i]);
  }
  
}
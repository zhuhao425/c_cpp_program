#include <sort.h>

void swap(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int bubblesort(int array[],int len)
{
    int i,j;
    for(i = 0; i < len; i ++)
    {
        for(j = i + 1; j < len; j ++)
        {
            if(array[i] > array[j])
                swap(&array[i],&array[j]);
        }
    }
    return 0;
}

int selectionsort(int array[], int len)
{
    int i,j,mins;
    for(i = 0; i < len; i ++)
    {
        mins = i;
        for(j = i; j < len; j ++)
        {
            if(array[j] < array[mins])
            {
                mins = j;
            }
        }
        swap(&array[i], &array[mins]);
    }
    return 0;
}

int quicksort(int array[], int len)
{
    return 0;
}
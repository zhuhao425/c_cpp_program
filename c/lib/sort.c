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
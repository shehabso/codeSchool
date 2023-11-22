#include "average.h"
int average(int *arr,int size )
{
    if(size==0){
     return 0;
    }
int average =0;
for (int i = 0; i < size; i++)
{
    /* code */
    average=arr[i]+average;
}
return (int) average/size;
}
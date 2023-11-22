
#ifdef TEST

#include "unity.h"

#include "average.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_average_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement average");
}
 void test_average_function(void)
 {
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int result =average(arr,size);
    TEST_ASSERT_EQUAL_INT (3, result);
 }
 void test_average_fuction_with_zero_size(void)
 {
    int arr[]={};
    int size=sizeof(arr)/sizeof(int);
    int result =average(arr,size);
    TEST_ASSERT_EQUAL_INT (0, result);
 }
 

#endif // TEST

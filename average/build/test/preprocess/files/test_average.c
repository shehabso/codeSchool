#include "src/average.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"










void setUp(void)

{

}



void tearDown(void)

{

}



void test_average_NeedToImplement(void)

{

    UnityIgnore( (("Need to Implement average")), (UNITY_UINT)(18));

}

 void test_average_function(void)

 {

    int arr[5]={1,2,3,4,5};

    int size=sizeof(arr)/sizeof(int);

    int result =average(arr,size);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

 }

 void test_average_fuction_with_zero_size(void)

 {

    int arr[]={};

    int size=sizeof(arr)/sizeof(int);

    int result =average(arr,size);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(32), UNITY_DISPLAY_STYLE_INT);

 }

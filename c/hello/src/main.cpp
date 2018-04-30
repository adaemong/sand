#include <stdio.h>
#include "test.h"
#include <vector>
#include <iostream>

using namespace std;

vector<int> va;

extern int g_count;

int getMax(int a, int b)
{
    return (a>b? a:b);
}


int main()
{
    int arr_a[15] ={0};

    for (int loop = 0; loop < sizeof(arr_a)/sizeof(int); loop++)
    {
        arr_a[loop] = getMax(1000, 1001);
        va.push_back(arr_a[loop]);
        cout<<g_count<<endl;
    }


    return dispInfo();
}
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int findMinX(int num[], int rem[], int k)
{
    int x = 1;
    while (true)
    {
        int j;
        for (j=0; j<k; j++ )
            if (x%num[j] != rem[j])
               break;
        if (j == k)
            return x;
 
        x++;
    }
 
    return x;
}
int main(void)
{
    int num[] = {3, 4, 5};
    int rem[] = {2, 3, 1};
    int k = sizeof(num)/sizeof(num[0]);
    cout << "x is " << findMinX(num, rem, k);
    return 0;
}

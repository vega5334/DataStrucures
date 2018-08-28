/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>
using namespace std;

bool find3Numbers(int A[], int n, int key)
{
    sort(A,A+n);
    
    for( int i=0; i<n-2;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            if(A[i]+A[l]+A[r]==key) {
                cout<<"Triplet is "<< A[i]<<" "
                       <<A[l]<<" "<<A[r];
                return true;
            }
            else if(key<A[i]+A[l]+A[r]) r--;
            else l++;
            
        }
    }
    return false;
}

int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    find3Numbers(A, arr_size, sum);

    return 0;
}

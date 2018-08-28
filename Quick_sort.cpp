
#include <iostream>

using namespace std;
int  partition( int A[], int start, int end)
{
    int pivot= A[end];
    int partition_index=start;
    
    for( int i=start;i<end;i++)
    {
        if( A[i]<= pivot)
        {
            swap(A[i],A[partition_index]);
            partition_index++;
        }
        
    }
    swap(A[partition_index],A[end]);
    return partition_index;
}

void quicksort(int A[], int low, int high)
{
    if( low<high)
    {
        int partition_index= partition(  A,  low,  high);
        quicksort( A, low, partition_index-1);
        quicksort(  A, partition_index+1, high);
    }
}

int main()
{
    
    
    int A[]={3,5,7,1,2,8,9,4};
    int n=sizeof(A)/sizeof(A[0]);
    
    quicksort(A, 0, n-1);
    
    cout<< " After quicksort";
    for ( int i=0; i<n;i++)
        cout<< A[i]<<" ";
    
}


#include <iostream>

using namespace std;
void merge( int A[], int start,int mid, int end)
{
    int *temp=new int[end-start+1];
    int i=start;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=end)
    {
        if(A[i]<A[j])
        {
            temp[k++]=A[i++];
        }
        else
            temp[k++]=A[j++];
    }
    while(i<=mid)
        temp[k++]=A[i++];
    while(j<=end)
        temp[k++]=A[j++];
    
    k=0;
    for(i=start;i<=end;i++)
    {
        A[i]=temp[k];
        k++;
    }
}

void mergeSort(int A[], int low, int high)
{
    if( low<high)
    {
        int m=(high+low)/2;
        mergeSort( A, low, m);
        mergeSort(  A, m+1, high);
        
        merge(A,low,m,high);
    }
}

int main()
{
    
    
    int A[]={3,5,7,1,2,8,9,4};
    int n=sizeof(A)/sizeof(A[0]);
    mergeSort(A, 0, n-1);
    
    cout<< " After mergeSort ";
    for ( int i=0; i<n;i++)
        cout<< A[i]<<" ";
    
}


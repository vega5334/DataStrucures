#include <stdio.h>

void mem_rev(void* src, int len)
{
    //len=len-1;
    //len=len-1; 
	int l=0;
	if(len%2==0)						// For even length, l=length for swapping
	{
		l=len/2;
	}
	else 								// For odd length
	{
		l=(len-1)/2;
	}
    char* s=(char*)src;
    char temp;
    
    for( int i=0;i<l;i++)
    {
        temp=*(s+i);
        *(s+i)=*(s+len-1-i);
        *(s+len-1-i)=temp;
    }
}

int main()
{
    //cout<<"Hello World";
     char str[100]="HelloWorld";
     mem_rev(str,10);
     printf("%s",str);
    return 0;
}

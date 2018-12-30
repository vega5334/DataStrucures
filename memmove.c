#include <stdio.h>

void my_Memmove(void *d,void *s, int len) 
{ 
    char* dest=(char*)d;
    char* src=(char*)s;

   if(dest<=src)
   {
       for( int i=0;i<len;i++)
          *(dest+i)=*(src+i);   // dest[i]=src[i];
   }
   else
   {
       for( int i=len-1;i>=0;i--)
         *(dest+i)=*(src+i);    // dest[i]=src[i];
     }
} 



int main()
{
    //printf("Hello World");
   char str[100]="HelloWorld";
   my_Memmove(str+3,str,10);
   printf("%s",str);
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char s[1000]="hai hello";
   int i;
   cout<<"Enter string:";
   s[0]-=32;
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]==' ')
       {
           i++;
           s[i]-=32;
       }
   }
   cout<<s;
}

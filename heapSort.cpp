#include "help.h"

void adjust(int *a ,int len,int i)
{
 // int tmp= a[i];
  int next=2*i+1;
  while(next<len)
  {
    if(next+1<len&& a[next+1]>a[next] )  
       next++;
    if(a[i]<a[next]) 
    {
       swap(a[next],a[i]);
       i=next;
       next=2*i+1;
    }
   else break;
      
  }
}

void hSort(int *a ,int len)
{
  for(int i=len/2-1; i>=0; --i) 
    adjust(a,  len,i);
  while(len>1)
  {
      swap(a[0],a[len-1]);
      len--;
      adjust(a,len,0);
  } 
}

int main()
{
  int a[]={15,13,62,57,2,0,6,-7,64,12,13};
  hSort(a,11);
  cout<<"heap sort done .. "<<endl;
}



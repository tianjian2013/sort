#include "help.h"
void sSort(vector <int> & data)
{
   int n=data.size();
   if(n<2) return ;
   for(int i=0;i<n;i++)
   {
      int k=i;
      for(int j=i+1;j<n;j++)
      {
         if(data[j]<data[k] )  k=j;
      }
      swap(data[i],data[k]);
   }
}


int main()
{
  int a[]={9,8,7,6,5,4,3,2,1,0};
  vector <int > input(a,a+10);
  showvector(input);
  sSort(input);
  showvector(input);
}


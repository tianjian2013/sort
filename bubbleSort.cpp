#include "help.h"

void bSort(vector <int >&data)
{
  int n=data.size();
  if(n<2) return;
  int m=n-1;
  bool flag=true;
  while(m&&flag)
  {
    flag=false;
    for(int i=0;i<m;i++)
    {
       if(data[i]>data[i+1] ) 
       {
           flag=true;
           swap(data[i],data[i+1]);
       }
    }
    m--;
  }
}

int main()
{
int a[]={9,8,7,6,5,4,3,2,1,0};
vector <int> input(a,a+10);
showvector(input);
bSort(input);

showvector(input);
}

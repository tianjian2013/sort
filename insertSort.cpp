#include "help.h"

void iSort(vector<int > &data)
{
  int n=data.size();
  if(n<2) return ;
  for(int i=1;i<n;i++)
  {
     int tmp=data[i];
     int j=i-1;
     while(j>=0&&data[j]>tmp)
     {
        data[j+1]=data[j];
        j--;
     }
     data[j+1]=tmp;
  }
}

int main()
{
  int a[] ={9,8,7,6,5,4,3,2,1,0};
  vector <int > input(a,a+10);
  showvector(input);
  iSort(input);  
  showvector(input);
}

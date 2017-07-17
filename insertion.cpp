#include <iostream>

int main()
{
  std::cout<<"Insertion sort \n";
  int n = 8;
  int A[n] = {2,7,4,9,1,0,6,8};
  int hole, value;

  for(int i =0 ; i<n ;i++)
  {
    std::cout<<A[i];
  }

  std::cout<<"\n Sorted : ";

  for(int j=1 ; j<n ; j++)
  {
     value = A[j];
     hole = j;

     while(hole >0 && A[hole-1] > value)
     {
       A[hole] = A[hole-1];
       hole = hole -1;
     }

     A[hole]= value;

  }

  for(int k= 0 ;k<n ; k++)
  {
    std::cout<<A[k];
  }

  return 0;
}

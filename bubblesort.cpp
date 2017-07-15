#include <iostream>

int main()
{
  int n =7; //size of the array
  int A[n] = {4,7,1,3,9,2,5};
  int temp;

  std::cout<<"Initial array is : ";

  for(int i=0 ; i<n ; i++)
  {
    std::cout<<A[i];
  }

  //bubble sort logic
  for(int j=0 ; j<n ; j++)
  {
      for(int k=0 ; k<n-j-1 ; k++)      //liner search and swap the elements
      {
          if(A[k] > A[k+1])
          {
              temp = A[k];
              A[k] = A[k+1];
              A[k+1] = temp;
          }
      }
  }

 std::cout<<"\nArray after bubble sort : ";

  for(int l=0 ; l<n ; l++)
  {
    std::cout<<A[l];
  }

  std::cout<<"\n";

  return 0;
}


#include <iostream>

int main()
{
  std::cout << "Selection sort !" << std::endl;
  int n = 7;
  int A[n] = {2,5,3,8,9,4,1};
  int i,k,j,l;
  int A_min;
  int temp;

  std::cout<<"initial array is : ";

  for(i =0 ; i<n ;i++)
  {
    std::cout << A[i] ;     //display the array
  }

  std::cout<<"\n";

  for(j=0; j< n-1 ;j ++)
  {
     A_min = j;

     for(k= j+1 ; k < n ; k++)
     {
       if(A[k] < A[A_min])
        {
            A_min = k;
        }
      }
       temp = A[j];
       A[j] = A[A_min];
       A[A_min] = temp;
  }

  std::cout<<"Sorted array is : ";
  for(l=0 ; l<n ;l++)
    {
      std::cout<<A[l];      //display the array 
    }
  std::cout<<"\n";
  return 0;
}

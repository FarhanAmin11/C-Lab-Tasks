#include <iostream>
using namespace std;

int calculatesum(int arr[],int size)
{
  double total=0;
  for(int i=0 ;i<size ; i++)
  total=total+arr[i];

  return total;
}

int main()
{
    int size=10;
    int arr[size];

    cout<<"enter 10 numbers"<<endl;

    for (int i=0 ;i<10 ; i++){
    cin>>arr[i];
    }

    int totalsum = calculatesum(arr,size);
    double average = totalsum/size;

    cout << totalsum <<"    is sum   " <<endl;
    cout << average  <<"  is average " <<endl;
}
 
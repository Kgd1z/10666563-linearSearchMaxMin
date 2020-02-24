#include <iostream>
using namespace std;

int Lsearch(int arr[], int numberOfItems, int x)
{

    for (int i = 0; i < numberOfItems; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = { 2, 4, 6, 8, 10 };
    int x = 11;
    int numberOfItems = sizeof(arr) / sizeof(arr[0]);
    int result = Lsearch(arr, numberOfItems, x);
   if(result == -1){

     cout<<"Element is not present in array";

   }else{

   cout<<"Element is present at index " <<result;
   }

   return 0;
}


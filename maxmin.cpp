#include<iostream>

    using namespace std;

    int main ()

    {

        int arr[10], noOfElements, i, max, min;

        cout << "Please enter the size of the array : ";

        cin >> noOfElements;

        cout << "Please enter the elements of the array : ";

        for (i = 0; i < noOfElements; i++)

            cin >> arr[i];

        max = arr[0];

        for (i = 0; i < noOfElements; i++)

        {

            if (max < arr[i])

                max = arr[i];

        }

        min = arr[0];

        for (i = 0; i < noOfElements; i++)

        {

            if (min > arr[i])

                min = arr[i];

        }

        cout << "Maximum element : " << max;

        cout << "Minimum element : " << min;

        return 0;

    }

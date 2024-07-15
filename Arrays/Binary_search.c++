#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int even[10] = {2, 4, 6, 8, 10};
    int odd[11] = {1, 3, 7, 9, 11, 13};

    int evenindex = binarysearch(even, 10, 8);
    int oddindex = binarysearch(odd, 11, 13);

    cout << "Index of 10 in even array: " << evenindex << endl;
    cout << "Index of 11 in odd array: " << oddindex << endl;

    return 0;
}

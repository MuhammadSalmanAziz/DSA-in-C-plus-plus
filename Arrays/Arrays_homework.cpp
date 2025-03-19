#include <iostream>
using namespace std;

int sumArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int producArr(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
     // int nums[5] = {1, 2, 3, 4, 5};
    // int size = 5;
    // cout << "The sum of nums is " << sumArr(nums, size) << endl;
    // cout << "The Product of nums is " << producArr(nums, size);
}

void larget_smallest_num_and_indexes(){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_index = 0;
    int largest_index = 0;

    int arr[] = {2, 4, -1, 1, 10, 8};
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        if (arr[i] == smallest)
        {
            smallest_index = i;
        }
        largest = max(arr[i], largest);
        if (arr[i] == largest)
        {
            largest_index = i;
        }
    };

    cout << "The smallest num in array = " << smallest << endl;
    cout << "The smallest number index in array = " << smallest_index << endl;

    cout << "The largest num in array = " << largest << endl;
    cout << "The largest number index in array =  " << largest_index << endl;
}


int main()
{
    int size = 8;
   int arr[] = {1,2,3,4,5,6,7,8};
   int start = 0;
   int end = size -1;
   while(start < end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
   for(int i = 0;i<size;i++){
    cout<<arr[i];
   }
   
    return 0;
}
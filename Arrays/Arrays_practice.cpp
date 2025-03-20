#include <iostream>
using namespace std;

int linear_search(int arr[],int size , int target){
    for(int i = 0 ; i <  size;i++){
        if( arr[i] == target){
            return i;
        }
    }
    return -1;
}
void reverse(){
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
}
void swap_max_and_min(int arr[],int size){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_index = 0;
    int largest_index = 0;

    for(int i = 0 ;i<size-1;i++){
        smallest = min(arr[i],smallest);
        if(arr[i] == smallest){
            smallest_index = i;
        }
        largest = max(arr[i],largest);
        if (arr[i]==largest)
        {
            /* code */
            largest_index = i;
        }
    }
    cout<<"The smallest number is "<<smallest<<endl;
    cout<<"The smallest number index is "<<smallest_index<<endl;
    cout<<"The largest number is "<<largest<<endl;
    cout<<"The largest number index is "<<largest_index<<endl;
    swap(arr[smallest_index],arr[largest_index]);

    for(int j = 0 ; j<size;j++){
        cout<<arr[j];
    }
}
int main(){

    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    // int arr[] = {4,10,45,64,-2 , -1};
    // for(int i = 0 ; i<size(arr);i++){
    //     // One Way
    // //     if(arr[i] < smallest){
    // //         smallest = arr[i];
    // //     }

    // // Another
    //   smallest = min(arr[i],smallest);
    //   largest = max(arr[i],largest);

    // } 
    // cout<<"The smallest num in the list is "<<smallest<<endl;
    // cout<<"The largest num in the list is "<<largest<<endl;
    int size  = 5;
    int arr [size] = {3,5,4,6,7};
    swap_max_and_min(arr,size);
    // for(int j = 0 ; j<size;j++){
    //     cout<<arr[j];
    // }
    // return 0;
}
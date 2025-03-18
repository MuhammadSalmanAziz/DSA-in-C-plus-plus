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
    int target  = 40;
    int arr [size] = {3,5,4,6,7};
    int res = linear_search(arr,size,target);
    cout<<"The location of the target is "<<res;
    return 0;
}
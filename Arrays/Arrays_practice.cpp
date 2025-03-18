#include <iostream>
using namespace std;
int main(){

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int arr[] = {4,10,45,64,-2 , -1};
    for(int i = 0 ; i<size(arr);i++){
        // One Way
    //     if(arr[i] < smallest){
    //         smallest = arr[i];
    //     }

    // Another
      smallest = min(arr[i],smallest);
      largest = max(arr[i],largest);

    } 
    cout<<"The smallest num in the list is "<<smallest<<endl;
    cout<<"The largest num in the list is "<<largest<<endl;

    return 0;
}
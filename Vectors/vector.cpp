#include<iostream>
#include<vector>
using namespace std;

int linear_search(vector<int> vec ,int size, int target){
    for(int i = 0; i<size;i++){
        if(vec[i] == target){
            return i;
        }
    }
    return -1;
}

void reverse_vec(vector<int>&vec){
    int start = 0;
    int end = vec.size() -1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    // for(int val : vec){
    //     cout<<val;
    // }
}

int main(){
    vector<int> vec = {1,2,3};
    // int target = 2;
    // int res = linear_search(vec,vec.size(),target);
    // cout<<res;
    reverse_vec(vec);
    for(int val : vec){
        cout<<val;
    }

}
#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> nums){
    vector<int> lst;
    int n = nums.size();
    int c1=0, c2=0;
    int el1=INT_MIN, el2=INT_MIN;
    for(int i=0; i<n; i++){
        if(c1==0 && el2 != nums[i]){
            c1=1;
            el1=nums[i];
        } else if (c2==0 && el1 != nums[i]) {
            c2 = 1;
            el2 = nums[i];
        } else if (el1 == nums[i]) c1++;
        else if(el2 == nums[i]) c2++;
        else {
            c1--;
            c2--;
        }
    }
    c1=0, c2=0;
    for(int i=0; i<n; i++){
        if(nums[i] == el1) c1++;
        if(nums[i] == el2) c2++;
    }
    int mini = (int)n/3 + 1;
    if(c1 >= mini) lst.push_back(el1); 
    if(c2 >= mini) lst.push_back(el2);
    return lst;
}

int main(){
    vector<int> arr = {20, 20, -30, -30, -30, 20};
    vector<int> v = majorityElement(arr);
    for(int i : v){
        cout << i << endl;
    }
    return 0;
}
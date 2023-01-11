#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<int>arr={5,1,7,2,19,6};
    int k=2;
    // linear search
    bool isExist=false;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            isExist=true;
            break;
        }
    };
    if(isExist)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
    return 0;
}

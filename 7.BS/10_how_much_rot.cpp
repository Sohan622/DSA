#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr) {
    int st = 0, en = arr.size() - 1;
    int minVal = INT_MAX;
    int idx = -1;

    while (st <= en) {
        int mid = (st + en) / 2;

        if (arr[st] <= arr[en]) {
            if (arr[st] < minVal) {
                idx = st;
                minVal = arr[st];
            }
            break;
        }

        if (arr[st] <= arr[mid]) {
            if (arr[st] < minVal) {
                idx = st;
                minVal = arr[st];
            }
            st = mid + 1;
        } else {
            if (arr[mid] < minVal) {
                idx = mid;
                minVal = arr[mid];
            }
            en = mid - 1;
        }
    }
    return idx;
}
int main (){
    vector<int> arr={4,5,6,7,0,1,2};
    int result=findKRotation( arr);
    cout<<"Times rotated: "<<result<<endl;
    return 0;
}
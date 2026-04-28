#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) 
            return false;
    }
    return true;  
}

int main() {int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)cin>>arr[i];
    printf("%s", isSorted(arr, n) ? "Sorted" : "Not Sorted");  
}

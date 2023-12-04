#include <iostream>
using namespace std;
void rotate_array(int arr[], int n, int d){
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++){
        temp[i] = arr[n - d + i];
    }
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    for (int i = 0; i < d; i++){
        arr[i] = temp[i];
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;
    cout << "Array Before Rotation: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    rotate_array(arr, n, d);
    cout << "\nArray  After Rotation " << d << " Position to right: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

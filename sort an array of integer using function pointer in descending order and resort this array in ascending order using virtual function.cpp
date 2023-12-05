#include <iostream>
using namespace std;
int compare_desc(int a, int b) {
  if (a > b) return -1;
  if (a < b) return 1;
  return 0;
}
int compare_asc(int a, int b) {
  if (a > b) return 1;
  if (a < b) return -1;
  return 0;
}
void sort(int arr[], int n, int (*compare)(int, int)) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (compare(arr[i], arr[j]) > 0) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
class Array {
  protected:
    int *arr; 
    int size; 
  public:
    Array(int a[], int n) {
      size = n;
      arr = new int[size]; 
      for (int i = 0; i < size; i++) {
        arr[i] = a[i]; 
      }
    }
    ~Array() {
      delete[] arr;
    }
    virtual void sort() = 0;
    void print() {
      for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
    }
};
class DescArray : public Array {
  public:
    DescArray(int a[], int n) : Array(a, n) {}
    void sort() {
      ::sort(arr, size, compare_desc);
    }
};
class AscArray : public Array {
  public:
    AscArray(int a[], int n) : Array(a, n) {}
    void sort() {
      ::sort(arr, size, compare_asc); 
    }
};
int main() {
  int a[] = {5, 3, 7, 1, 9, 4, 2, 6, 8}; 
  int n = sizeof(a) / sizeof(a[0]); 
  DescArray da(a, n);
  da.sort();
  cout << "Sorted array in descending order: ";
  da.print();
  AscArray aa(a, n);
  aa.sort();
  cout << "Sorted array in ascending order: ";
  aa.print();
  return 0;
}

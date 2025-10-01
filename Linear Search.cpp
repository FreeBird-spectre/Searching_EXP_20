//Abir Seth
//ENTC A1
//PRN-24070123003

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {3, 7, 9, 12, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    int index = linearSearch(arr, size, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

Element found at index 3


=== Code Execution Successful ===

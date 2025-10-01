//Abir Seth
//ENTC A1
//PRN-24070123003

#include <iostream>
#include <vector>
using namespace std;

int sequentialSearch(vector<int> arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {4, 8, 15, 23, 42};
    int key = 15;

    int index = sequentialSearch(arr, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

Element found at index 2


=== Code Execution Successful ===

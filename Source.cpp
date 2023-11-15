#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int arr1[size] = { 1, 2, 3, 4, 5 };
    int arr2[size];

    int* ptr1 = arr1 + size - 1; 
    int* ptr2 = arr2;

    for (int i = 0; i < size; ++i) {
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
    }

    // Display the reversed array
    cout << "Reversed Copied Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}

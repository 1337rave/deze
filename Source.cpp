#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    int* ptr = arr + size - 1; 

    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    for (int i = 0; i < size; ++i) {
        cout << *ptr << " ";
        ptr--;
    }
    cout << endl;

    return 0;
}

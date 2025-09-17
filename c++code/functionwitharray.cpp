#include <iostream>
using namespace std;

void display(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    display(nums, 5);
    return 0;
}

#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // pointer to the first element of arr

    std::cout << "Value of first element: " << *ptr << std::endl;
    std::cout << "Value of second element: " << *(ptr + 1) << std::endl;
    std::cout << "Value of third element: " << *(ptr + 2) << std::endl;

    ptr++;  // increment pointer to point to the next element
    std::cout << "Value of second element after incrementing ptr: " << *ptr << std::endl;

    return 0;
}

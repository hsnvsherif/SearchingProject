#include <iostream>
#include "Searching.cpp" 

int main() {
    std::vector<int> vec = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70};
    std::array<int, 10> arr = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70};

    int target;
    std::cout << "Enter the value of target: ";
    std::cin >> target;

    int index = binarySearch(vec, target);
    std::cout << "Binary search (vector): " << (index != -1 ? "Found at index " + std::to_string(index) : "Not found") << std::endl;

    index = binarySearchFirst(vec, target);
    std::cout << "Binary search first (vector): " << (index != -1 ? "Found at index " + std::to_string(index) : "Not found") << std::endl;

    index = linearSearch(vec, target);
    std::cout << "Linear search (vector): " << (index != -1 ? "Found at index " + std::to_string(index) : "Not found") << std::endl;

    index = binarySearch(arr, target);
    std::cout << "Binary search (array): " << (index != -1 ? "Found at index " + std::to_string(index) : "Not found") << std::endl;

    index = binarySearchFirst(arr, target);
    std::cout << "Binary search first (array): " << (index != -1 ? "Found at index " + std::to_string(index) : "Not found") << std::endl;

    index = linearSearch(arr, target);
    std::cout << "Linear search (array): " << (index != -1 ? "Found at index " + std::to_string(index) : "Not found") << std::endl;

    return 0;
}

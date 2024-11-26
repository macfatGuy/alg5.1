#include <iostream>
#include <vector>

void print_pyramid(const std::vector<int>& pyramid) {
    if (pyramid.empty()) return;

    int level = 0;
    int index = 0;
    int nodesAtLevel = 1;

    std::cout << "Пирамида:" << std::endl;
    std::cout << level << " root " << pyramid[index++] << std::endl;
    level++;
    nodesAtLevel *= 2;

    while (index < pyramid.size()) {
        for (int i = 0; i < nodesAtLevel && index < pyramid.size(); ++i) {
            std::cout << level << " " << (i % 2 == 0 ? "left" : "right") << "(" << pyramid[(index - nodesAtLevel / 2) / 2] << ") " << pyramid[index++] << std::endl;
        }
        level++;
        nodesAtLevel *= 2;
    }
}

void printArray(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << (i == arr.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;
}


int main() {
    std::vector<int> arr1 = { 1, 3, 6, 5, 9, 8 };
    std::vector<int> arr2 = { 94, 67, 18, 44, 55, 12, 6, 42 };
    std::vector<int> arr3 = { 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };

    std::cout << "Исходный массив: ";
    printArray(arr1);
    print_pyramid(arr1);
    std::cout << std::endl;

    std::cout << "Исходный массив: ";
    printArray(arr2);
    print_pyramid(arr2);
    std::cout << std::endl;

    std::cout << "Исходный массив: ";
    printArray(arr3);
    print_pyramid(arr3);
    std::cout << std::endl;

    return 0;
}


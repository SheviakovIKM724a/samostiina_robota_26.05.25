#include <iostream>
using namespace std;

template<typename T>
bool contains(const T* arr, size_t size, const T& value) {
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

int main() {
    system("chcp 1251 > nul"); // Підключення української мови

    int arr[] = { 1, 2, 3, 4, 5 };
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int valueToFind = 3;
    if (contains(arr, size, valueToFind)) {
        cout << "Значення " << valueToFind << " знайдено в масиві.\n";
    }
    else {
        cout << "Значення " << valueToFind << " не знайдено в масиві.\n";
    }

    return 0;
}

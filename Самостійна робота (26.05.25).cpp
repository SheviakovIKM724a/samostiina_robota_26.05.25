#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    system("chcp 1251 > nul"); // Підключення української мови

    cout << "Максимум з 5 і 10: " << maxValue(5, 10) << endl;
    cout << "Максимум з 3.14 і 2.71: " << maxValue(3.14, 2.71) << endl;
    cout << "Максимум з 'a' і 'z': " << maxValue('a', 'z') << endl;
    cout << "Максимум з рядків \"apple\" і \"banana\": "
        << maxValue(string("apple"), string("banana")) << endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("chcp 1251 > nul"); // Підключення української мови в консолі Windows

    int n;
    cout << "Введіть кількість чисел: ";
    cin >> n;

    vector<int> numbers;

    cout << "Введіть " << n << " цілих чисел:\n";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        numbers.push_back(value);
    }

    cout << "Ви ввели числа: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

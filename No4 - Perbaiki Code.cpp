#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int main() {
    cout << "Hello, world!" << endl;

    if (true) {
        cout << "Ini blok if" << endl;
    } else {
        cout << "Ini blok else" << endl;
    }

    int x = 5;
    int y = 6;
    cout << "Nilai x: " << x << endl;
    int hasil = tambah(x, y);
    cout << "Hasil penjumlahan: " << hasil << endl;

    switch (x) {
        case 5:
            cout << "Nilai x adalah 5" << endl;
            break;
        default:
            cout << "Nilai x bukan 5" << endl;
    }

    int* ptr;
    int* nullPtr = nullptr;
    int* dynamicPtr = new int;

    *dynamicPtr = 7;
    delete dynamicPtr;
    dynamicPtr = nullptr;

    int arr[5];
    int* arrPtr = arr;
    arrPtr[4] = 10;

    return 0;
}

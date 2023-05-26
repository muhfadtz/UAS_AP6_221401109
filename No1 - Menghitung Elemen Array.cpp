#include <iostream>
using namespace std;

int hitung_array(int jumlah[], int size) {
    int jumlah_array = 0;
    for (int i = 0; i < size; i++) {
        jumlah_array += jumlah[i];
    }
    return jumlah_array;
}

int main() {
    int jumlah[] = {1, 2, 3, 4, 5};
    int size,jumlah_array;
    
    size = sizeof(jumlah) / sizeof(jumlah[0]);
    jumlah_array = hitung_array(jumlah, size);
    cout<<"Jumlah Elemen Array: "<<jumlah_array<<endl;

    return 0;
}

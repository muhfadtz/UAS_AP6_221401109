#include <iostream>
using namespace std;

struct data_tanggal
{
    int tahun;
    int bulan;
    int tanggal;
};

int main()
{
    data_tanggal lahir;
    lahir.tahun=1983;
    lahir.bulan=7;
    lahir.tanggal=23;
    cout << lahir.tahun << lahir.bulan << lahir.tanggal;
}
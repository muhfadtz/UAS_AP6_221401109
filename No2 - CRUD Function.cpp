#include <iostream>
#include <vector>
using namespace std;

struct Data {
    int id;
    string nama;
    string NickName;
};

vector<Data> database; // Vector untuk menyimpan data

// Fungsi untuk membuat data baru
void createData(int id, string nama, string NickName) {
    Data newData;
    newData.id = id;
    newData.nama = nama;
    newData.NickName = NickName;

    database.push_back(newData);
    
}

// Fungsi untuk membaca data berdasarkan ID
void readData(int id) {
    bool found = false;
    for (const Data& data : database) {
        if (data.id == id) {
            cout << "ID: " << data.id << endl;
            cout << "Nama: " << data.nama << endl;
            cout << "NickName: " << data.NickName << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Data dengan ID " << id << " tidak ditemukan." << endl;
    }
}

// Fungsi untuk memperbarui data berdasarkan ID
void updateData(int id, string nama, string NickName) {
    bool found = false;
    for (Data& data : database) {
        if (data.id == id) {
            data.nama = nama;
            data.NickName = NickName;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Data dengan ID " << id << " tidak ditemukan." << endl;
    } else {
        cout << "Data dengan ID " << id << " berhasil diperbarui." << endl;
    }
}

// Fungsi untuk menghapus data berdasarkan ID
void deleteData(int id) {
    for (auto it = database.begin(); it != database.end(); ++it) {
        if (it->id == id) {
            database.erase(it);
            cout << "Data dengan ID " << id << " berhasil dihapus." << endl;
            return;
        }
    }
    cout << "Data dengan ID " << id << " tidak ditemukan." << endl;
}


// int main (Main Program)
int main() {
    int choice;
    int id;
    string nama;
    string NickName;
    
    cout << "Masukkan Data Anda Terlebih Dahulu! " << endl;
    cout << "Masukkan ID: "; cin >> id;
    cout << "Masukkan Nama: "; cin >> nama;
    cout << "Masukkan NickName: "; cin >> NickName;
    createData(id, nama, NickName);
    cout << "Data berhasil ditambahkan." << endl;
    cout << "=======================================" << endl;

    while (true) {
        cout << "Menu: " << endl;
        cout << "1. Baca Data" << endl;
        cout << "2. Perbarui Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan Anda: "; cin >> choice;

        switch (choice) {
            case 0:
                cout << "Terima kasih. Sampai jumpa!";
                return 0;
            case 1:
                cout << "Masukkan ID yang ingin dibaca: ";
                cin >> id;
                readData(id);
                break;
            case 2:
                cout << "Masukkan ID yang ingin diperbarui: ";
                cin >> id;
                cout << "Masukkan Nama Baru: ";
                cin >> nama;
                cout << "Masukkan NickName Baru: ";
                cin >> NickName;
                updateData(id, nama, NickName);
                break;
            case 3:
                cout << "Masukkan ID yang ingin dihapus: ";
                cin >> id;
                deleteData(id);
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}
//end main program

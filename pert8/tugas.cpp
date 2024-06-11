#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Produk {
public:
    string nama;
    double harga;
    
    Produk(string n, double h) : nama(n), harga(h) {}
};

class Keranjang {
private:
    vector<Produk> produkDalamKeranjang;
public:
    void tambahProduk(const Produk& produk) {
        produkDalamKeranjang.push_back(produk);
    }
    
    void tampilkanKeranjang() const {
        cout << "Produk dalam keranjang belanja:" << endl;
        for (size_t i = 0; i < produkDalamKeranjang.size(); ++i) {
            cout << i+1 << ". " << produkDalamKeranjang[i].nama << " - Rp" << produkDalamKeranjang[i].harga << endl;
        }
    }
    
    double hitungTotal() const {
        double total = 0;
        for (const auto& produk : produkDalamKeranjang) {
            total += produk.harga;
        }
        return total;
    }
};

void tampilkanMenu() {
    cout << "Selamat datang di Toko Makeup Online" << endl;
    cout << "1. Lihat produk" << endl;
    cout << "2. Tambah produk ke keranjang" << endl;
    cout << "3. Lihat keranjang" << endl;
    cout << "4. Lihat total belanja" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih opsi: ";
}

void tampilkanProduk(const vector<Produk>& produk) {
    cout << "Daftar Produk:" << endl;
    for (size_t i = 0; i < produk.size(); ++i) {
        cout << i+1 << ". " << produk[i].nama << " - Rp" << produk[i].harga << endl;
    }
}

int main() {
    vector<Produk> daftarProduk = {
        Produk("Lipstick", 75000),
        Produk("Foundation", 150000),
        Produk("Eyeshadow", 100000),
        Produk("Blush", 50000),
        Produk("Mascara", 80000)
    };
    
    Keranjang keranjang;
    int pilihan;
    
    do {
        tampilkanMenu();
        cin >> pilihan;
        
        switch(pilihan) {
            case 1:
                tampilkanProduk(daftarProduk);
                break;
            case 2:
                int indeksProduk;
                tampilkanProduk(daftarProduk);
                cout << "Pilih produk untuk ditambahkan ke keranjang (masukkan nomor): ";
                cin >> indeksProduk;
                if (indeksProduk > 0 && indeksProduk <= daftarProduk.size()) {
                    keranjang.tambahProduk(daftarProduk[indeksProduk - 1]);
                    cout << "Produk telah ditambahkan ke keranjang." << endl;
                } else {
                    cout << "Pilihan tidak valid." << endl;
                }
                break;
            case 3:
                keranjang.tampilkanKeranjang();
                break;
            case 4:
                cout << "Total belanja: Rp" << keranjang.hitungTotal() << endl;
                break;
            case 5:
                cout << "Terima kasih telah berbelanja!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);
    
    return 0;
}
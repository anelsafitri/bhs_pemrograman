# Definisi
Array (dalam pyhton) adalah struktur yang dapat menyimpan dan mengatur kumpulan data. Struktur data berbicara tentang cara menyimpan, mengatur, mengelompokan, dan merepresentasikan data. Struktur data sangatlah penting dan harus dikuasai oleh seorang programmer, Di forum pemrograman.

Pada materi kali ini kita akan membahas tentang struktur data lanjutan yaitu himpunan dan kamus.

# Tetapkan 
Himpunan dalam bahasa pemrograman python adalah tipe data kolektif yang digunakan untuk menyimpan banyak nilai dalam satu variabel dengan berikut ini
- ilai anggota yang disimpan harus unik (bukan duplikat)
- Nilai member yang sudah dimasukkan tidak dapat diubah per yang sudah dimasukkan
lagi
-  set is unordered alias tidak berurutan yang artinya tidak bisa diakses berdasarkan indeks.
Untuk lebih memahami 3 poin di atas, langsung saja kita lakukan praktiknya.

Bentuk umum Himpunan:
```
gunakan kurung kurawal
student_set = { 'Huda', 'Lendis', 'Wahid', 'Basith'} print(student_set)
ubah daftar menjadi kumpulan
buah_set = set(['mangga', 'Apel']) cetak(set_buah)
set dengan tipe data berbeda
set_mix = { 'manusia', 'hewan', 5, Benar, ('A', 'B')}
cetak(set_campuran)
```
output 
```
{'Wahid', 'Lendis', 'Basith', 'Huda'}
'apel', 'mangga')
(Benar, 5, ('A', 'B'), 'hewan', 'manusia'}
```
# Tidak Terurut (Set)
Tipe kumpulan data tidak berurutan. Artinya, kita tidak bisa menggunakan index
untuk mengakses nilai-nilai
kesalahan:
```
set_saya = {'a'} cetak(set_saya[0])
```
Pesan eror:
di set. Kalaupun kita memaksa, kita hanya akan mendapat
Traceback (panggilan terakhir terakhir):
```
File "<stdin>", baris 1, di <module> TypeError: objek 'set' dapat
```
disubskripkan
Kita juga bisa melihat hal
Kita juga bisa melihat kode program yang telah kita buat tadi:
```
student_set = { 'Huda', 'Lendis', 'Wahid', 'Basith'} print(student_set)
```
output
```
{'Wahid', 'Lendis', 'Basith', 'Huda'}
```
Dimana diatas kita definisikan 4 anggota himpunan secara berurutan: Huda, Lendis, Wahid, dan Basith. Namun setelah kami cetak, kami mendapat pesanan yang berbeda.

# Tidak dapat diubah (Set)
Himpunan tidak dapat diubah, artinya nilai yang telah kita masukkan ke dalam himpunan tidak dapat diubah lagi.
Namun, kami masih dapat menambah dan menghapus anggota ke kumpulan tersebut. Dan, karena kumpulan tidak dapat diubah, kumpulan hanya dapat menerima anggota tipe data yang juga tidak dapat diubah.
Perhatikan contoh berikut:
```
anggota kumpulan harus bertipe data yang tidak dapat diubah
set_fruit = { 'mangga', 'lemon', 'alpukat', Benar, 1, 2, 3 }
kita dapat menjadikan Tuple sebagai anggota
karena keyboard ini tidak dapat diubah_= {
(1, 2, 3), (4, 5, 6),
(7, 8, 9),
```
Namun kami tidak dapat menyertakan list sebagai anggota karena list dapat berubah. Perhatikan contoh berikut:
```
x = himpunan{ 35, 100, ['a', 'b'] }
```
Pesan eror:
```
Traceback (panggilan terakhir terakhir): File "<stdin>", baris 1, di <module> TypeError: unhashable type: 'list'
```
# Tidak ada Nilai duplikat
(Mengatur)
Juga diatur dalam python tidak dapat menerima nilai duplikat. Jika kita memasukkan suatu nilai yang sudah ada pada suatu himpunan, maka nilai tersebut hanya akan muncul atau dimasukkan satu kali saja. Perhatikan contoh berikut:
```
kata_unik = {
'pagi', 'ini', 'adalah', 'pagi', 'yang mana',
'sangat terang'}
cetak(kata_unik)
Maka kata “pagi” hanya akan dimasukkan satu kali:
{'itu', 'sangat', 'ini', 'pagi', 'cerah', 'adalah')
```
# Tambahkan/Perbarui Elemen Set
Seperti yang telah kami sebutkan di atas bahwa meskipun nilai yang ditetapkan tidak dapat diubah, namun tetap dapat ditambah dan dihapus. Kita dapat menambahkan anggota baru ke set dengan fungsi add() dan update(). Perhatikan contoh berikut:
```
alfabet_set = {'a', 'b', 'c'} print(kumpulan alfabet)
tambahkan satu per satu set_abjad.add('d') set_abjad.add('e')
 menambahkan lebih dari satu anggota sekaligus set_abjad.update({ 'f', 'g' }) # juga dapat menggunakan daftar set_abjad.update(['h', 'i'])
cetak (kumpulan abjad)
```
Keluaran :
``` 
('a', 'c', 'b'} ('d', '', 'e',
'b', 'g', 'h', 'f', 'c'}
```

# Hapus/hapus Elemen Set
Untuk menghapus anggota dari suatu himpunan, ada 4 fungsi yang dapat kita gunakan: ⚫ hapus(nilai) Untuk - menghapus nilai yang dicari. Jika nilai yang dicari tidak ada maka akan terjadi error.
-  membuang(nilai) Untuk menghapus nilai yang dicari. Jika nilai yang dicari tidak ada maka tidak akan terjadi error.
- pop() Mengambil dan menghapus nilai di sebelah kiri. .clear() Menghapus semua anggota.
```
set = {'virtual', 'berbudi luhur', 100, ('a', 'b'), false, True} print (set)
```
 akan error jika nilai 100 tidak ada di set
set.hapus(100)
mencetak (mengatur)
 tidak akan error jika ('a', 'b') tidak ada dalam set set.discard (('a', 'b')) print(set)
 hapus nilai di sebelah kiri Hapusnilai = set.pop()
print('Nilai yang dihapus =', nilaiDihapus) print(set)
 hapus semua nilai set.clear() print(set)
 ```
 Keluaran: 
 ```
(Salah, Benar, 100, 'maya', 'budi', ('a', 'b')}
(Salah, Benar, 'maya', 'budi', ('a', 'b'))
(Salah, Benar, 'maya', 'budi'}
nilaiYangDihapus = Salah (Benar, 'maya', 'budi'}
mengatur()
ngul
menambahkan()
```
# Fungsi (Set)
Berikut ringkasan fungsi bawaan tipe data set yang bisa kita gunakan:
Fungsi
jernih()
Kegunaan
Menambahkan satu anggota ke set
Menghapus seluruh set
menyalin()
perbedaan()
perbedaan_pembaruan()
Buat salinan satu set menjadi set baru
Melakukan operasi perbedaan antara dua set
Hapus anggota kumpulan lain yang ada di kumpulan saat ini
membuang()
Menghapus satu anggota dari kumpulan
persimpangan()
persimpangan_perbarui()
Melakukan operasi irisan antara dua set
Memperbarui anggota yang merupakan potongan dari dua set
isdisjoint()
Mengembalikan nilai Benar jika dua set tidak memiliki irisan
issusbset()
Mengembalikan nilai Benar jika himpunan lain memiliki anggota dari himpunan saat ini
issuperset()
Mengembalikan nilai Benar jika himpunan saat ini memiliki anggota dari himpunan lain
pop()
Menghapus dan mengembalikan nilai yang dihapus dari kumpulan
menghapus()
Menghapus nilai dari suatu set
perbedaan simetris()
perbedaan simetris_update()
Persatuan()
Lakukan operasi komplemen antara dua set
Memperbarui kumpulan hasil pelengkap
Melakukan operasi gabungan dua set atau lebih
memperbarui()
Memperbarui set dengan menambahkan nilai tertentu
# Kamus
Kamus merupakan tipe data pada python yang berfungsi untuk menyimpan kumpulan data/nilai dengan pendekatan “key-value”. Kamus itu sendiri memiliki dua komponen inti: Yang pertama adalah kuncinya, yaitu nama atribut suatu item dalam kamus. Yang kedua adalah nilai, yaitu nilai yang disimpan dalam suatu atribut.
- Item kamus mempunyai 3 sifat yaitu :
- Tidak berurutan - tidak berurutan
- Dapat diubah - dapat diubah
Unik - alias tidak dapat menerima dua kunci yang sama
Unordered artinya tidak berurutan, jadi key/atribut yang kita definisikan terlebih dahulu, bukan berarti justru akan menjadi yang “pertama” dibandingkan dengan key yang lain. Selain itu, tidak berurutan berarti tidak dapat diakses menggunakan indeks (bilangan bulat) seperti halnya daftar.
Changeableartinya kita dapat mengubah nilai yang telah kita masukkan ke dalam kamus. Ini berbeda dengan tipe data set dan tuple, yang keduanya bersifat immutable atau tidak dapat diubah.
Dan yang terakhir Unique, kamus tidak boleh memiliki lebih dari satu kunci yang sama karena bersifat unik. Jadi jika dua kunci sama, kunci yang terakhir ditentukan akan menimpa nilai kunci yang ditentukan sebelumnya.
# Buat Elemen Kamus
Selanjutnya cara membuat kamus dengan python. Untuk membuatnya ada 2 cara :
• Yang pertama dengan kurung kurawal {}.
• Dan yang kedua bisa menggunakan fungsi atau konstruktor dict().
Perhatikan contoh berikut:
```
Langkah pertama
buku = {
}
"judul": "Daun Musim Gugur Tak Pernah Membenci Angin", "Penulis": "Tere Liye"
 cara kedua
buku = dikte(
title="Daun Musim Gugur Tak Pernah Benci Angin", author="Tere Liye"
>
```
# Tambahkan/Perbarui Elemen Dict
Untuk menambahkan kunci dan item baru, caranya seperti mengedit item. Jadi: Jika key yang kita tentukan sudah ada, maka sistem akan mengganti item lama dengan yang baru alias mengeditnya. Namun jika kunci yang kita definisikan tidak ada, sistem akan menambahkannya sebagai item baru.
Contoh:
```
murid = {
}
'nama': 'Lendis Fabri',
'asal': 'Indonesia',
keluaran Tidak ada
print('Hobi:', pelajar.dapatkan('hobi'))
 tambahkan data
pelajar['hobi'] = 'Memancing'
#cetak ulang
print('Hobi {} adalah {}'.format(
siswa.dapatkan('nama'),
pelajar.mendapatkan('hobi')
>>
```
Keluaran:
```
Hobi: Tidak ada
Hobi dari Lendis Fabri adalah Memancing
```
# Hapus Elemen Dict
Ada dua cara untuk menghapus item: 
-  Menggunakan pernyataan del <dict[key]>. 
- Atau gunakan fungsi kamus.pop()
Perhatikan contoh berikut:
```
murid = {
'nama': 'Wahid Abdullah', 'umur': 18,
}
'asal': 'Indonesia'
del siswa['nama']
pelajar.pop('umur') pelajar.pop('asal')
```
Apa perbedaan menggunakan cara pertama dan kedua
metode?
Bedanya, jika kita menggunakan fungsi pop(), kita bisa mendapatkan nilai kembalian dari data yang dihapus.
Contoh:
```
pesan_pendek = {
}
"content": "PESAN INI HANYA BISA DIBACA SEKALI!!"
pesan_konten= pesan_pendek.pop('konten')
akses langsung dari kamus
keluaran: Tidak ada
print('isi pesan:', pesan_pendek.mendapatkan('isi'))
akses ke pengembalian yang disimpan
print('isi pesan:',isi_pesan)
```
Keluaran:
```
isi pesan: Tidak ada
ist pesan: ISI PESAN INI HANYA BISA DIBACA SEKALI SAJA!!
```
# Operator Keanggotaan (Dict)
Kita dapat menggunakan operator keanggotaan untuk tipe data kamus dengan python.
Perhatikan contoh berikut:
```
murid = {
'nama': 'Renza yang Terinspirasi'
}
Fungsi
semua()
setiap()
print('Apakah variabel siswa mempunyai kunci nama?') print('nama' pada siswa)
print('\nApakah variabel siswa TIDAK mempunyai kunci umur?') print(catatan 'usia' pada siswa)
```
Keluaran:
```
Apakah variabel siswa memiliki nama kunci?
BENAR
Apakah variabel siswa TIDAK memiliki kunci usia? BENAR
```
# Fungsi (Kamus)
Berikut rangkuman fungsi bawaan Dict yang bisa kita gunakan: Versitas
Keterangan
Mengembalikan True jika semua kunci kamus adalah True (atau jika kamus kosong).
Kembalikan Truejika salah satu kunci kamus benar. Jika kamus kosong, returnfalse.
Mengembalikan panjang (jumlah item) dalam kamus.
Len()
cmp()
Membandingkan item dari dua kamus. (Tidak tersedia di Python 3)
diurutkan()
Mengembalikan daftar kunci baru yang diurutkan dalam kamus.
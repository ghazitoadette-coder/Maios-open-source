# 📖 MAIOS v1.0 - Panduan Pengembangan & Penggunaan
Selamat datang di panduan resmi proyek **MAIOS v1.0**! Dokumen ini dirancang khusus untuk membantu siapa saja yang mengunduh repositori ini agar bisa memahami, menjalankan, dan menambahkan komponen baru ke dalam sistem.

---

## 🛠️ 1. Cara Menjalankan File C++ Standalone

Setiap file di dalam folder `cpp/` dibuat secara mandiri tanpa membutuhkan file header (`.h`). Kamu bisa mengompilasi dan menjalankannya satu per satu menggunakan compiler C++ standard (seperti `g++`).

### Jalankan Display Engine:
```bash
g++ cpp/display.cpp -o display_engine
./display_engine
```

### Jalankan MAI Parser Engine:
```bash
g++ cpp/mai_parser.cpp -o mai_parser
./mai_parser
```

---

## 🧩 2. Mengenal Format File Kustom (`.mai` & `.utage`)

Proyek ini menggunakan format ekstensi kustom buatan sendiri untuk menyimpan konfigurasi dan data skrip:

* **`.utage`** (`config.utage`): Didesain untuk pengaturan inti sistem dan profil parameter MAIOS.
* **`.mai`** (`example.mai`): Didesain untuk skrip data interaktif yang diproses oleh `cpp/mai_parser.cpp`.

---

## 🚀 3. Tutorial Menambahkan File & Fitur Baru

Jika kamu ingin berkontribusi atau mengembangkan MAIOS v1.0 lebih jauh, ikuti aturan struktur berikut:

### Aturan 1: Komponen C++ Mandiri
* Selalu simpan file kode di dalam folder `cpp/`.
* Jangan membuat file header `.h`. Tulis fungsi dan `main()` langsung di dalam satu file `.cpp` agar tetap mandiri (*standalone*).

### Aturan 2: Membuat Format Ekstensi Baru
* Kamu bebas membuat file dengan ekstensi kustom apa saja di *root directory*.
* Pastikan struktur teks di dalamnya konsisten agar memudahkan pembuatan *parser* C++ pendukung di masa mendatang.

---

## 🤝 Kontribusi
Punya ide ekstensi baru atau engine C++ tambahan? Silakan lakukan *fork*, buat perubahanmu, dan ajukan *Pull Request*!
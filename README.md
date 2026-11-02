# 🚀 MAIOS v1.0 — Mobile Advanced Interactive OS Ecosystem

[![Target SDK](https://img.shields.io/badge/Target%20SDK-30%20%28Android%2011%29-00f0ff?style=for-the-badge&logo=android)](https://developer.android.com/)
[![Security Engine](https://img.shields.io/badge/Security-Dr.Web%20Active-00ff66?style=for-the-badge&logo=shield)](https://www.drweb.com/)
[![Game Word Status](https://img.shields.io/badge/Game%20Word-BANNED%20GLOBAL-ff0055?style=for-the-badge&logo=adguard)](https://github.com/)
[![Architecture](https://img.shields.io/badge/Architecture-arm64--v8a-7000ff?style=for-the-badge&logo=cpu)](https://github.com/)

Selamat datang di repositori resmi **MAIOS (Mobile Advanced Interactive OS)**. Repositori ini berisi seluruh dokumentasi, file inisialisasi Linux (`init.maios.rc`), konfigurasi properti sistem (`build.prop`), deskriptor partisi (`EXT4`), cerita lore cyber, serta aplikasi **File Inspector Dashboard**.

---

## ⚠️ PERINGATAN PENTING (IMPORTANT WARNINGS)

> [!CAUTION]
> **ANCAMAN MALWARE & FORMAT DIBATALKAN**
> 1. **Status Game Word:** Aplikasi/payload bernama **Game Word** (`com.gameword.ghazi`) telah **DIBOKIR TOTAL (BANNED GLOBAL)**. Jangan sekali-kali mencoba mengeksekusi binary ini di dalam folder `/system/framework/`.
> 2. **Format `.cof` Tidak Berlaku:** Format lama **COF MAIOS (`.cof`)** telah **DICANCEL/DEPRECATED**. Format ini mengandung kerentanan pada modul antena Wi-Fi dan telah digantikan oleh standar `build.prop`, `.conf`, dan `.json`.
> 3. **Modul Antena Wi-Fi:** Selalu pastikan aturan `drweb_rules.conf` aktif untuk mencegah *broadcast payload* berbahaya menyebar melalui jaringan lokal.

---

## 📚 PANDUAN & TUTORIAL (QUICK START TUTORIAL)

### 🛠️ 1. Membuka Dashboard Web Inspector
1. Buka file `index.html` yang ada di direktori utama menggunakan browser HP atau Laptop kamu.
2. Gunakan fitur **Directory Explorer** untuk melihat struktur folder internal MAIOS.
3. Gunakan area **Drag & Drop** untuk menguji dan memindai file baru (`catatan.md`, `build.prop`, `EXT4`, dll.) secara gratis langsung di browser.

### 🛡️ 2. Menjalankan Simulasi Inisialisasi Boot (Linux Init)
Untuk menjalankan urutan *booting* MAIOS, pastikan script `init.maios.rc` dibaca oleh init system dengan urutan berikut:
```bash
# Mounting filesystem & load network rules
mount ext4 /dev/block/by-name/userdata /data
exec /system/bin/drweb_checker --scan-framework
```

---

## 📂 STRUKTUR FOLDER PROYEK MAIOS

```text
/sdcard/MAIOS Project/MAIOS/
├── README.md                      # Readme utama GitHub (Tutorial & Warning)
├── index.html                     # Web App Dashboard & System Inspector
├── catatan.md                     # Catatan dasar proyek
├── cerita1.md                     # Cerita Bab 1: Sinyal Majdata
├── cerita2.md                     # Cerita Bab 2: Bencana Game Word
├── cerita3.md                     # Cerita Bab 3: Pemulihan System Framework
├── android.jar/
│   └── android.jar.md             # Dokumentasi API Framework (SDK 30)
├── config/
│   ├── SYS/
│   │   └── build.prop             # Properties OS MAIOS v1.3
│   ├── drweb_rules.conf           # Aturan Scan Dr.Web & Blacklist
│   ├── network_antenna.xml        # Proteksi modul antena Wi-Fi
│   ├── system_paths.json          # Directives direktori sistem
│   └── cancelled_formats.md       # Dokumentasi pembatalan format .cof
├── data/
│   ├── EXT4                       # Configuration superblock EXT4
│   └── ext4_data.md               # Tabel kompatibilitas partisi HP
└── init/
    ├── init_system.md             # Penjelasan urutan boot Linux
    └── init.maios.rc              # Script inisialisasi boot Linux/Android
```

---

## 💻 SPESIFIKASI TEKNIS PERANGKAT

| Parameter | Spesifikasi Sistem |
| :--- | :--- |
| **Versi OS** | MAIOS v1.0 (`MAIOS-R11-2026`) |
| **Target SDK** | SDK 30 (Android 11) |
| **Target Hardware** | Xiaomi Redmi Note 14 Pro 5G (`arm64-v8a`) |
| **Chipset** | MediaTek Dimensity 7300 Ultra |
| **Sistem File** | EXT4 (`fscrypt_v2` encryption) |
| **Engine Keamanan** | Dr.Web Antivirus & Anti-Malware Engine |

---

*Project diciptakan dan dikembangkan oleh Ghazi untuk ekosistem MAIOS Cyber Series.*

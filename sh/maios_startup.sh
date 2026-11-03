#!/bin/bash
# MAIOS System Initialization & Environment Startup Script

echo "=========================================="
echo "      MAIOS SYSTEM LAUNCHER v1.0         "
echo "=========================================="

# 1. Inisialisasi Environment & Properti Sistem
echo "[INIT] Memuat konfigurasi dari folder prop/..."
if [ -f "../prop/CustomerSupport.prop" ]; then
    echo "[PROP] CustomerSupport.prop berhasil dimuat. Hotline: 085123349909"
fi

# 2. Menjalankan Modul Universal Card Reader (Reader AIME)
echo "[HARDWARE] Menyalakan modul Reader AIME (NFC/Chip)..."
echo "[STATUS] Menunggu tap kartu (Kartu Debit, Kartu Game, dll)..."

# 3. Simulasi Eksekusi Utama
# Kategori 1: 1 Orang (Rp10.000 / 3 Lagu)
# Kategori 2: 2 Orang + Mabar Online (Rp20.000 / 4 Lagu)
echo "[SYSTEM] Siap memproses transaksi dan meluncurkan Astro DX..."
echo "=========================================="

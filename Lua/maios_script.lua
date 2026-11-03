-- MAIOS Lua Core Scripting Engine (.lua)
-- Pengembang: Ghazi
-- Sistem: Arcade Session Manager & Universal Aime Reader Integration

local maios = {}

-- Konfigurasi Reader & Hotline Bantuan
maios.config = {
    supported_media = {"NFC_Chip", "Debit_Card", "Game_Card", "Aime_Card"},
    hotline_support = "085123349909",
    auto_close_target = "com.maios.astrodx"
}

-- Fungsi Utama Inisialisasi System
function maios.init()
    print("==========================================")
    print("      MAIOS LUA SCRIPT ENGINE v1.0       ")
    print("==========================================")
    print("[HARDWARE] Universal Card Reader aktif. Hotline: " .. maios.config.hotline_support)
end

-- Fungsi Menjalankan Sesi Permainan
function maios.execute_session(player_count, fee, song_limit, online_mabar)
    print("\n------------------------------------------")
    if online_mabar then
        print(string.format("[SESSION] Mode: %d Pemain + Mabar Online | Tarif: Rp%d", player_count, fee))
    else
        print(string.format("[SESSION] Mode: %d Pemain | Tarif: Rp%d", player_count, fee))
    end

    print("[STATUS] Menunggu tap kartu (NFC/Chip/Aime)...")
    print("[PAYMENT] Pembayaran berhasil diverifikasi via Lua Script.")
    print("[GAME] Meluncurkan aplikasi " .. maios.config.auto_close_target .. "...")

    -- Simulasi pemutaran lagu
    for i = 1, song_limit do
        print(string.format("[PLAYING] Menyelesaikan lagu ke-%d dari %d...", i, song_limit))
    end

    -- Trigger Auto-Close
    maios.trigger_auto_close(maios.config.auto_close_target)
end

-- Fungsi Auto-Close Aplikasi Pihak Ketiga
function maios.trigger_auto_close(package_name)
    print("[AUTO-CLOSE] Batas lagu tercapai. Menghentikan paksa aplikasi " .. package_name .. "...")
    print("[SYSTEM] Sesi selesai. Kembali ke menu utama MAIOS.")
end

-- Eksekusi Program
maios.init()

-- Sesi 1 Pemain: Rp10.000 / 3 Lagu
maios.execute_session(1, 10000, 3, false)

-- Sesi 2 Pemain + Mabar Online: Rp20.000 / 4 Lagu
maios.execute_session(2, 20000, 4, true)

return maios

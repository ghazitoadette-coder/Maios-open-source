# MAIOS Python Automation & Core Utility Engine Implementation (.py)
# Pengembang: Ghazi
# Sistem: Arcade Session Manager & Universal Aime Reader Integration

import time

class ReaderConfig:
    def __init__(self, supported_media, hotline_support, auto_close_target):
        self.supported_media = supported_media
        self.hotline_support = hotline_support
        self.auto_close_target = auto_close_target

class ArcadeSession:
    def __init__(self, player_count, pricing_fee, song_limit, online_mabar):
        self.player_count = player_count
        self.pricing_fee = pricing_fee
        self.song_limit = song_limit
        self.online_mabar = online_mabar

def main():
    print("==========================================")
    print("      MAIOS PYTHON UTILITY ENGINE v1.0    ")
    print("==========================================")

    # Inisialisasi Konfigurasi Reader & Hotline
    config = ReaderConfig(
        supported_media=["NFC_Chip", "Debit_Card", "Game_Card", "Aime_Card"],
        hotline_support="085123349909",
        auto_close_target="com.maios.astrodx"
    )

    print(f"[HARDWARE] Universal Card Reader aktif. Hotline: {config.hotline_support}")

    # Simulasi Sesi 1 Pemain
    single_session = ArcadeSession(
        player_count=1,
        pricing_fee=10000,
        song_limit=3,
        online_mabar=False
    )
    execute_session(single_session, config.auto_close_target)

    # Simulasi Sesi 2 Pemain + Mabar Online
    multi_session = ArcadeSession(
        player_count=2,
        pricing_fee=20000,
        song_limit=4,
        online_mabar=True
    )
    execute_session(multi_session, config.auto_close_target)

def execute_session(session, target_app):
    print("\n------------------------------------------")
    if session.online_mabar:
        print(f"[SESSION] Mode: {session.player_count} Pemain + Mabar Online | Tarif: Rp{session.pricing_fee:,}")
    else:
        print(f"[SESSION] Mode: {session.player_count} Pemain | Tarif: Rp{session.pricing_fee:,}")

    print("[STATUS] Menunggu tap kartu (NFC/Chip/Aime)...")
    print("[PAYMENT] Pembayaran berhasil diverifikasi via Python Engine.")
    print(f"[GAME] Meluncurkan aplikasi {target_app}...")

    # Simulasi pemutaran lagu
    for i in range(1, session.song_limit + 1):
        time.sleep(0.2)
        print(f"[PLAYING] Menyelesaikan lagu ke-{i} dari {session.song_limit}...")

    # Fitur Auto-Close Aplikasi Pihak Ketiga
    trigger_auto_close(target_app)

def trigger_auto_close(package_name):
    print(f"[AUTO-CLOSE] Batas lagu tercapai. Menghentikan paksa aplikasi {package_name}...")
    print("[SYSTEM] Sesi selesai. Kembali ke menu utama MAIOS.")

if __name__ == "__main__":
    main()
  

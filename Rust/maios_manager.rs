// MAIOS Rust Core Engine & Memory-Safe Arcade Manager Implementation (.rs)
// Pengembang: Ghazi
// Sistem: Arcade Session Manager & Universal Aime Reader Integration

use std::thread;
use std::time::Duration;

// Struktur Konfigurasi Reader & Hotline Dukungan
struct ReaderConfig {
    supported_media: Vec<&'static str>,
    hotline_support: &'static str,
    auto_close_target: &'static str,
}

// Struktur Sesi Permainan Arcade
struct ArcadeSession {
    player_count: u32,
    pricing_fee: u32,
    song_limit: u32,
    online_mabar: bool,
}

fn main() {
    println!("==========================================");
    println!("      MAIOS RUST MEMORY-SAFE ENGINE       ");
    println!("==========================================");

    // Inisialisasi Konfigurasi Reader & Hotline
    let config = ReaderConfig {
        supported_media: vec!["NFC_Chip", "Debit_Card", "Game_Card", "Aime_Card"],
        hotline_support: "085123349909",
        auto_close_target: "com.maios.astrodx",
    };

    println!("[HARDWARE] Universal Card Reader aktif. Hotline: {}", config.hotline_support);

    // Simulasi Sesi 1 Pemain
    let single_session = ArcadeSession {
        player_count: 1,
        pricing_fee: 10000,
        song_limit: 3,
        online_mabar: false,
    };
    execute_session(&single_session, config.auto_close_target);

    // Simulasi Sesi 2 Pemain + Mabar Online
    let multi_session = ArcadeSession {
        player_count: 2,
        pricing_fee: 20000,
        song_limit: 4,
        online_mabar: true,
    };
    execute_session(&multi_session, config.auto_close_target);
}

fn execute_session(session: &ArcadeSession, target_app: &str) {
    println!("\n------------------------------------------");
    if session.online_mabar {
        println!("[SESSION] Mode: 2 Pemain + Mabar Online | Tarif: Rp{}", session.pricing_fee);
    } else {
        println!("[SESSION] Mode: 1 Pemain | Tarif: Rp{}", session.pricing_fee);
    }

    println!("[STATUS] Menunggu tap kartu (NFC/Chip/Aime)...");
    println!("[PAYMENT] Pembayaran berhasil diverifikasi secara aman.");
    println!("[GAME] Meluncurkan aplikasi {}...", target_app);

    // Simulasi pemutaran lagu
    for i in 1..=session.song_limit {
        thread::sleep(Duration::from_millis(200));
        println!("[PLAYING] Menyelesaikan lagu ke-{} dari {}...", i, session.song_limit);
    }

    // Fitur Auto-Close Aplikasi Pihak Ketiga
    trigger_auto_close(target_app);
}

fn trigger_auto_close(package_name: &str) {
    println!("[AUTO-CLOSE] Batas lagu tercapai. Menghentikan paksa aplikasi {}...", package_name);
    println!("[SYSTEM] Sesi selesai. Kembali ke menu utama MAIOS.");
}

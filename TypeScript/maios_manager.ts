// MAIOS TypeScript & JavaScript Core System & Web Companion Engine Implementation (.ts / .js)
// Pengembang: Ghazi
// Sistem: Arcade Session Manager & Universal Aime Reader Integration

// Interface Konfigurasi Reader & Hotline Dukungan
interface ReaderConfig {
    supportedMedia: string[];
    hotlineSupport: string;
    autoCloseTarget: string;
}

// Interface Sesi Permainan Arcade
interface ArcadeSession {
    playerCount: number;
    pricingFee: number;
    songLimit: number;
    onlineMabar: boolean;
}

class MaiosWebEngine {
    private static config: ReaderConfig = {
        supportedMedia: ["NFC_Chip", "Debit_Card", "Game_Card", "Aime_Card"],
        hotlineSupport: "085123349909",
        autoCloseTarget: "com.maios.astrodx"
    };

    public static runSystem(): void {
        console.log("==========================================");
        console.log("    MAIOS TYPESCRIPT / JS WEB ENGINE v1.0 ");
        console.log("==========================================");
        console.log(`[HARDWARE] Universal Card Reader aktif. Hotline: ${this.config.hotlineSupport}`);

        // Simulasi Sesi 1 Pemain
        const singleSession: ArcadeSession = {
            playerCount: 1,
            pricingFee: 10000,
            songLimit: 3,
            onlineMabar: false
        };
        this.executeSession(singleSession);

        // Simulasi Sesi 2 Pemain + Mabar Online
        const multiSession: ArcadeSession = {
            playerCount: 2,
            pricingFee: 20000,
            songLimit: 4,
            onlineMabar: true
        };
        this.executeSession(multiSession);
    }

    private static executeSession(session: ArcadeSession): void {
        console.log("\n------------------------------------------");
        if (session.onlineMabar) {
            console.log(`[SESSION] Mode: ${session.playerCount} Pemain + Mabar Online | Tarif: Rp${session.pricingFee.toLocaleString()}`);
        } else {
            console.log(`[SESSION] Mode: ${session.playerCount} Pemain | Tarif: Rp${session.pricingFee.toLocaleString()}`);
        }

        console.log("[STATUS] Menunggu tap kartu (NFC/Chip/Aime)...");
        console.log("[PAYMENT] Pembayaran berhasil diverifikasi via TypeScript/JS Web Engine.");
        console.log(`[GAME] Meluncurkan aplikasi ${this.config.autoCloseTarget}...`);

        // Simulasi pemutaran lagu
        for (let i = 1; i <= session.songLimit; i++) {
            console.log(`[PLAYING] Menyelesaikan lagu ke-${i} dari ${session.songLimit}...`);
        }

        // Fitur Auto-Close Aplikasi Pihak Ketiga
        this.triggerAutoClose(this.config.autoCloseTarget);
    }

    private static triggerAutoClose(packageName: string): void {
        console.log(`[AUTO-CLOSE] Batas lagu tercapai. Menghentikan paksa aplikasi ${packageName}...`);
        console.log("[SYSTEM] Sesi selesai. Kembali ke menu utama MAIOS.");
    }
}

// Eksekusi Program TypeScript / JavaScript
MaiosWebEngine.runSystem();

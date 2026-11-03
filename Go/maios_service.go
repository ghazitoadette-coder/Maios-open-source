// MAIOS Go Core Backend & Session Service Implementation (.go)
// Pengembang: Ghazi
// Sistem: Arcade Session Manager & Universal Aime Reader Integration

package main

import (
	"fmt"
	"time"
)

// Struktur Data Konfigurasi Reader & Hotline Dukungan
type ReaderConfig struct {
	SupportedMedia []string
	HotlineSupport string
	AutoCloseTarget string
}

// Struktur Data Sesi Permainan Arcade
type ArcadeSession struct {
	PlayerCount int
	PricingFee  int
	SongLimit   int
	OnlineMabar bool
}

func main() {
	fmt.Println("==========================================")
	fmt.Println("      MAIOS GO BACKEND ENGINE v1.0       ")
	fmt.Println("==========================================")

	// Inisialisasi Konfigurasi Reader & Hotline
	config := ReaderConfig{
		SupportedMedia: []string{"NFC_Chip", "Debit_Card", "Game_Card", "Aime_Card"},
		HotlineSupport: "085123349909",
		AutoCloseTarget: "com.maios.astrodx",
	}

	fmt.Printf("[HARDWARE] Universal Card Reader aktif. Hotline: %s\n", config.HotlineSupport)

	// Simulasi Sesi 1 Pemain
	singleSession := ArcadeSession{
		PlayerCount: 1,
		PricingFee:  10000,
		SongLimit:   3,
		OnlineMabar: false,
	}
	executeSession(singleSession, config.AutoCloseTarget)

	// Simulasi Sesi 2 Pemain + Mabar Online
	multiSession := ArcadeSession{
		PlayerCount: 2,
		PricingFee:  20000,
		SongLimit:   4,
		OnlineMabar: true,
	}
	executeSession(multiSession, config.AutoCloseTarget)
}

func executeSession(session ArcadeSession, targetApp string) {
	fmt.Println("\n------------------------------------------")
	if session.OnlineMabar {
		fmt.Printf("[SESSION] Mode: 2 Pemain + Mabar Online | Tarif: Rp%d\n", session.PricingFee)
	} else {
		fmt.Printf("[SESSION] Mode: 1 Pemain | Tarif: Rp%d\n", session.PricingFee)
	}

	fmt.Println("[STATUS] Menunggu tap kartu (NFC/Chip/Aime)...")
	fmt.Println("[PAYMENT] Pembayaran berhasil diverifikasi.")
	fmt.Printf("[GAME] Meluncurkan aplikasi %s...\n", targetApp)

	// Simulasi pemutaran lagu
	for i := 1; i <= session.SongLimit; i++ {
		time.Sleep(200 * time.Millisecond)
		fmt.Printf("[PLAYING] Menyelesaikan lagu ke-%d dari %d...\n", i, session.SongLimit)
	}

	// Fitur Auto-Close Aplikasi Pihak Ketiga
	triggerAutoClose(targetApp)
}

func triggerAutoClose(packageName string) {
	fmt.Printf("[AUTO-CLOSE] Batas lagu tercapai. Menghentikan paksa aplikasi %s...\n", packageName)
	fmt.Println("[SYSTEM] Sesi selesai. Kembali ke menu utama MAIOS.")
}

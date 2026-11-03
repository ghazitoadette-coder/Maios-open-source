#include <iostream>
#include <string>
#include <thread>
#include <chrono>

// MAIOS Universal Card Reader Module - Reader AIME C++
namespace maios::hardware::reader {

    struct SessionConfig {
        std::string cardType;
        int playerCount;
        int totalFee;
        int maxSongs;
        bool isOnline;
    };

    class AimeReader {
    private:
        bool isReaderActive = false;

    public:
        void initializeReader() {
            isReaderActive = true;
            std::cout << "[MAIOS Card Reader] Modul Reader AIME Aktif." << std::endl;
            std::cout << "[MAIOS Card Reader] Menunggu tap kartu (Debit, Kartu Game, atau kartu berbahan chip/NFC lainnya)..." << std::endl;
        }

        void processCardTap(const std::string& cardType, int playerCount) {
            if (!isReaderActive) {
                std::cout << "[MAIOS Card Reader] Error: Reader belum siap!" << std::endl;
                return;
            }

            SessionConfig session;
            session.cardType = cardType;
            session.playerCount = playerCount;

            if (playerCount == 1) {
                session.totalFee = 10000;
                session.maxSongs = 3;
                session.isOnline = false;
                std::cout << "\n[EVENT] Kartu " << cardType << " terdeteksi!" << std::endl;
                std::cout << "[PEMBAYARAN] Kategori: 1 Orang | Biaya: Rp" << session.totalFee << " | Batas Main: " << session.maxSongs << " Lagu" << std::endl;
            } else if (playerCount == 2) {
                session.totalFee = 20000;
                session.maxSongs = 4;
                session.isOnline = true;
                std::cout << "\n[EVENT] Kartu " << cardType << " terdeteksi!" << std::endl;
                std::cout << "[PEMBAYARAN] Kategori: 2 Orang + Online Mabar | Biaya: Rp" << session.totalFee << " | Batas Main: " << session.maxSongs << " Lagu" << std::endl;
            } else {
                std::cout << "[ERROR] Jumlah pemain tidak valid!" << std::endl;
                return;
            }

            executeGameSession(session);
        }

    private:
        void executeGameSession(const SessionConfig& session) {
            std::cout << "[MAIOS UI] Pop-up Notifikasi: Pembayaran Rp" << session.totalFee << " Berhasil!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));

            std::cout << "[MAIOS Launcher] Membuka Game Astro DX..." << std::endl;
            
            // Simulasi Sesi Permainan Lagu
            for (int song = 1; song <= session.maxSongs; ++song) {
                std::cout << "[ASTRO DX] Sedang Memainkan Lagu ke-" << song << " dari " << session.maxSongs << "..." << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }

            std::cout << "\n[STATUS] Sesi " << session.maxSongs << " lagu telah selesai!" << std::endl;
            std::cout << "[MAIOS System] Menutup aplikasi Astro DX secara otomatis..." << std::endl;
            std::cout << "[MAIOS System] Kembali ke layar utama / mode Reader AIME." << std::endl;
        }
    };

}

int main() {
    maios::hardware::reader::AimeReader reader;
    reader.initializeReader();

    // Simulasi Tap Kartu (Contoh: 1 Orang, Rp10.000, 3 Lagu)
    reader.processCardTap("Kartu Debit / Chip NFC", 1);

    return 0;
}

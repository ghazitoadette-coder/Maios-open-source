// MAIOS C# Core Engine Implementation (.cs)
// Pengembang: Ghazi
// Sistem: Arcade Session Manager & Universal Aime Reader Integration

using System;

namespace Maios.Core
{
    public class MaiosSystemManager
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("==========================================");
            Console.WriteLine("      MAIOS C# SYSTEM LAUNCHER v1.0      ");
            Console.WriteLine("==========================================");

            // Inisialisasi Universal Reader & Hotline Dukungan
            CardReader reader = new CardReader("universal_nfc_chip", "085123349909");
            
            // Contoh Simulasi Sesi 1 Orang
            ExecuteSession(reader, playerType: 1);

            // Contoh Simulasi Sesi 2 Orang + Mabar Online
            ExecuteSession(reader, playerType: 2);
        }

        public static void ExecuteSession(CardReader reader, int playerType)
        {
            if (playerType == 1)
            {
                Console.WriteLine("\n[SESSION] Sesi 1 Pemain Dipilih.");
                reader.ProcessPayment(fee: 10000, songLimit: 3, isOnlineMabar: false);
            }
            else if (playerType == 2)
            {
                Console.WriteLine("\n[SESSION] Sesi 2 Pemain + Mabar Online Dipilih.");
                reader.ProcessPayment(fee: 20000, songLimit: 4, isOnlineMabar: true);
            }
        }
    }

    public class CardReader
    {
        public string ReaderType { get; set; }
        public string HotlineSupport { get; set; }

        public CardReader(string type, string hotline)
        {
            ReaderType = type;
            HotlineSupport = hotline;
            Console.WriteLine($"[HARDWARE] Card Reader diinisialisasi: {ReaderType}");
            Console.WriteLine($"[SUPPORT] Hotline Bantuan: {HotlineSupport}");
        }

        public void ProcessPayment(int fee, int songLimit, bool isOnlineMabar)
        {
            Console.WriteLine($"[STATUS] Menunggu tap kartu (NFC/Chip/Aime)...");
            Console.WriteLine($"[PAYMENT] Pembayaran sebesar Rp{fee:N0} berhasil diproses.");
            
            string mode = isOnlineMabar ? "2 Pemain + Mabar Online" : "1 Pemain";
            Console.WriteLine($"[GAME] Mode: {mode}. Batas lagu: {songLimit}. Meluncurkan Astro DX...");
            
            // Simulasi permainan berjalan hingga batas lagu tercapai
            SimulateGamePlay(songLimit);
        }

        private void SimulateGamePlay(int songLimit)
        {
            Console.WriteLine($"[PLAYING] Game Astro DX sedang berjalan...");
            for (int i = 1; i <= songLimit; i++)
            {
                Console.WriteLine($"[SONG] Menyelesaikan lagu ke-{i} dari {songLimit}...");
            }

            // Fitur Auto-Close Aplikasi
            TriggerAutoClose("com.maios.astrodx");
        }

        private void TriggerAutoClose(string packageName)
        {
            Console.WriteLine($"[AUTO-CLOSE] Batas lagu tercapai. Menutup paksa aplikasi {packageName}...");
            Console.WriteLine("[SYSTEM] Sesi berakhir. Kembali ke menu utama MAIOS.");
        }
    }
}

// ==========================================
// MAIOS MOBILE SERVICE (MMS) - C# HANDLER
// File: MmsCoreHandler.cs
// ==========================================

using System;
using System.Threading;

namespace Maios.Core
{
    public class MmsCoreHandler
    {
        public string ServiceName { get; private set; }
        public string Version { get; private set; }
        private bool _isRunning;

        public MmsCoreHandler(string serviceName = "MAIOS_Mobile_Service", string version = "1.0.0")
        {
            ServiceName = serviceName;
            Version = version;
            _isRunning = false;
        }

        public void StartService()
        {
            Console.WriteLine($"[MAIOS-C#] Memulai {ServiceName} v{Version}...");
            _isRunning = true;
            
            // Simulasi proses inisialisasi modul .NET
            Thread.Sleep(500);
            Console.WriteLine("[MAIOS-C#] Layanan MMS berhasil aktif di lingkungan .NET/C#!");
        }

        public void StopService()
        {
            if (_isRunning)
            {
                Console.WriteLine($"[MAIOS-C#] Menghentikan {ServiceName}...");
                _isRunning = false;
                Console.WriteLine("[MAIOS-C#] Layanan berhasil dimatikan.");
            }
            else
            {
                Console.WriteLine("[MAIOS-C#] Layanan sedang tidak berjalan.");
            }
        }

        public string GetStatus()
        {
            return _isRunning ? "Status C#: Aktif & Stabil" : "Status C#: Mati";
        }
    }
}

# ==========================================
# MAIOS MOBILE SERVICE (MMS) - PYTHON MODULE
# File: mms_manager.py
# ==========================================

import time

class MMSManagerPython:
    def __init__(self, service_name="MAIOS_Mobile_Service", version="1.0.0"):
        self.service_name = service_name
        self.version = version
        self.is_active = False

    def start_service(self):
        print(f"[MAIOS-PYTHON] Memulai {self.service_name} v{self.version}...")
        self.is_active = True
        print("[MAIOS-PYTHON] Layanan MMS berhasil aktif dan berjalan lancar.")

    def check_status(self):
        if self.is_active:
            return "Status: Berjalan (Normal)"
        return "Status: Berhenti"

    def stop_service(self):
        print(f"[MAIOS-PYTHON] Menghentikan {self.service_name}...")
        self.is_active = False
        print("[MAIOS-PYTHON] Layanan dimatikan dengan aman.")

if __name__ == "__main__":
    mms = MMSManagerPython()
    mms.start_service()
    print(mms.check_status())
    time.sleep(1)
    mms.stop_service()
  

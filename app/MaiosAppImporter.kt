package com.maios.system.app

import com.maios.system.apk.MaiosApkSupport

/**
 * MAIOS App Package Importer Module
 * Modul untuk mengimpor dan memasang file APK ke dalam sistem direktori /app
 */
class MaiosAppImporter {
    private val apkSupport = MaiosApkSupport()

    fun importApkToAppFolder(apkFileName: String) {
        println("[MAIOS App Importer] Mengimpor file APK: $apkFileName ke dalam direktori /app...")
        val isValid = apkSupport.checkApkCompatibility(apkFileName)
        
        if (isValid) {
            apkSupport.mountApkFileSystem("/app/$apkFileName")
            println("[MAIOS App Importer] File $apkFileName berhasil diimpor dan terpasang di sistem MAIOS!")
        } else {
            println("[MAIOS App Importer] Gagal mengimpor: File bukan format APK yang valid.")
        }
    }
}

fun main() {
    val importer = MaiosAppImporter()
    importer.importApkToAppFolder("MaiosSystemCore.apk")
}

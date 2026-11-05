package com.maios.mms

import android.util.Log
import java.io.File

class MmsConfigParser {
    companion object {
        private const val TAG = "MAIOS_Parser"
    }

    // Fungsi untuk membaca dan mem-parsing isi file .maios (misal: MMS_service.maios atau GMS_mode.maios)
    fun parseMaiosFile(filePath: String): Map<String, String> {
        val configMap = mutableMapOf<String, String>()
        val file = File(filePath)

        if (!file.exists()) {
            Log.e(TAG, "File .maios tidak ditemukan di: $filePath")
            return configMap
        }

        file.forEachLine { line ->
            val trimmed = line.trim()
            // Mengabaikan komentar atau baris kosong
            if (trimmed.isNotEmpty() && !trimmed.startsWith("//")) {
                val parts = trimmed.split("=")
                if (parts.size == 2) {
                    val key = parts[0].trim()
                    val value = parts[1].trim().removeSurrounding("\"").removeSuffix(";")
                    configMap[key] = value
                    Log.d(TAG, "Parsed -> $key : $value")
                }
            }
        }

        return configMap
    }
}

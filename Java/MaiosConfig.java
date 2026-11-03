package com.maios.core;

public class MaiosConfig {
    public static final String CONFIG_NAME = "MAIOS_SYSTEM_CONFIG";
    public static final double VERSION = 1.0;

    public static void printConfig() {
        System.out.println("[MAIOS Java] Konfigurasi Sistem dimuat: " + CONFIG_NAME);
    }
}

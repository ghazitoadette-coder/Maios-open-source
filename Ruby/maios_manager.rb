# MAIOS Ruby Core Script & Utility Manager Implementation (.rb)
# Pengembang: Ghazi
# Sistem: Arcade Session Manager & Universal Aime Reader Integration

class ReaderConfig
  attr_accessor :supported_media, :hotline_support, :auto_close_target

  def initialize(media, hotline, target)
    @supported_media = media
    @hotline_support = hotline
    @auto_close_target = target
  end
end

class ArcadeSession
  attr_accessor :player_count, :pricing_fee, :song_limit, :online_mabar

  def initialize(count, fee, limit, mabar)
    @player_count = count
    @pricing_fee = fee
    @song_limit = limit
    @online_mabar = mabar
  end
end

def main
  puts "=========================================="
  puts "       MAIOS RUBY UTILITY ENGINE v1.0     "
  puts "=========================================="

  config = ReaderConfig.new(
    ["NFC_Chip", "Debit_Card", "Game_Card", "Aime_Card"],
    "085123349909",
    "com.maios.astrodx"
  )

  puts "[HARDWARE] Universal Card Reader aktif. Hotline: #{config.hotline_support}"

  single_session = ArcadeSession.new(1, 10000, 3, false)
  execute_session(single_session, config.auto_close_target)

  multi_session = ArcadeSession.new(2, 20000, 4, true)
  execute_session(multi_session, config.auto_close_target)
end

def execute_session(session, target_app)
  puts "\n------------------------------------------"
  if session.online_mabar
    puts "[SESSION] Mode: 2 Pemain + Mabar Online | Tarif: Rp#{session.pricing_fee}"
  else
    puts "[SESSION] Mode: 1 Pemain | Tarif: Rp#{session.pricing_fee}"
  end

  puts "[STATUS] Menunggu tap kartu (NFC/Chip/Aime)..."
  puts "[PAYMENT] Pembayaran berhasil diverifikasi."
  puts "[GAME] Meluncurkan aplikasi #{target_app}..."

  (1..session.song_limit).each do |i|
    sleep(0.2)
    puts "[PLAYING] Menyelesaikan lagu ke-#{i} dari #{session.song_limit}..."
  end

  trigger_auto_close(target_app)
end

def trigger_auto_close(package_name)
  puts "[AUTO-CLOSE] Batas lagu tercapai. Menghentikan paksa aplikasi #{package_name}..."
  puts "[SYSTEM] Sesi selesai. Kembali ke menu utama MAIOS."
end

main if __FILE__ == $0

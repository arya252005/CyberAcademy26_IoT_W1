
# CyberAcademy 2026 - IoT Modul 1: Sistem Minimum ATMega328P

Repositori ini berisi *source code* resmi untuk Modul 1 praktikum Internet of Things (IoT) CyberAcademy 2026. Fokus pada minggu pertama ini adalah perakitan fisik Sistem Minimum (MinSys) mikrokontroler ATMega328P dan pengenalan konsep fundamental *Firmware Design*.

## Deskripsi
Proyek ini mendemonstrasikan cara membuat program *Blink* LED sederhana yang disertai komunikasi *Serial Monitor*, dengan memecah fungsi-fungsi kontrol ke dalam *file* Header (`.h`). Pendekatan ini bertujuan untuk melatih peserta membiasakan penulisan *clean code* dan pengorganisasian *file* yang rapi menggunakan arsitektur Arduino Framework.

## Perangkat Keras yang Digunakan
Komponen utama yang dirakit pada *breadboard* meliputi:
- IC ATMega328P-PU
- Modul USB to TTL (FTDI)
- Kristal Osilator 16 MHz
- Resistor 10k Ohm (Pull-up) & 220 Ohm
- Kapasitor Keramik 20pF (2 buah) & Kapasitor Elco 10uF
- Push Button & LED (Terhubung ke pin PB5 / Arduino Digital Pin 13)

## Struktur Folder Proyek
Proyek ini diinisiasi menggunakan lingkungan pengembangan **VSCode** dan **PlatformIO**. Logika program dipisah dengan struktur berikut:

```text
├── include/
│   └── led_control.h   # File header berisi definisi fungsi (Setup & Blink)
├── src/
│   └── main.cpp        # File utama pengeksekusi program
└── platformio.ini      # Konfigurasi board (Environment: Arduino Uno / ATMega328P 16MHz)

```

## Cara Penggunaan

Bagi mahasiswa yang ingin menjalankan kode ini secara mandiri di rumah, ikuti langkah berikut:

1. Pastikan Anda telah menginstal **Visual Studio Code** beserta ekstensi **PlatformIO IDE**.
2. *Clone* repositori ini ke dalam direktori lokal Anda:
```bash
git clone [https://github.com/arya252005/CyberAcademy26_IoT_W1.git](https://github.com/arya252005/CyberAcademy26_IoT_W1.git)

```


3. Buka folder proyek tersebut di VSCode.
4. Tunggu beberapa saat hingga PlatformIO selesai mengunduh konfigurasi dan kerangka kerja (Framework) yang dibutuhkan.
5. Hubungkan modul USB to TTL dari rangkaian MinSys ke laptop.
6. Klik tombol **Upload** (ikon panah ke kanan di status bar bawah PlatformIO) untuk mem- *flash* kode ke mikrokontroler.

## PERINGATAN KESELAMATAN PRAKTIKUM

**JANGAN menghubungkan kabel USB to TTL ke laptop sebelum seluruh rangkaian *breadboard* Anda diperiksa secara menyeluruh oleh Asisten Lab!**
Pemasangan kutub daya (VCC dan GND) yang terbalik dapat mengakibatkan korsleting (*short circuit*) yang berpotensi membakar IC ATMega328P dan merusak *port* USB laptop Anda.

---

*Dikelola oleh Divisi IoT - Cyber Physical System Laboratory*

```

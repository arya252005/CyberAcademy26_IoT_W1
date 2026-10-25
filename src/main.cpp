#include <Arduino.h>
#include "led_control.h" // Memanggil laci fungsi yang sudah kita buat

void setup() {
  // Memulai jalur komunikasi dengan USB to TTL pada baud rate 9600
  Serial.begin(9600);
  Serial.println("Sistem Minimum ATMega328P Siap!");

  // Memanggil fungsi setup LED dari file led_control.h
  setupLED();
}

void loop() {
  Serial.println("LED sedang berkedip...");
  
  // Memanggil fungsi kedip dari file led_control.h
  kedipLED(); 
}
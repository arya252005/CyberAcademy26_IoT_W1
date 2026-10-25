#include <Arduino.h>

// Fungsi untuk mengatur pin LED sebagai OUTPUT
void setupLED() {
  // PB5 pada ATMega328P sama dengan Pin 13 di Arduino
  pinMode(13, OUTPUT); 
}

// Fungsi untuk menyalakan dan mematikan LED
void kedipLED() {
  digitalWrite(13, HIGH); // Nyalakan LED
  delay(1000);            // Tunggu 1 detik (1000 milidetik)
  
  digitalWrite(13, LOW);  // Matikan LED
  delay(1000);            // Tunggu 1 detik
}
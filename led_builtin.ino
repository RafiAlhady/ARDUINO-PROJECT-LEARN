// Flip-Flop Arduino UNO R3
// Menggunakan LED BUILTIN (Yang tertanam) Pada Arduino UNO R3
// LED_BUILTIN berada di pin 13

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  digitalWrite(LED_BUILTIN, HIGH); // Perintah untuk memberikan tegangan 3-5v pada pin 13/LED_BUILTIN. Jadi led akan hidup
  delay(1000); // jeda waktu, 1000 = 1 detik
  digitalWrite(LED_BUILTIN, LOW); // Perintah untuk memberikan tegangan 0v pada pin 13/LED_BUILTIN. Jadi led akan mati
  delay(1000); // jeda waktu, 1000 = 1 detik
}

// Agregamos la Biblioteca
#include <btAudio.h>

// Definimos el nombre del dispositivo bluetooth
btAudio audio = btAudio("ESP_Speaker");

void setup() {
 
 // arranco el Audo BT receiber  
 audio.begin();
 
 //  el sonido lo saco mediante el I2S DAC https://www.adafruit.com/product/3678
 // aca defino los pines
 int bck = 26; 
 int ws = 27;
 int dout = 25;
 audio.I2S(bck, dout, ws);
}

void loop() {
 // seteo el volumen
audio.volume(0.5);
}

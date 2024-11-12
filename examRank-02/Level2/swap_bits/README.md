(octet >> 4) ifadesi, 8 bitlik octet değişkenindeki ilk 4 biti sağ tarafa kaydırır ve geriye kalan son 4 biti sol tarafa kaydırarak 0 ile doldurur. Örneğin, octet değişkeni 0b10100111 (167) olsun, (octet >> 4) ifadesi 0b00001010 (10) değerini verir.

(octet << 4) ifadesi ise, octet değişkenindeki son 4 biti sol tarafa kaydırır ve geriye kalan ilk 4 biti sağ tarafa kaydırarak 0 ile doldurur. Örneğin, octet değişkeni 0b10100111 (167) olsun, (octet << 4) ifadesi 0b01110000 (112) değerini verir.

Son olarak, | işareti bu iki ifadeyi birleştirir ve swap_bits fonksiyonu sonucunda geriye 0b01111010 (122) değeri döndürür. Yani, swap_bits fonksiyonu 8 bitlik bir sayının ilk 4 bitini son 4 bite, son 4 bitini ise ilk 4 bite taşıyarak bu sayının bitlerini yer değiştirir.

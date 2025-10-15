#include <iostream>

// Fonksiyon: Karakter Tabanlý Toplama Uygulamasý
void karakterTabanliToplama() {
    char rakam1_char, rakam2_char;

    // 1. Girdi Alma (Kýsýtlý I/O Simülasyonu)
    std::cout << "Toplanacak birinci tek haneli rakami (karakter olarak) girin: ";
    std::cin >> rakam1_char; // '3' gibi bir karakter okunacak

    std::cout << "Toplanacak ikinci tek haneli rakami (karakter olarak) girin: ";
    std::cin >> rakam2_char; // '5' gibi bir karakter okunacak

    // KONTROL 1: Girilenler Gerçekten Tek Haneli Rakam Karakteri mi?
    // Bu kontrol, simülasyonun amacýna uygun, sadece '0' ile '9' arasýný kabul etmeliyiz.
    if (rakam1_char < '0' || rakam1_char > '9' || rakam2_char < '0' || rakam2_char > '9') {
        std::cerr << "HATA: Lutfen sadece tek haneli rakam karakterleri (0-9) girin." << std::endl;
        return; // Programý sonlandýr
    }

    // 2. Karakterden Sayýya Dönüþüm (ASIL SÝMÜLASYON KISMI)
    // ASCII Karakterinin Sayýsal Deðerini Bulma:
    // Örneðin, '3' karakterinin ASCII deðeri 51'dir. '0' karakterinin ASCII deðeri ise 48'dir.
    // '3' - '0' = 51 - 48 = 3. Böylece karakterden sayýya geçmiþ oluruz.

    int rakam1_sayi = rakam1_char - '0';
    int rakam2_sayi = rakam2_char - '0';

    // 3. Toplama Ýþlemi
    int toplam_sonucu_sayi = rakam1_sayi + rakam2_sayi;

    // 4. Kontrol Mekanizmasý (6-Bit Kýsýtlamasý Simülasyonu)
    // Sonucun tek haneli kalmasýný istiyoruz (0-9). 6-bit'lik bir alanda çok fazla yerimiz yok varsayýmýyla.
    if (toplam_sonucu_sayi > 9) {
        // Hata Durumu: Sonuç tek haneli sýnýrý aþtý.
        std::cerr << "6-Bit Simülasyon HATA: Toplama sonucu (" << toplam_sonucu_sayi 
                  << ") tek haneli siniri (9) asti. Bu kýsýtlý sistemde islenemez." << std::endl;
    } else {
        // 5. Sonucu Tekrar Karakter Olarak Yazma
        // Sayýsal deðeri tekrar karakter formatýna dönüþtürüyoruz.
        // Örneðin, 8 + '0' = 8 + 48 = 56. 56'nýn ASCII karþýlýðý ise '8' karakteridir.
        char sonuc_char = toplam_sonucu_sayi + '0';

        std::cout << "\n--- 6-Bit Simülasyon Sonucu ---" << std::endl;
        std::cout << "Karakterler toplandi: " << rakam1_char << " + " << rakam2_char << std::endl;
        std::cout << "Sonuc (Karakter Tabanli): " << sonuc_char << std::endl;
    }
}

int main() {
    karakterTabanliToplama();
    return 0;
}

#include <iostream>

// Fonksiyon: Karakter Tabanl� Toplama Uygulamas�
void karakterTabanliToplama() {
    char rakam1_char, rakam2_char;

    // 1. Girdi Alma (K�s�tl� I/O Sim�lasyonu)
    std::cout << "Toplanacak birinci tek haneli rakami (karakter olarak) girin: ";
    std::cin >> rakam1_char; // '3' gibi bir karakter okunacak

    std::cout << "Toplanacak ikinci tek haneli rakami (karakter olarak) girin: ";
    std::cin >> rakam2_char; // '5' gibi bir karakter okunacak

    // KONTROL 1: Girilenler Ger�ekten Tek Haneli Rakam Karakteri mi?
    // Bu kontrol, sim�lasyonun amac�na uygun, sadece '0' ile '9' aras�n� kabul etmeliyiz.
    if (rakam1_char < '0' || rakam1_char > '9' || rakam2_char < '0' || rakam2_char > '9') {
        std::cerr << "HATA: Lutfen sadece tek haneli rakam karakterleri (0-9) girin." << std::endl;
        return; // Program� sonland�r
    }

    // 2. Karakterden Say�ya D�n���m (ASIL S�M�LASYON KISMI)
    // ASCII Karakterinin Say�sal De�erini Bulma:
    // �rne�in, '3' karakterinin ASCII de�eri 51'dir. '0' karakterinin ASCII de�eri ise 48'dir.
    // '3' - '0' = 51 - 48 = 3. B�ylece karakterden say�ya ge�mi� oluruz.

    int rakam1_sayi = rakam1_char - '0';
    int rakam2_sayi = rakam2_char - '0';

    // 3. Toplama ��lemi
    int toplam_sonucu_sayi = rakam1_sayi + rakam2_sayi;

    // 4. Kontrol Mekanizmas� (6-Bit K�s�tlamas� Sim�lasyonu)
    // Sonucun tek haneli kalmas�n� istiyoruz (0-9). 6-bit'lik bir alanda �ok fazla yerimiz yok varsay�m�yla.
    if (toplam_sonucu_sayi > 9) {
        // Hata Durumu: Sonu� tek haneli s�n�r� a�t�.
        std::cerr << "6-Bit Sim�lasyon HATA: Toplama sonucu (" << toplam_sonucu_sayi 
                  << ") tek haneli siniri (9) asti. Bu k�s�tl� sistemde islenemez." << std::endl;
    } else {
        // 5. Sonucu Tekrar Karakter Olarak Yazma
        // Say�sal de�eri tekrar karakter format�na d�n��t�r�yoruz.
        // �rne�in, 8 + '0' = 8 + 48 = 56. 56'n�n ASCII kar��l��� ise '8' karakteridir.
        char sonuc_char = toplam_sonucu_sayi + '0';

        std::cout << "\n--- 6-Bit Sim�lasyon Sonucu ---" << std::endl;
        std::cout << "Karakterler toplandi: " << rakam1_char << " + " << rakam2_char << std::endl;
        std::cout << "Sonuc (Karakter Tabanli): " << sonuc_char << std::endl;
    }
}

int main() {
    karakterTabanliToplama();
    return 0;
}

/****************************************************************************
**					SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...:          2
**				ÖÐRENCÝ ADI...............: UMUT ARDA VURAL
**				ÖÐRENCÝ NUMARASI.:B231210081
**				DERS GRUBU…………: A
****************************************************************************/

#include <iostream> // temel kütüphabe 
#include <ctime> // zaman iþlemleri 
#include <chrono> // bilgisiyardan zaman alýrken kullanmak için internette buldum 

using namespace  std;
using namespace std::chrono; // zaman için 

system_clock::time_point custom_date;

class hesap {

private:
    // GEREKLÝ OLAN TANIMLAMALAR 
    int modiþlemi;
    int a, b, c, d;
    double bakiye;
    string ad;
    string soyad;
    double genelhesapnumarasý;
    double özelhesapnumarasý;
    int dýþardantarihal;
    double kaydedicideðer;
    double kaydedicideðer2;
    double geçici;
    double geçici2;
    double geçici3;
    double geçici4;
    int günfark;
    double kriptoparamiktarý;
    double geçici5;
    double geçici6;
    double kriptoparadeðeri = 1;
    double geçicigünfark1;
    double geçicigünfark2;
    int günsayaç = 1;
    int günsayaç2 = 1;
    int günsayaç3 = 1;
    double satýlcakmiktar;
    double alýncakmiktar;

public:


    string getisim() const {
        return ad;
    }

    string getsoyad() const {
        return soyad;
    }

    // GENEL HESAP NUMARASINI 1DAN BAÞLATTIM   STATÝCLE KONTROL ETTÝM

    void genelhesapaç() {
        cout << endl << "lütfen adýnýzý giriniz :";
        cin >> ad;
        cout << "lütfen soyadýnýzý giriniz :";
        cin >> soyad;
        cout << "Hesap numaranýz  gelen numara kaçýncý hesap olduðunu göstericektir " << endl;
        static int sayaç = 1;
        genelhesapnumarasý = sayaç;
        cout << "Hesap numaranýz : " << sayaç;
        sayaç++;

    }

    // ÖZEL HESAP NUMARASINI 6DAN BAÞLATTIM  
    void özelhesapaç() {
        cout << endl << "lütfen adýnýzý giriniz : ";
        cin >> ad; cout << endl;
        cout << "lütfen soy adýnýzý giriniz : ";
        cin >> soyad;  cout << endl;
        cout << "Hesap numaranýz  gelen numara kaçýncý hesap olduðunu göstericektir !!! ";  cout << endl;
        static int sayaçözel = 6;
        özelhesapnumarasý = sayaçözel;
        cout << "Hesap numaranýz : " << sayaçözel;
        sayaçözel++;
    }
    void bakiyegörüntüle() {
        cout << "Hesabýnýzdaki bakiye : " << bakiye << " TL";
    }
    void özelhesapbakiyegörüntüle()
    {
        cout << " Hesap Bakiyeniz ";
        cout << bakiye << " TL";
    }
    // Kurucu fonksiyon
    double Hesapbaþlangýçbakiye(double baslangicBakiye) {
        bakiye = baslangicBakiye;
        return bakiye;
    }
    double kriptoparamiktarýý(double baþalngýçkriptoparamiktaý) {
        kriptoparamiktarý = baþalngýçkriptoparamiktaý;
        return kriptoparamiktarý;
    }
    // Bakiye çekme iþlemi // 
    void bakiyeCek(double miktar) {
        if (miktar > 0 and miktar <= bakiye) {
            bakiye -= miktar;
            cout << "Bakiyeden " << miktar << " TL çekildi." << endl;
            cout << " Kalan bakiye miktarýnýz : " << bakiye;
        }
        else {
            cout << "Geçersiz miktar veya yetersiz bakiye!" << endl;
        }
    }
    // Girilen miktarý kontrol ettim bakiye yeterli olup olmadýðý 
    void kriptoparal() {
        cout << "Almak istediðiniz miktarý giriniz ";
        cin >> alýncakmiktar;
        cout << endl;
        if (alýncakmiktar * kriptoparadeðeri <= bakiye) {
            bakiye = bakiye - (alýncakmiktar * kriptoparadeðeri);
            kriptoparamiktarý = alýncakmiktar + kriptoparamiktarý;
            cout << "Yeni bakiyeniz ";
            cout << bakiye << endl;
            cout << "Yeni kriptopara miktarýnýz ";
            cout << kriptoparamiktarý;
        }
        else { cout << "Geçersiz miktar veya yetersiz bakiye!" << endl; }
    }
    void kriptoparasat() {
        cout << "Þuanki kripto para miktarýnýz : " << kriptoparamiktarý << endl;
        cout << "Satmak istediðiniz kripto para  miktarý giriniz : ";
        cin >> satýlcakmiktar;
        if (satýlcakmiktar <= kriptoparamiktarý) {
            bakiye = satýlcakmiktar * kriptoparadeðeri + bakiye;
            kriptoparamiktarý = kriptoparamiktarý - satýlcakmiktar;
            cout << endl << "Yeni bakiye :" << bakiye << endl;
            cout << "Güncellenen kripto para miktarýnýz : " << kriptoparamiktarý;

        }
        else { cout << "Geçersiz miktar veya yetersiz bakiye!" << endl; }
    }
    // Bakiye yükleme iþlemi //
    void bakiyeYukle(double miktar) {
        if (miktar > 0) {
            bakiye = bakiye + miktar;
            cout << "Bakiyeye " << miktar << " TL yüklendi." << endl;
            cout << "Hesabýnýzdaki yeni bakiyeniz : " << bakiye << endl;
            cout << "Hesabýnýzdaki þuanki kripto para miktarý :" << kriptoparamiktarý << endl;

        }
        else {
            cout << "Geçersiz miktar!" << endl;
        }
    }

    // Bakiye sorgulama iþlemi
    double getBakiye() const {
        return bakiye;
    }
    double getkriptoparamiktarý()const {
        return kriptoparamiktarý;
    }
    void genelhesapbilgilerigörüntüle() {
        cout << "Hesap türü : " << "Genel Hesap" << endl;
        cout << "Hesap adý : " << ad << endl;
        cout << "Hesap soyadý : "; cout << soyad << endl;
        cout << "Hesap numarasý : " << genelhesapnumarasý << endl;
        cout << "Hesap bakiye : " << bakiye << " TL" << endl;
        cout << "Hesap kripto para miktarý  : " << kriptoparamiktarý << endl;


    }
    void özelhesapbilgilerigörüntüle() {
        cout << "Hesap türü : " << "Özel Hesap" << endl;
        cout << "Hesap adý : " << ad << endl;
        cout << "Hesap soyadý : " << soyad << endl;
        cout << "Hesap numarasý : " << özelhesapnumarasý << endl;
        cout << "hesap bakiye : " << bakiye << " TL" << endl;
        cout << "Hesap kripto para miktarý  : " << kriptoparamiktarý << endl;

        cout << endl;
    }


    void genelhesaptarihiþleleri() {
        geçici6 = kriptoparamiktarý * kriptoparadeðeri;
        if (günsayaç2 == 1) {
            dýþardantarihal = günfark + 1;
            for (int i = 1; i <= dýþardantarihal; i++) {
                // Günlük %1 artýþ
                kriptoparadeðeri += kriptoparadeðeri * 0.01;

                // Her 15 günde bir %5 düþüþ ( 15.günde ilk yüzde bir artýþ saðlanýr  sonra düþüs saðlar )
                if (i % 15 == 0) {
                    kriptoparadeðeri = kriptoparadeðeri - kriptoparadeðeri * 0.05;
                }
            }

        }
        else {
            dýþardantarihal = günfark;
            kaydedicideðer = kriptoparamiktarý * kriptoparadeðeri;

            for (int i = 1; i <= dýþardantarihal; i++) {
                // Günlük %1 artýþ
                kriptoparadeðeri += kriptoparadeðeri * 0.01;

                // Her 15 günde bir %5 düþüþ ( 15.günde ilk yüzde bir artýþ saðlanýr  sonra düþüs saðlar )
                if (i % 15 == 0) {
                    kriptoparadeðeri = kriptoparadeðeri - kriptoparadeðeri * 0.05;
                }
            }
        }

        geçici4 = kriptoparamiktarý * kriptoparadeðeri;
        cout << dýþardantarihal << " gün sonra hesabýnýzdaki kripto paranýn TL cinsinden deðeri : " << geçici4 << " TL" << endl;
        cout << "TL cinsinden karýnýz :" << geçici4 - geçici6 << endl;
        cout << "Kripto paranýn birim olarak TLcinsinden deðeri " << kriptoparadeðeri;
        günsayaç2++;
    }

    void özelhesaptarihiþlemleri() {
        srand(time(0));
        geçici6 = kriptoparamiktarý * kriptoparadeðeri;



        if (günsayaç3 == 1) {
            dýþardantarihal = günfark + 1;   // günfarkýna 1 eklememin sebebi saat farkýndan kaynaklanan hatayý düzeltmek bu þekilde hata çözdüm düzgün olarak çalýþmakta //

            // eðer günfarký 30 a eþit ve küçükse bu if'e girer deðilse aþadakine girer //

            if (dýþardantarihal <= 30) {
                a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 arasýnda deðer üretiriz //
                for (int i = 1; i <= dýþardantarihal; i++) {
                    // Günlük %5 artýþ
                    kriptoparadeðeri += kriptoparadeðeri * 0.05;

                    // rasgele 3 günde  %10 düþüþ
                    if (i == c || i == a || i == b) {
                        kriptoparadeðeri = kriptoparadeðeri - kriptoparadeðeri * 0.1;
                    }
                }
            }
            else
            {
                d = dýþardantarihal % 30;
                for (int y = 1; y <= d; y++) {
                    a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 arasýnda deðer üretiriz //

                    for (int i = 1; i <= 30; i++) {
                        // Günlük %5 artýþ
                        kriptoparadeðeri += kriptoparadeðeri * 0.05;

                        // rasgele 3 günde  %10 düþüþ
                        if (i == c || i == a || i == b) {
                            kriptoparadeðeri = kriptoparadeðeri - kriptoparadeðeri * 0.1;
                        }
                    }

                }
                modiþlemi = dýþardantarihal - (d * 30);
                a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 arasýnda deðer üretiriz //                        ;   
                if (modiþlemi > 0 and modiþlemi < 30) {
                    for (int z = 1; z <= modiþlemi; z++) {
                        /// mod aldýktan sonraki aradaki gün farkýna göre tekrar hesaplansýn  //
                        // yani 65 gün girilirse 30 a göre modunu aldýðýmda modu 2 çýkar döngü 60 defa döner geri kalan 5 defa dönmesi için bunu uyguluyorum   //                                                      

                        // Günlük %5 artýþ
                        kriptoparadeðeri += kriptoparadeðeri * 0.05;

                        // rasgele 3 günde  %10 düþüþ //
                        if (c == z || a == z || z == b) {
                            kriptoparadeðeri = kriptoparadeðeri - kriptoparadeðeri * 0.1;

                        }

                    }
                }

            }

        }

        else {

            dýþardantarihal = günfark;

            // eðer günfarký 30 a eþit ve küçükse bu if'e girer deðilse aþadakine girer //

            if (dýþardantarihal <= 30) {
                a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 arasýnda deðer üretiriz //
                for (int i = 1; i <= dýþardantarihal; i++) {
                    // Günlük %5 artýþ
                    kriptoparadeðeri += kriptoparadeðeri * 0.05;

                    // rasgele 3 günde  %10 düþüþ
                    if (i == c || i == a || i == b) {
                        kriptoparadeðeri = kriptoparadeðeri - kriptoparadeðeri * 0.1;
                    }
                }
            }
            else
            {
                d = dýþardantarihal % 30;
                for (int y = 1; y <= d; y++) {
                    a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 arasýnda deðer üretiriz //

                    for (int i = 1; i <= 30; i++) {
                        // Günlük %5 artýþ
                        kriptoparadeðeri += kriptoparadeðeri * 0.05;

                        // rasgele 3 günde  %10 düþüþ
                        if (i == c || i == a || i == b) {
                            kriptoparadeðeri = kriptoparadeðeri - kriptoparadeðeri * 0.1;
                        }
                    }

                }
                modiþlemi = dýþardantarihal - (d * 30);
                a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 arasýnda deðer üretiriz //                           
                if (modiþlemi > 0 and modiþlemi < 30) {
                    for (int z = 1; z <= modiþlemi; z++) {
                        /// mod aldýktan sonraki aradaki gün farkýna göre tekrar hesaplansýn  //
                        // yani 65 gün girilirse 30 a göre modunu aldýðýmda modu 2 çýkar döngü 60 defa döner geri kalan 5 defa dönmesi için bunu uyguluyorum   //                                                      

                        // Günlük %5 artýþ
                        kriptoparadeðeri += kriptoparadeðeri * 0.05;

                        // rasgele 3 günde  %10 düþüþ //
                        if (z == c || z == a || z == b) {
                            kriptoparadeðeri = kriptoparadeðeri - kriptoparadeðeri * 0.1;

                        }

                    }
                }

            }
        }

        geçici4 = kriptoparamiktarý * kriptoparadeðeri;
        cout << dýþardantarihal << " gün sonra hesabýnýzdaki kripto paranýn TL cinsinden deðeri : " << geçici4 << " TL" << endl;
        cout << "TL cinsinden karýnýz :" << geçici4 - geçici6 << endl;
        cout << "Kripto paranýn birim olarak TLcinsinden deðeri " << kriptoparadeðeri;
        günsayaç3++;

    }
    // sistem tarihini almak için kullandýðým fonksiyon 
    void sistemTarihiniGoster() {
        auto now = system_clock::now();

        // Eðer önceden belirlenmiþ bir tarih varsa, onu göster
        if (custom_date.time_since_epoch().count() != 0) {
            auto custom_now = system_clock::now() + (custom_date - now);
            time_t custom_now_c = system_clock::to_time_t(custom_now);
#pragma warning(disable : 4996)
            cout << "Sistem Tarihi: " << ctime(&custom_now_c);
        }
        else {
#pragma warning(disable : 4996)
            time_t now_c = system_clock::to_time_t(now);
            cout << "Sistem Tarihi: " << ctime(&now_c);
        }
    }

    // sistem tarihini ayarlayýp önceki tarih ile arasýndaki farký buluruz ona göre iþlem yaparýz 
    void sistemTarihiniAyarla(int gun, int ay, int yil) {
        struct tm new_timeinfo = { 0 };
        new_timeinfo.tm_mday = gun;
        new_timeinfo.tm_mon = ay - 1;
        new_timeinfo.tm_year = yil - 1900;

        auto new_time = mktime(&new_timeinfo);
        custom_date = system_clock::from_time_t(new_time);

        // Þu anki zamaný al
#pragma warning(disable : 4996)
        auto now = system_clock::now();
        auto now_time = system_clock::to_time_t(now);
        struct tm* now_timeinfo = localtime(&now_time);

        // Yeni zamaný þu andan hesapla
        auto new_now = system_clock::from_time_t(mktime(&new_timeinfo));
        auto diff = new_now - system_clock::from_time_t(now_time);

        // Önceki tarih ile yeni tarih arasýndaki farký hesapla
        duration<double> fark = diff;
        if (günsayaç == 1) {
            günfark = fark.count() / (3600 * 24);
            geçicigünfark1 = günfark;
            geçicigünfark2 = geçicigünfark1;
        }
        else
        {
            günfark = fark.count() / (3600 * 24);
            geçicigünfark1 = günfark;
            günfark = günfark - geçicigünfark2;
            geçicigünfark2 = günfark;
        }
        günsayaç++;
        if (günsayaç2 == 1)
            cout << "Önceki ve Yeni Tarih Arasýndaki Fark: " << günfark + 1 << " gün" << endl;
        else
        {
            cout << "Önceki ve Yeni Tarih Arasýndaki Fark: " << günfark << " gün" << endl;

        }
    }
};


int main() {
    setlocale(LC_ALL, "Turkish");
    int n;
    bool durum = true;
    int a = 1;
    int b = 1;
    int c;
    int d;
    int g;
    double miktar;
    int m;
    int hesaonumarasýal;
    int k = 0;
    int þeçim;
    int gün;
    int ay;
    int yýl;
    hesap hesap1, hesap2, hesap3, hesap4, hesap5, hesap6, hesap7, hesap8, hesap9, hesap10;
    int sayaçtarihiþlemleri1;
    int seçimm = 1;
    int kk;
    int mm;

    while (durum) {
        cout << "1. Genel Hesap Aç " << endl;
        cout << "2. Özel Hesap Aç" << endl;
        cout << "3. Bakiye Ekle" << endl;
        cout << "4. Bakiye Çek" << endl;
        cout << "5. Kripto para al  " << endl;
        cout << "6. Kripto para sat " << endl;
        cout << "7. Bakiye Görüntüle " << endl;
        cout << "8. Açýlan Hesaplarý Görüntüle " << endl;
        cout << "9. Tarih iþlemleri  " << endl;
        cout << "10. Uygulamadan Çýkýþ " << endl;



        cout << "------------------" << endl;
        cout << "Seçim: ";
        cin >> n;
        switch (n) {
        case 1: cout << " Genel hesap açmayý þeçtiniz 5 defa genel hesap açma hakkýnýz vardýr " << endl; // GENEL HESAP AÇMA //

            if (a == 1) {
                hesap1.genelhesapaç();
                hesap1.Hesapbaþlangýçbakiye(0);    hesap1.kriptoparamiktarýý(0);
                a++;
            }
            else if (a == 2)
            {
                hesap2.genelhesapaç();
                hesap2.Hesapbaþlangýçbakiye(0);        hesap2.kriptoparamiktarýý(0);
                a++;
            }
            else if (a == 3)
            {
                hesap3.genelhesapaç();                 hesap3.Hesapbaþlangýçbakiye(0);     hesap3.kriptoparamiktarýý(0);
                a++;
            }
            else if (a == 4)
            {
                hesap4.genelhesapaç();                hesap4.Hesapbaþlangýçbakiye(0);          hesap4.kriptoparamiktarýý(0);
                a++;
            }
            else if (a == 5)
            {
                hesap5.genelhesapaç();                hesap5.Hesapbaþlangýçbakiye(0);     hesap5.kriptoparamiktarýý(0);
                a++;
            }
            else cout << " HATA ";


            break;
        case 2: cout << "Özel hesap açma en fazla 5 tane özel hesap açabilirsiniz  ";  //Özel hesap açma // 
            if (b == 1) {
                hesap6.özelhesapaç();                hesap6.Hesapbaþlangýçbakiye(0);    hesap6.kriptoparamiktarýý(0);

                b++;
            }

            else if (b == 2)
            {
                hesap7.özelhesapaç();                   hesap7.Hesapbaþlangýçbakiye(0);    hesap7.kriptoparamiktarýý(0);

                b++;
            }
            else if (b == 3)
            {
                hesap8.özelhesapaç();                   hesap8.Hesapbaþlangýçbakiye(0);    hesap8.kriptoparamiktarýý(0);

                b++;
            }
            else if (b == 4)
            {
                hesap9.özelhesapaç();                       hesap9.Hesapbaþlangýçbakiye(0);    hesap9.kriptoparamiktarýý(0);

                b++;
            }
            else if (b == 5)
            {
                hesap10.özelhesapaç();                 hesap10.Hesapbaþlangýçbakiye(0);    hesap10.kriptoparamiktarýý(0);

                b++;
            }
            else cout << " HATA ";
            break;

            // hesap numarasý kontrolü yaptým  gerekli araklýkta olduðunu saðlamak için 
        case 3:do {
            cout << "lütfen bakiye yüklemek istediðiniz hesap numarasýný giriniz "; cin >> d;

        } while (d < 0 or 10 < d); // bakiye yükle 

        if (d == 1) {
            hesap1.kriptoparamiktarýý(0);
            cout << "hesabýnýzdaki bakiye " << hesap1.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;
            hesap1.bakiyeYukle(miktar);
            cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap1.getBakiye() << " TL";
            cout << endl;
        }
        else if (d == 2) {
            cout << "hesabýnýzdaki bakiye " << hesap2.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap2.bakiyeYukle(miktar);                cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap2.getBakiye();

        }
        else if (d == 3) {
            cout << "hesabýnýzdaki bakiye " << hesap3.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap3.bakiyeYukle(miktar); cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap3.getBakiye();
        }
        else if (d == 4) {
            cout << "hesabýnýzdaki bakiye " << hesap4.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap4.bakiyeYukle(miktar);  cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap4.getBakiye() << " TL";
        }
        else if (d == 5) {
            cout << "hesabýnýzdaki bakiye " << hesap5.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap5.bakiyeYukle(miktar); cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap5.getBakiye() << " TL";
        }
        else if (d == 6) {
            cout << "hesabýnýzdaki bakiye " << hesap6.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap6.bakiyeYukle(miktar); cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap6.getBakiye() << " TL";
        }
        else if (d == 7) {
            cout << "hesabýnýzdaki bakiye " << hesap7.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap7.bakiyeYukle(miktar);  cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap7.getBakiye() << " TL";
        }
        else if (d == 8) {
            cout << "hesabýnýzdaki bakiye " << hesap8.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap8.bakiyeYukle(miktar); cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap8.getBakiye() << " TL";
        }
        else if (d == 9) {
            cout << "hesabýnýzdaki bakiye " << hesap9.getBakiye() << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap9.bakiyeYukle(miktar); cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap9.getBakiye() << " TL";
        }
        else if (d == 10) {
            cout << "hesabýnýzdaki bakiye " << hesap10.getBakiye() << " TL" << endl;
            cout << "yüklemek istediðiniz miktarý giriniz ";
            cin >> miktar;

            hesap10.bakiyeYukle(miktar); cout << endl << "hesabýnýzdaki yeni bakiye : " << hesap10.getBakiye() << " TL";
        }
        else cout << "hatalý tuþlama";
        break;
        case 4: // bakiye çekme // 
            do {
                cout << " Bakiye çekmek istediðiniz hesabýn numarasýný girermisiniz  "; cin >> g; cout << endl;
            } while (g > 10 or g < 0);

            if (g == 1) {
                cout << "hesabýnýzdaki bakiye " << hesap1.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap1.bakiyeCek(miktar);
                cout << endl << "yeni bakiye " << hesap1.getBakiye() << endl;
            }
            else if (g == 2) {
                cout << "hesabýnýzdaki bakiye " << hesap2.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap2.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap2.getBakiye();

            }
            else if (g == 3) {
                cout << "hesabýnýzdaki bakiye " << hesap3.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap3.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap3.getBakiye();

            }
            else if (g == 4) {
                cout << "hesabýnýzdaki bakiye " << hesap4.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap4.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap4.getBakiye();

            }
            else if (g == 5) {
                cout << "hesabýnýzdaki bakiye " << hesap5.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap5.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap5.getBakiye();

            }
            else if (g == 6) {
                cout << "hesabýnýzdaki bakiye " << hesap6.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap6.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap6.getBakiye();

            }
            else if (g == 7) {
                cout << "hesabýnýzdaki bakiye " << hesap7.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap7.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap7.getBakiye();

            }
            else if (g == 8) {
                cout << "hesabýnýzdaki bakiye " << hesap8.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap8.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap8.getBakiye();

            }
            else if (g == 9) {
                cout << "hesabýnýzdaki bakiye " << hesap9.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap9.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap9.getBakiye();

            }
            else if (g == 10) {
                cout << "hesabýnýzdaki bakiye " << hesap10.getBakiye() << endl;

                cout << " Çekmek istediðiniz miktarý giriniz ";
                cin >> miktar;

                hesap10.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap10.getBakiye();

            }
            break;
        case 5: do { cout << "Kaç numaralý hesapta kripto para almak istiyorsunuz "; cin >> kk; } while (kk < 0 or 10 < kk);
            if (kk == 1) {
                hesap1.kriptoparal();
            }
            else  if (kk == 2) {
                hesap2.kriptoparal();
            }
            else  if (kk == 3) {
                hesap3.kriptoparal();
            }
            else  if (kk == 4) {
                hesap4.kriptoparal();
            }
            else  if (kk == 5) {
                hesap5.kriptoparal();
            }
            else  if (kk == 6) {
                hesap6.kriptoparal();
            }
            else  if (kk == 7) {
                hesap7.kriptoparal();
            }
            else  if (kk == 8) {
                hesap8.kriptoparal();
            }
            else  if (kk == 9) {
                hesap9.kriptoparal();
            }
            else  if (kk == 10) {
                hesap10.kriptoparal();
            }
            break;
        case 6: do { cout << "kaç numaralý hesapta kripto para satmak istiyorsunuz "; cin >> mm; cout << endl; } while (mm < 0 or 10 < mm);
            if (mm == 1) {
                hesap1.kriptoparasat();
            }
            else  if (mm == 2) {
                hesap2.kriptoparasat();
            }
            else  if (mm == 3) {
                hesap3.kriptoparasat();
            }
            else  if (mm == 4) {
                hesap4.kriptoparasat();
            }
            else  if (mm == 5) {
                hesap5.kriptoparasat();
            }
            else  if (mm == 6) {
                hesap6.kriptoparasat();
            }
            else  if (mm == 7) {
                hesap7.kriptoparasat();
            }
            else  if (mm == 8) {
                hesap8.kriptoparasat();
            }
            else  if (mm == 9) {
                hesap9.kriptoparasat();
            }
            else  if (mm == 10) {
                hesap10.kriptoparasat();
            }
            break;
        case 7: // bakiye görüntüle //
            cout << "Bakiye görüntülemek istediðiniz hesapýn numarsýný giriniz"; do { cin >> c; } while (c < 0 or c>10); cout << endl;
            if (c == 1)
            {
                hesap1.bakiyegörüntüle();

            }
            else if (c == 2) {
                hesap2.bakiyegörüntüle();
            }
            else if (c == 3) {
                hesap3.bakiyegörüntüle();
            }
            else if (c == 4) {
                hesap4.bakiyegörüntüle();
            }
            else if (c == 5) {
                hesap5.bakiyegörüntüle();
            }
            else if (c == 6) {
                hesap6.özelhesapbakiyegörüntüle();
            }
            else if (c == 7) {
                hesap7.özelhesapbakiyegörüntüle();
            }
            else if (c == 8) {
                hesap8.özelhesapbakiyegörüntüle();
            }
            else if (c == 9) {
                hesap9.özelhesapbakiyegörüntüle();
            }
            else if (c == 10) {
                hesap10.özelhesapbakiyegörüntüle();
            }
            break;
        case 8:
            do {
                cout << "Bilgilerini görmek istediðiniz hesabýn numarasýný giriniz ";
                cin >> m; cout << endl;
            } while (m < 0 or m>10); cout << endl;

            if (m == 1) {
                hesap1.genelhesapbilgilerigörüntüle();

            }
            else if (m == 2) {
                hesap2.genelhesapbilgilerigörüntüle();

            }
            else if (m == 3) {
                hesap3.genelhesapbilgilerigörüntüle();

            }
            else if (m == 4) {
                hesap4.genelhesapbilgilerigörüntüle();

            }
            else if (m == 5) {
                hesap5.genelhesapbilgilerigörüntüle();

            }
            else if (m == 6) {
                hesap6.özelhesapbilgilerigörüntüle();

            }
            else if (m == 7) {
                hesap7.özelhesapbilgilerigörüntüle();

            }
            else if (m == 8) {
                hesap8.özelhesapbilgilerigörüntüle();

            }
            else if (m == 9) {
                hesap9.özelhesapbilgilerigörüntüle();

            }
            else if (m == 10) {
                hesap10.özelhesapbilgilerigörüntüle();

            }
            break;
        case 9: do {
            cout << "hangi hesabýn tarih iþlemlerin iþ yapmak istiyorsunuz   (Tarihi iþlemi yaptýðýnýz hesabýn tarihi deðiþecektir diðer hesaplarýn tarihi etkilenmicektir )  " << endl; cin >> k;
        } while (k < 0 or k>10);

        if (k == 1) {

            cout << " Bir numaralý hesabýn tarih iþlemlerini yapýcaksýnýz";
            hesap1.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap1.sistemTarihiniAyarla(gün, ay, yýl);
            hesap1.genelhesaptarihiþleleri();
            cout << endl;                hesap1.sistemTarihiniGoster();    cout << endl;



        }
        else if (k == 2) {
            hesap2.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap2.sistemTarihiniAyarla(gün, ay, yýl);
            hesap2.genelhesaptarihiþleleri();
            cout << endl;                hesap2.sistemTarihiniGoster();   cout << endl;

        }
        else if (k == 3) {
            hesap3.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap3.sistemTarihiniAyarla(gün, ay, yýl);
            hesap3.genelhesaptarihiþleleri();
            cout << endl;
            hesap3.sistemTarihiniGoster();   cout << endl;

        }
        else if (k == 4) {
            hesap4.sistemTarihiniGoster();   cout << endl;
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap4.sistemTarihiniAyarla(gün, ay, yýl);
            hesap4.genelhesaptarihiþleleri();
            cout << endl;
            hesap4.sistemTarihiniGoster();    cout << endl;

        }
        else if (k == 5) {
            hesap5.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap5.sistemTarihiniAyarla(gün, ay, yýl);
            hesap5.genelhesaptarihiþleleri();
            cout << endl;
            hesap5.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 6) {
            hesap6.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap6.sistemTarihiniAyarla(gün, ay, yýl);
            hesap6.özelhesaptarihiþlemleri();
            cout << endl;
            hesap6.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 7) {
            hesap7.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap7.sistemTarihiniAyarla(gün, ay, yýl);
            hesap7.özelhesaptarihiþlemleri();
            cout << endl;
            hesap7.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 8) {
            hesap8.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap8.sistemTarihiniAyarla(gün, ay, yýl);
            hesap8.özelhesaptarihiþlemleri();
            cout << endl;
            hesap8.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 9) {
            hesap9.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap9.sistemTarihiniAyarla(gün, ay, yýl);
            hesap9.özelhesaptarihiþlemleri();
            cout << endl;
            hesap9.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 10) {
            hesap10.sistemTarihiniGoster();
            cout << "Günü giriniz  :";
            cin >> gün;
            cout << "ayý giriniz   :";
            cin >> ay;
            cout << "yýlý giriniz  :";
            cin >> yýl;
            hesap10.sistemTarihiniAyarla(gün, ay, yýl);
            hesap10.özelhesaptarihiþlemleri();
            cout << endl;
            hesap10.sistemTarihiniGoster();
            cout << endl;

        }
        cout << endl;
        break;
        case 10:
            durum = false;
            break;
        default:
            cout << "Hiçbiri seçilmedi Lütfen Doðru Tuþlama Yapýnýz" << endl;

        }
        cout << endl << endl;
    }


    return 0;
}
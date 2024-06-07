/****************************************************************************
**					SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				    B�LG�SAYAR M�HEND�SL��� B�L�M�
**				          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...:          2
**				��RENC� ADI...............: UMUT ARDA VURAL
**				��RENC� NUMARASI.:B231210081
**				DERS GRUBU����: A
****************************************************************************/

#include <iostream> // temel k�t�phabe 
#include <ctime> // zaman i�lemleri 
#include <chrono> // bilgisiyardan zaman al�rken kullanmak i�in internette buldum 

using namespace  std;
using namespace std::chrono; // zaman i�in 

system_clock::time_point custom_date;

class hesap {

private:
    // GEREKL� OLAN TANIMLAMALAR 
    int modi�lemi;
    int a, b, c, d;
    double bakiye;
    string ad;
    string soyad;
    double genelhesapnumaras�;
    double �zelhesapnumaras�;
    int d��ardantarihal;
    double kaydedicide�er;
    double kaydedicide�er2;
    double ge�ici;
    double ge�ici2;
    double ge�ici3;
    double ge�ici4;
    int g�nfark;
    double kriptoparamiktar�;
    double ge�ici5;
    double ge�ici6;
    double kriptoparade�eri = 1;
    double ge�icig�nfark1;
    double ge�icig�nfark2;
    int g�nsaya� = 1;
    int g�nsaya�2 = 1;
    int g�nsaya�3 = 1;
    double sat�lcakmiktar;
    double al�ncakmiktar;

public:


    string getisim() const {
        return ad;
    }

    string getsoyad() const {
        return soyad;
    }

    // GENEL HESAP NUMARASINI 1DAN BA�LATTIM   STAT�CLE KONTROL ETT�M

    void genelhesapa�() {
        cout << endl << "l�tfen ad�n�z� giriniz :";
        cin >> ad;
        cout << "l�tfen soyad�n�z� giriniz :";
        cin >> soyad;
        cout << "Hesap numaran�z  gelen numara ka��nc� hesap oldu�unu g�stericektir " << endl;
        static int saya� = 1;
        genelhesapnumaras� = saya�;
        cout << "Hesap numaran�z : " << saya�;
        saya�++;

    }

    // �ZEL HESAP NUMARASINI 6DAN BA�LATTIM  
    void �zelhesapa�() {
        cout << endl << "l�tfen ad�n�z� giriniz : ";
        cin >> ad; cout << endl;
        cout << "l�tfen soy ad�n�z� giriniz : ";
        cin >> soyad;  cout << endl;
        cout << "Hesap numaran�z  gelen numara ka��nc� hesap oldu�unu g�stericektir !!! ";  cout << endl;
        static int saya��zel = 6;
        �zelhesapnumaras� = saya��zel;
        cout << "Hesap numaran�z : " << saya��zel;
        saya��zel++;
    }
    void bakiyeg�r�nt�le() {
        cout << "Hesab�n�zdaki bakiye : " << bakiye << " TL";
    }
    void �zelhesapbakiyeg�r�nt�le()
    {
        cout << " Hesap Bakiyeniz ";
        cout << bakiye << " TL";
    }
    // Kurucu fonksiyon
    double Hesapba�lang��bakiye(double baslangicBakiye) {
        bakiye = baslangicBakiye;
        return bakiye;
    }
    double kriptoparamiktar��(double ba�alng��kriptoparamikta�) {
        kriptoparamiktar� = ba�alng��kriptoparamikta�;
        return kriptoparamiktar�;
    }
    // Bakiye �ekme i�lemi // 
    void bakiyeCek(double miktar) {
        if (miktar > 0 and miktar <= bakiye) {
            bakiye -= miktar;
            cout << "Bakiyeden " << miktar << " TL �ekildi." << endl;
            cout << " Kalan bakiye miktar�n�z : " << bakiye;
        }
        else {
            cout << "Ge�ersiz miktar veya yetersiz bakiye!" << endl;
        }
    }
    // Girilen miktar� kontrol ettim bakiye yeterli olup olmad��� 
    void kriptoparal() {
        cout << "Almak istedi�iniz miktar� giriniz ";
        cin >> al�ncakmiktar;
        cout << endl;
        if (al�ncakmiktar * kriptoparade�eri <= bakiye) {
            bakiye = bakiye - (al�ncakmiktar * kriptoparade�eri);
            kriptoparamiktar� = al�ncakmiktar + kriptoparamiktar�;
            cout << "Yeni bakiyeniz ";
            cout << bakiye << endl;
            cout << "Yeni kriptopara miktar�n�z ";
            cout << kriptoparamiktar�;
        }
        else { cout << "Ge�ersiz miktar veya yetersiz bakiye!" << endl; }
    }
    void kriptoparasat() {
        cout << "�uanki kripto para miktar�n�z : " << kriptoparamiktar� << endl;
        cout << "Satmak istedi�iniz kripto para  miktar� giriniz : ";
        cin >> sat�lcakmiktar;
        if (sat�lcakmiktar <= kriptoparamiktar�) {
            bakiye = sat�lcakmiktar * kriptoparade�eri + bakiye;
            kriptoparamiktar� = kriptoparamiktar� - sat�lcakmiktar;
            cout << endl << "Yeni bakiye :" << bakiye << endl;
            cout << "G�ncellenen kripto para miktar�n�z : " << kriptoparamiktar�;

        }
        else { cout << "Ge�ersiz miktar veya yetersiz bakiye!" << endl; }
    }
    // Bakiye y�kleme i�lemi //
    void bakiyeYukle(double miktar) {
        if (miktar > 0) {
            bakiye = bakiye + miktar;
            cout << "Bakiyeye " << miktar << " TL y�klendi." << endl;
            cout << "Hesab�n�zdaki yeni bakiyeniz : " << bakiye << endl;
            cout << "Hesab�n�zdaki �uanki kripto para miktar� :" << kriptoparamiktar� << endl;

        }
        else {
            cout << "Ge�ersiz miktar!" << endl;
        }
    }

    // Bakiye sorgulama i�lemi
    double getBakiye() const {
        return bakiye;
    }
    double getkriptoparamiktar�()const {
        return kriptoparamiktar�;
    }
    void genelhesapbilgilerig�r�nt�le() {
        cout << "Hesap t�r� : " << "Genel Hesap" << endl;
        cout << "Hesap ad� : " << ad << endl;
        cout << "Hesap soyad� : "; cout << soyad << endl;
        cout << "Hesap numaras� : " << genelhesapnumaras� << endl;
        cout << "Hesap bakiye : " << bakiye << " TL" << endl;
        cout << "Hesap kripto para miktar�  : " << kriptoparamiktar� << endl;


    }
    void �zelhesapbilgilerig�r�nt�le() {
        cout << "Hesap t�r� : " << "�zel Hesap" << endl;
        cout << "Hesap ad� : " << ad << endl;
        cout << "Hesap soyad� : " << soyad << endl;
        cout << "Hesap numaras� : " << �zelhesapnumaras� << endl;
        cout << "hesap bakiye : " << bakiye << " TL" << endl;
        cout << "Hesap kripto para miktar�  : " << kriptoparamiktar� << endl;

        cout << endl;
    }


    void genelhesaptarihi�leleri() {
        ge�ici6 = kriptoparamiktar� * kriptoparade�eri;
        if (g�nsaya�2 == 1) {
            d��ardantarihal = g�nfark + 1;
            for (int i = 1; i <= d��ardantarihal; i++) {
                // G�nl�k %1 art��
                kriptoparade�eri += kriptoparade�eri * 0.01;

                // Her 15 g�nde bir %5 d���� ( 15.g�nde ilk y�zde bir art�� sa�lan�r  sonra d���s sa�lar )
                if (i % 15 == 0) {
                    kriptoparade�eri = kriptoparade�eri - kriptoparade�eri * 0.05;
                }
            }

        }
        else {
            d��ardantarihal = g�nfark;
            kaydedicide�er = kriptoparamiktar� * kriptoparade�eri;

            for (int i = 1; i <= d��ardantarihal; i++) {
                // G�nl�k %1 art��
                kriptoparade�eri += kriptoparade�eri * 0.01;

                // Her 15 g�nde bir %5 d���� ( 15.g�nde ilk y�zde bir art�� sa�lan�r  sonra d���s sa�lar )
                if (i % 15 == 0) {
                    kriptoparade�eri = kriptoparade�eri - kriptoparade�eri * 0.05;
                }
            }
        }

        ge�ici4 = kriptoparamiktar� * kriptoparade�eri;
        cout << d��ardantarihal << " g�n sonra hesab�n�zdaki kripto paran�n TL cinsinden de�eri : " << ge�ici4 << " TL" << endl;
        cout << "TL cinsinden kar�n�z :" << ge�ici4 - ge�ici6 << endl;
        cout << "Kripto paran�n birim olarak TLcinsinden de�eri " << kriptoparade�eri;
        g�nsaya�2++;
    }

    void �zelhesaptarihi�lemleri() {
        srand(time(0));
        ge�ici6 = kriptoparamiktar� * kriptoparade�eri;



        if (g�nsaya�3 == 1) {
            d��ardantarihal = g�nfark + 1;   // g�nfark�na 1 eklememin sebebi saat fark�ndan kaynaklanan hatay� d�zeltmek bu �ekilde hata ��zd�m d�zg�n olarak �al��makta //

            // e�er g�nfark� 30 a e�it ve k���kse bu if'e girer de�ilse a�adakine girer //

            if (d��ardantarihal <= 30) {
                a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 aras�nda de�er �retiriz //
                for (int i = 1; i <= d��ardantarihal; i++) {
                    // G�nl�k %5 art��
                    kriptoparade�eri += kriptoparade�eri * 0.05;

                    // rasgele 3 g�nde  %10 d����
                    if (i == c || i == a || i == b) {
                        kriptoparade�eri = kriptoparade�eri - kriptoparade�eri * 0.1;
                    }
                }
            }
            else
            {
                d = d��ardantarihal % 30;
                for (int y = 1; y <= d; y++) {
                    a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 aras�nda de�er �retiriz //

                    for (int i = 1; i <= 30; i++) {
                        // G�nl�k %5 art��
                        kriptoparade�eri += kriptoparade�eri * 0.05;

                        // rasgele 3 g�nde  %10 d����
                        if (i == c || i == a || i == b) {
                            kriptoparade�eri = kriptoparade�eri - kriptoparade�eri * 0.1;
                        }
                    }

                }
                modi�lemi = d��ardantarihal - (d * 30);
                a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 aras�nda de�er �retiriz //                        ;   
                if (modi�lemi > 0 and modi�lemi < 30) {
                    for (int z = 1; z <= modi�lemi; z++) {
                        /// mod ald�ktan sonraki aradaki g�n fark�na g�re tekrar hesaplans�n  //
                        // yani 65 g�n girilirse 30 a g�re modunu ald���mda modu 2 ��kar d�ng� 60 defa d�ner geri kalan 5 defa d�nmesi i�in bunu uyguluyorum   //                                                      

                        // G�nl�k %5 art��
                        kriptoparade�eri += kriptoparade�eri * 0.05;

                        // rasgele 3 g�nde  %10 d���� //
                        if (c == z || a == z || z == b) {
                            kriptoparade�eri = kriptoparade�eri - kriptoparade�eri * 0.1;

                        }

                    }
                }

            }

        }

        else {

            d��ardantarihal = g�nfark;

            // e�er g�nfark� 30 a e�it ve k���kse bu if'e girer de�ilse a�adakine girer //

            if (d��ardantarihal <= 30) {
                a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 aras�nda de�er �retiriz //
                for (int i = 1; i <= d��ardantarihal; i++) {
                    // G�nl�k %5 art��
                    kriptoparade�eri += kriptoparade�eri * 0.05;

                    // rasgele 3 g�nde  %10 d����
                    if (i == c || i == a || i == b) {
                        kriptoparade�eri = kriptoparade�eri - kriptoparade�eri * 0.1;
                    }
                }
            }
            else
            {
                d = d��ardantarihal % 30;
                for (int y = 1; y <= d; y++) {
                    a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 aras�nda de�er �retiriz //

                    for (int i = 1; i <= 30; i++) {
                        // G�nl�k %5 art��
                        kriptoparade�eri += kriptoparade�eri * 0.05;

                        // rasgele 3 g�nde  %10 d����
                        if (i == c || i == a || i == b) {
                            kriptoparade�eri = kriptoparade�eri - kriptoparade�eri * 0.1;
                        }
                    }

                }
                modi�lemi = d��ardantarihal - (d * 30);
                a = rand() % 30 + 1;                        b = rand() % 30 + 1;                        c = rand() % 30 + 1;  // 1 ile 30 aras�nda de�er �retiriz //                           
                if (modi�lemi > 0 and modi�lemi < 30) {
                    for (int z = 1; z <= modi�lemi; z++) {
                        /// mod ald�ktan sonraki aradaki g�n fark�na g�re tekrar hesaplans�n  //
                        // yani 65 g�n girilirse 30 a g�re modunu ald���mda modu 2 ��kar d�ng� 60 defa d�ner geri kalan 5 defa d�nmesi i�in bunu uyguluyorum   //                                                      

                        // G�nl�k %5 art��
                        kriptoparade�eri += kriptoparade�eri * 0.05;

                        // rasgele 3 g�nde  %10 d���� //
                        if (z == c || z == a || z == b) {
                            kriptoparade�eri = kriptoparade�eri - kriptoparade�eri * 0.1;

                        }

                    }
                }

            }
        }

        ge�ici4 = kriptoparamiktar� * kriptoparade�eri;
        cout << d��ardantarihal << " g�n sonra hesab�n�zdaki kripto paran�n TL cinsinden de�eri : " << ge�ici4 << " TL" << endl;
        cout << "TL cinsinden kar�n�z :" << ge�ici4 - ge�ici6 << endl;
        cout << "Kripto paran�n birim olarak TLcinsinden de�eri " << kriptoparade�eri;
        g�nsaya�3++;

    }
    // sistem tarihini almak i�in kulland���m fonksiyon 
    void sistemTarihiniGoster() {
        auto now = system_clock::now();

        // E�er �nceden belirlenmi� bir tarih varsa, onu g�ster
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

    // sistem tarihini ayarlay�p �nceki tarih ile aras�ndaki fark� buluruz ona g�re i�lem yapar�z 
    void sistemTarihiniAyarla(int gun, int ay, int yil) {
        struct tm new_timeinfo = { 0 };
        new_timeinfo.tm_mday = gun;
        new_timeinfo.tm_mon = ay - 1;
        new_timeinfo.tm_year = yil - 1900;

        auto new_time = mktime(&new_timeinfo);
        custom_date = system_clock::from_time_t(new_time);

        // �u anki zaman� al
#pragma warning(disable : 4996)
        auto now = system_clock::now();
        auto now_time = system_clock::to_time_t(now);
        struct tm* now_timeinfo = localtime(&now_time);

        // Yeni zaman� �u andan hesapla
        auto new_now = system_clock::from_time_t(mktime(&new_timeinfo));
        auto diff = new_now - system_clock::from_time_t(now_time);

        // �nceki tarih ile yeni tarih aras�ndaki fark� hesapla
        duration<double> fark = diff;
        if (g�nsaya� == 1) {
            g�nfark = fark.count() / (3600 * 24);
            ge�icig�nfark1 = g�nfark;
            ge�icig�nfark2 = ge�icig�nfark1;
        }
        else
        {
            g�nfark = fark.count() / (3600 * 24);
            ge�icig�nfark1 = g�nfark;
            g�nfark = g�nfark - ge�icig�nfark2;
            ge�icig�nfark2 = g�nfark;
        }
        g�nsaya�++;
        if (g�nsaya�2 == 1)
            cout << "�nceki ve Yeni Tarih Aras�ndaki Fark: " << g�nfark + 1 << " g�n" << endl;
        else
        {
            cout << "�nceki ve Yeni Tarih Aras�ndaki Fark: " << g�nfark << " g�n" << endl;

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
    int hesaonumaras�al;
    int k = 0;
    int �e�im;
    int g�n;
    int ay;
    int y�l;
    hesap hesap1, hesap2, hesap3, hesap4, hesap5, hesap6, hesap7, hesap8, hesap9, hesap10;
    int saya�tarihi�lemleri1;
    int se�imm = 1;
    int kk;
    int mm;

    while (durum) {
        cout << "1. Genel Hesap A� " << endl;
        cout << "2. �zel Hesap A�" << endl;
        cout << "3. Bakiye Ekle" << endl;
        cout << "4. Bakiye �ek" << endl;
        cout << "5. Kripto para al  " << endl;
        cout << "6. Kripto para sat " << endl;
        cout << "7. Bakiye G�r�nt�le " << endl;
        cout << "8. A��lan Hesaplar� G�r�nt�le " << endl;
        cout << "9. Tarih i�lemleri  " << endl;
        cout << "10. Uygulamadan ��k�� " << endl;



        cout << "------------------" << endl;
        cout << "Se�im: ";
        cin >> n;
        switch (n) {
        case 1: cout << " Genel hesap a�may� �e�tiniz 5 defa genel hesap a�ma hakk�n�z vard�r " << endl; // GENEL HESAP A�MA //

            if (a == 1) {
                hesap1.genelhesapa�();
                hesap1.Hesapba�lang��bakiye(0);    hesap1.kriptoparamiktar��(0);
                a++;
            }
            else if (a == 2)
            {
                hesap2.genelhesapa�();
                hesap2.Hesapba�lang��bakiye(0);        hesap2.kriptoparamiktar��(0);
                a++;
            }
            else if (a == 3)
            {
                hesap3.genelhesapa�();                 hesap3.Hesapba�lang��bakiye(0);     hesap3.kriptoparamiktar��(0);
                a++;
            }
            else if (a == 4)
            {
                hesap4.genelhesapa�();                hesap4.Hesapba�lang��bakiye(0);          hesap4.kriptoparamiktar��(0);
                a++;
            }
            else if (a == 5)
            {
                hesap5.genelhesapa�();                hesap5.Hesapba�lang��bakiye(0);     hesap5.kriptoparamiktar��(0);
                a++;
            }
            else cout << " HATA ";


            break;
        case 2: cout << "�zel hesap a�ma en fazla 5 tane �zel hesap a�abilirsiniz  ";  //�zel hesap a�ma // 
            if (b == 1) {
                hesap6.�zelhesapa�();                hesap6.Hesapba�lang��bakiye(0);    hesap6.kriptoparamiktar��(0);

                b++;
            }

            else if (b == 2)
            {
                hesap7.�zelhesapa�();                   hesap7.Hesapba�lang��bakiye(0);    hesap7.kriptoparamiktar��(0);

                b++;
            }
            else if (b == 3)
            {
                hesap8.�zelhesapa�();                   hesap8.Hesapba�lang��bakiye(0);    hesap8.kriptoparamiktar��(0);

                b++;
            }
            else if (b == 4)
            {
                hesap9.�zelhesapa�();                       hesap9.Hesapba�lang��bakiye(0);    hesap9.kriptoparamiktar��(0);

                b++;
            }
            else if (b == 5)
            {
                hesap10.�zelhesapa�();                 hesap10.Hesapba�lang��bakiye(0);    hesap10.kriptoparamiktar��(0);

                b++;
            }
            else cout << " HATA ";
            break;

            // hesap numaras� kontrol� yapt�m  gerekli arakl�kta oldu�unu sa�lamak i�in 
        case 3:do {
            cout << "l�tfen bakiye y�klemek istedi�iniz hesap numaras�n� giriniz "; cin >> d;

        } while (d < 0 or 10 < d); // bakiye y�kle 

        if (d == 1) {
            hesap1.kriptoparamiktar��(0);
            cout << "hesab�n�zdaki bakiye " << hesap1.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;
            hesap1.bakiyeYukle(miktar);
            cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap1.getBakiye() << " TL";
            cout << endl;
        }
        else if (d == 2) {
            cout << "hesab�n�zdaki bakiye " << hesap2.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap2.bakiyeYukle(miktar);                cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap2.getBakiye();

        }
        else if (d == 3) {
            cout << "hesab�n�zdaki bakiye " << hesap3.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap3.bakiyeYukle(miktar); cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap3.getBakiye();
        }
        else if (d == 4) {
            cout << "hesab�n�zdaki bakiye " << hesap4.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap4.bakiyeYukle(miktar);  cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap4.getBakiye() << " TL";
        }
        else if (d == 5) {
            cout << "hesab�n�zdaki bakiye " << hesap5.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap5.bakiyeYukle(miktar); cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap5.getBakiye() << " TL";
        }
        else if (d == 6) {
            cout << "hesab�n�zdaki bakiye " << hesap6.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap6.bakiyeYukle(miktar); cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap6.getBakiye() << " TL";
        }
        else if (d == 7) {
            cout << "hesab�n�zdaki bakiye " << hesap7.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap7.bakiyeYukle(miktar);  cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap7.getBakiye() << " TL";
        }
        else if (d == 8) {
            cout << "hesab�n�zdaki bakiye " << hesap8.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap8.bakiyeYukle(miktar); cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap8.getBakiye() << " TL";
        }
        else if (d == 9) {
            cout << "hesab�n�zdaki bakiye " << hesap9.getBakiye() << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap9.bakiyeYukle(miktar); cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap9.getBakiye() << " TL";
        }
        else if (d == 10) {
            cout << "hesab�n�zdaki bakiye " << hesap10.getBakiye() << " TL" << endl;
            cout << "y�klemek istedi�iniz miktar� giriniz ";
            cin >> miktar;

            hesap10.bakiyeYukle(miktar); cout << endl << "hesab�n�zdaki yeni bakiye : " << hesap10.getBakiye() << " TL";
        }
        else cout << "hatal� tu�lama";
        break;
        case 4: // bakiye �ekme // 
            do {
                cout << " Bakiye �ekmek istedi�iniz hesab�n numaras�n� girermisiniz  "; cin >> g; cout << endl;
            } while (g > 10 or g < 0);

            if (g == 1) {
                cout << "hesab�n�zdaki bakiye " << hesap1.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap1.bakiyeCek(miktar);
                cout << endl << "yeni bakiye " << hesap1.getBakiye() << endl;
            }
            else if (g == 2) {
                cout << "hesab�n�zdaki bakiye " << hesap2.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap2.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap2.getBakiye();

            }
            else if (g == 3) {
                cout << "hesab�n�zdaki bakiye " << hesap3.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap3.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap3.getBakiye();

            }
            else if (g == 4) {
                cout << "hesab�n�zdaki bakiye " << hesap4.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap4.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap4.getBakiye();

            }
            else if (g == 5) {
                cout << "hesab�n�zdaki bakiye " << hesap5.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap5.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap5.getBakiye();

            }
            else if (g == 6) {
                cout << "hesab�n�zdaki bakiye " << hesap6.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap6.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap6.getBakiye();

            }
            else if (g == 7) {
                cout << "hesab�n�zdaki bakiye " << hesap7.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap7.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap7.getBakiye();

            }
            else if (g == 8) {
                cout << "hesab�n�zdaki bakiye " << hesap8.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap8.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap8.getBakiye();

            }
            else if (g == 9) {
                cout << "hesab�n�zdaki bakiye " << hesap9.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap9.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap9.getBakiye();

            }
            else if (g == 10) {
                cout << "hesab�n�zdaki bakiye " << hesap10.getBakiye() << endl;

                cout << " �ekmek istedi�iniz miktar� giriniz ";
                cin >> miktar;

                hesap10.bakiyeCek(miktar);                cout << endl << "yeni bakiye " << hesap10.getBakiye();

            }
            break;
        case 5: do { cout << "Ka� numaral� hesapta kripto para almak istiyorsunuz "; cin >> kk; } while (kk < 0 or 10 < kk);
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
        case 6: do { cout << "ka� numaral� hesapta kripto para satmak istiyorsunuz "; cin >> mm; cout << endl; } while (mm < 0 or 10 < mm);
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
        case 7: // bakiye g�r�nt�le //
            cout << "Bakiye g�r�nt�lemek istedi�iniz hesap�n numars�n� giriniz"; do { cin >> c; } while (c < 0 or c>10); cout << endl;
            if (c == 1)
            {
                hesap1.bakiyeg�r�nt�le();

            }
            else if (c == 2) {
                hesap2.bakiyeg�r�nt�le();
            }
            else if (c == 3) {
                hesap3.bakiyeg�r�nt�le();
            }
            else if (c == 4) {
                hesap4.bakiyeg�r�nt�le();
            }
            else if (c == 5) {
                hesap5.bakiyeg�r�nt�le();
            }
            else if (c == 6) {
                hesap6.�zelhesapbakiyeg�r�nt�le();
            }
            else if (c == 7) {
                hesap7.�zelhesapbakiyeg�r�nt�le();
            }
            else if (c == 8) {
                hesap8.�zelhesapbakiyeg�r�nt�le();
            }
            else if (c == 9) {
                hesap9.�zelhesapbakiyeg�r�nt�le();
            }
            else if (c == 10) {
                hesap10.�zelhesapbakiyeg�r�nt�le();
            }
            break;
        case 8:
            do {
                cout << "Bilgilerini g�rmek istedi�iniz hesab�n numaras�n� giriniz ";
                cin >> m; cout << endl;
            } while (m < 0 or m>10); cout << endl;

            if (m == 1) {
                hesap1.genelhesapbilgilerig�r�nt�le();

            }
            else if (m == 2) {
                hesap2.genelhesapbilgilerig�r�nt�le();

            }
            else if (m == 3) {
                hesap3.genelhesapbilgilerig�r�nt�le();

            }
            else if (m == 4) {
                hesap4.genelhesapbilgilerig�r�nt�le();

            }
            else if (m == 5) {
                hesap5.genelhesapbilgilerig�r�nt�le();

            }
            else if (m == 6) {
                hesap6.�zelhesapbilgilerig�r�nt�le();

            }
            else if (m == 7) {
                hesap7.�zelhesapbilgilerig�r�nt�le();

            }
            else if (m == 8) {
                hesap8.�zelhesapbilgilerig�r�nt�le();

            }
            else if (m == 9) {
                hesap9.�zelhesapbilgilerig�r�nt�le();

            }
            else if (m == 10) {
                hesap10.�zelhesapbilgilerig�r�nt�le();

            }
            break;
        case 9: do {
            cout << "hangi hesab�n tarih i�lemlerin i� yapmak istiyorsunuz   (Tarihi i�lemi yapt���n�z hesab�n tarihi de�i�ecektir di�er hesaplar�n tarihi etkilenmicektir )  " << endl; cin >> k;
        } while (k < 0 or k>10);

        if (k == 1) {

            cout << " Bir numaral� hesab�n tarih i�lemlerini yap�caks�n�z";
            hesap1.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap1.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap1.genelhesaptarihi�leleri();
            cout << endl;                hesap1.sistemTarihiniGoster();    cout << endl;



        }
        else if (k == 2) {
            hesap2.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap2.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap2.genelhesaptarihi�leleri();
            cout << endl;                hesap2.sistemTarihiniGoster();   cout << endl;

        }
        else if (k == 3) {
            hesap3.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap3.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap3.genelhesaptarihi�leleri();
            cout << endl;
            hesap3.sistemTarihiniGoster();   cout << endl;

        }
        else if (k == 4) {
            hesap4.sistemTarihiniGoster();   cout << endl;
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap4.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap4.genelhesaptarihi�leleri();
            cout << endl;
            hesap4.sistemTarihiniGoster();    cout << endl;

        }
        else if (k == 5) {
            hesap5.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap5.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap5.genelhesaptarihi�leleri();
            cout << endl;
            hesap5.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 6) {
            hesap6.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap6.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap6.�zelhesaptarihi�lemleri();
            cout << endl;
            hesap6.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 7) {
            hesap7.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap7.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap7.�zelhesaptarihi�lemleri();
            cout << endl;
            hesap7.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 8) {
            hesap8.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap8.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap8.�zelhesaptarihi�lemleri();
            cout << endl;
            hesap8.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 9) {
            hesap9.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap9.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap9.�zelhesaptarihi�lemleri();
            cout << endl;
            hesap9.sistemTarihiniGoster();
            cout << endl;

        }
        else if (k == 10) {
            hesap10.sistemTarihiniGoster();
            cout << "G�n� giriniz  :";
            cin >> g�n;
            cout << "ay� giriniz   :";
            cin >> ay;
            cout << "y�l� giriniz  :";
            cin >> y�l;
            hesap10.sistemTarihiniAyarla(g�n, ay, y�l);
            hesap10.�zelhesaptarihi�lemleri();
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
            cout << "Hi�biri se�ilmedi L�tfen Do�ru Tu�lama Yap�n�z" << endl;

        }
        cout << endl << endl;
    }


    return 0;
}
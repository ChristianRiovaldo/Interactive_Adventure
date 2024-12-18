#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;
using namespace this_thread;
using namespace chrono;

struct User {
    string nama, pilihPermata;
    int pilih, jawaban, jawab[4];
} user;

void fibonacci(int *a) {
    int arr[13];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i < 13; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    *a = arr[12];
}

void hitungDet(int arr[2][2], int *det) {
    *det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
}

int fpb(int a, int b) {
    if(b == 0) return a;
    return fpb(b, a % b);
}

int faktorial(int n) {
    if(n < 2) return 1;
    return n * faktorial(n - 1);
}

void HartaKarun() {
    cout << "\t == HARTA KARUN ==" << endl << endl; sleep_for(seconds(1));
    cout << "Kamu memasuki ruangan yang dipenuhi kilauan emas dan permata." << endl; sleep_for(seconds(1));
    cout << "Kamu melihat peti besar yang berisi tiga permata legendaris dengan warna yang berbeda." << endl << endl; sleep_for(seconds(1));
    cout << "\t |merah|   |biru|   |hijau|" << endl << endl; sleep_for(seconds(1));
    cout << "Kamu hanya bisa memilih salah satu dari ketiga permata legendaris." << endl; sleep_for(seconds(1));
    cout << "Mana yang akan kamu pilih? "; cin >> user.pilihPermata; cout << endl; sleep_for(seconds(1));

    if(user.pilihPermata == "merah") {
        cout << "Kamu merasakan panas dan kekuatan mengalir di tubuhmu." << endl; sleep_for(seconds(1));
        cout << "Permata ini memberimu keberanian yang luar biasa." << endl; sleep_for(seconds(1));
    }

    else if(user.pilihPermata == "biru") {
        cout << "Permata ini memberimu perasaan tenang dan aman." << endl; sleep_for(seconds(1));
        cout << "Kekuatan perlindungan menyelimuti dirimu." << endl; sleep_for(seconds(1));
    }

    else if(user.pilihPermata == "hijau") {
        cout << "Energi damai mengalir dari permata hijau, memberimu kejernihan hati dan kebahagiaan sejati." << endl; sleep_for(seconds(1));
    }

    else {
        HartaKarun();
    }

    cout << "Dengan permata pilihanmu di tangan, kamu berjalan keluar dari kuil yang mulai runtuh." << endl << endl; sleep_for(seconds(1));
    cout << "Selamat " << user.nama << "! " << "Kamu berhasil membawa pulang harta karun legenda." << endl << endl; sleep_for(seconds(1));
    cout << "\t =======" << endl;
    cout << "\t THE END" << endl;
    cout << "\t =======" << endl;
}

void ruangPenjaga() {
    cout << "\t == RUANG PENJAGA ==" << endl << endl; sleep_for(seconds(1));
    cout << "Kamu akhirnya mencapai ruang terakhir di mana seorang penjaga kuil berdiri." << endl; sleep_for(seconds(1));
    cout << "Kamu memiliki tiga pilihan sebelum mencapai harta karun." << endl; sleep_for(seconds(1));
    cout << "1. Bertarung dengan Penjaga Kuil." << endl; sleep_for(seconds(1));
    cout << "2. Memecahkan Teka-teki Penjaga." << endl; sleep_for(seconds(1));
    cout << "3. Mengelabui Penjaga dan Menyelinap Masuk." << endl << endl; sleep_for(seconds(1));
    cout << "Tentukan pilihanmu: "; cin >> user.pilih; cout << endl; sleep_for(seconds(1));

    if(user.pilih == 1) {
        cout << "Kamu mengerahkan semua kekuatan dan keterampilanmu untuk mengalahkannya." << endl; sleep_for(seconds(1));
        cout << "Kamu berdiri sebagai pemenang, pintu menuju harta karun terbuka." << endl << endl; sleep_for(seconds(3));
        HartaKarun();
    }

    else if(user.pilih == 2) {
        cout << "Penjaga memberikan teka-teki terakhir, lebih sulit dari semua yang sebelumnya" << endl; sleep_for(seconds(1));
        cout << "Kamu diminta mencari tahu bilangan fibonacci ke-13!" << endl; sleep_for(seconds(1));
        cout << "Masukkan jawabanmu: "; cin >> user.jawaban; sleep_for(seconds(1));
        int hasil = 0;
        fibonacci(&hasil);
        while(user.jawaban != hasil) {
            cout << "Jawaban kamu salah, coba lagi: "; cin >> user.jawaban; sleep_for(seconds(1));
        }
        cout << "Jawabanmu benar, penjaga bergeming dan perlahan bergeser, memperlihatkan akses ke harta karun." << endl << endl; sleep_for(seconds(3));
        HartaKarun();
    }

    else if(user.pilih == 3) {
        cout << "Dengan langkah hati-hati, kamu menunggu saat yang tepat ketika penjaga membalikkan badan." << endl; sleep_for(seconds(1));
        cout << "Kamu menyelinap di belakangnya dan bergerak menuju pintu besar." << endl; sleep_for(seconds(1));
        cout << "Dengan langkah perlahan, kamu masuk ke ruangan harta karun tanpa terdeteksi." << endl << endl; sleep_for(seconds(3));
        HartaKarun();
    }

    else {
        ruangPenjaga();
    }
}

void episode3() {
    cout << "\t == EPISODE 3: PENJELAJAHAN TERAKHIR DI KUIL TERSEMBUNYI ==" << endl << endl; sleep_for(seconds(1));
    cout << "Kamu kini berdiri di persimpangan yang gelap dengan ukiran-ukiran misterius." << endl; sleep_for(seconds(1));
    cout << "Di depan terdapat tiga pintu dengan simbol-simbol aneh." << endl << endl; sleep_for(seconds(1));
    cout << "\t [ 1 ]   [ 2 ]   [ 3 ]" << endl << endl; sleep_for(seconds(1));
    cout << "1. Pintu dengan Simbol Matahari." << endl; sleep_for(seconds(1));
    cout << "2. Pintu dengan Simbol Bulan." << endl; sleep_for(seconds(1));
    cout << "3. Pintu dengan Simbol Bintang." << endl << endl; sleep_for(seconds(1));
    cout << "Pintu mana yang akan kamu pilih? "; cin >> user.pilih; cout << endl; sleep_for(seconds(1));

    if(user.pilih == 1) {
        cout << "-- Pintu dengan Simbol Matahari --" << endl; sleep_for(seconds(1));
        cout << "Kamu memasuki ruangan yang panas, tungku api menyala terang di tengah ruangan." << endl; sleep_for(seconds(1));
        cout << "Kamu memutar roda di samping tungku, merasakan panas yang menyengat." << endl; sleep_for(seconds(1));
        cout << "Pintu rahasia terbuka, memperlihatkan lorong yang mengarah ke ruangan lain." << endl << endl; sleep_for(seconds(3));
        ruangPenjaga();
    }

    else if(user.pilih == 2) {
        cout << "-- Pintu dengan Simbol Bulan --" << endl; sleep_for(seconds(1));
        cout << "Cahaya redup menyelimuti ruangan basah yang dipenuhi genangan air kecil." << endl; sleep_for(seconds(1));
        cout << "Kamu melangkah ke arah kolam kecil di ujung ruangan." << endl; sleep_for(seconds(1));
        cout << "Kamu berenang melewatinya hingga mencapai tangga tua yang mengarah ke ruang utama kuil." << endl << endl; sleep_for(seconds(3));
        ruangPenjaga();
    }

    else if(user.pilih == 3) {
        cout << "-- Pintu dengan Simbol Bintang --" << endl; sleep_for(seconds(1));
        cout << "Kamu melihat ukiran di dinding yang berisi teka-teki." << endl; sleep_for(seconds(1));
        cout << "Di dinding tersebut berisi 4 angka yang disusun membentuk matriks 2x2." << endl << endl; sleep_for(seconds(1));
        cout << "\t |12  3|" << endl;
        cout << "\t |16  8|" << endl << endl; sleep_for(seconds(1));
        cout << "Kamu diminta mencari tahu berapa determinan matriks tersebut." << endl; sleep_for(seconds(1));
        cout << "Masukkan jawabanmu: "; cin >> user.jawaban; cout << endl; sleep_for(seconds(1));
        int matriks[2][2] = {{12, 3}, {16, 8}};
        int hasil = 0;
        hitungDet(matriks, &hasil);
        while(user.jawaban != hasil) {
            cout << "Jawaban kamu salah, coba lagi: "; cin >> user.jawaban; sleep_for(seconds(1));
        }
        cout << "Kamu benar, pintu tersembunyi terbuka, mempersilakanmu melangkah ke ruangan baru." << endl << endl; sleep_for(seconds(3));
        ruangPenjaga();
    }

    else {
        episode3();
    }

}

void episode2() {
    cout << "\t == EPISODE 2: MEMASUKI LORONG MISTERIUS ==" << endl << endl; sleep_for(seconds(1));
    cout << "Setelah memilih pintu dan berhasil masuk ke dalam kuil, kamu menemukan lorong-lorong yang lebih dalam." << endl; sleep_for(seconds(1));
    cout << "Suara gemericik air dan hembusan angin menambah suasana mencekam di tempat ini." << endl; sleep_for(seconds(1));
    cout << "Kamu berjalan lebih jauh hingga menemukan persimpangan." << endl << endl; sleep_for(seconds(1));
    cout << "\t         ( 3 )        " << endl;
    cout << "\t ( 1 )           ( 2 )" << endl << endl; sleep_for(seconds(1));
    cout << "1. Ada cahaya biru yang terpancar dari lorong di kiri, seperti kristal yang bercahaya." << endl; sleep_for(seconds(1));
    cout << "2. Di kanan, ada pintu besi yang terbuka sedikit, di dalamnya kamu bisa melihat bayangan benda bergerak." << endl; sleep_for(seconds(1));
    cout << "3. Di depan, lorong gelap tanpa cahaya mengarah ke ruangan yang penuh kegelapan." << endl << endl; sleep_for(seconds(1));
    cout << "Persimpangan mana yang akan kamu pilih? "; cin >> user.pilih; cout << endl; sleep_for(seconds(1));

    if(user.pilih == 1) {
        cout << "-- Ruang Kristal Biru --" << endl; sleep_for(seconds(1));
        cout << "Kamu memasuki ruangan penuh kristal biru yang bercahaya indah." << endl;sleep_for(seconds(1));
        cout << "Di tengahnya ada meja batu dengan peta kuil." << endl << endl; sleep_for(seconds(1));

        cout << "-- Jebakan Cahaya --" << endl; sleep_for(seconds(1));
        cout << "Saat kamu mencoba mengambil peta itu, cahaya dari kristal membentuk pola aneh di dinding." << endl; sleep_for(seconds(1));
        cout << "Kamu harus menghindari cahaya yang berubah-ubah agar tidak terkena jebakan sinar panas." << endl; sleep_for(seconds(1));

        cout << "-- Pintu Rahasia --" << endl; sleep_for(seconds(1));
        cout << "Setelah berhasil, kamu menemukan pintu rahasia yang terbuka. Kamu melangkah lebih jauh ke dalam kuil." << endl << endl; sleep_for(seconds(1));
        cout << "Selamat " << user.nama << "!" << endl;
        cout << "Kamu mendapatkan peta kuno kuil dan selamat masuk ke ruangan berikutnya." << endl << endl; sleep_for(seconds(3));
        episode3();
    }

    else if(user.pilih == 2) {
        cout << "-- Penjaga Misterius --" << endl; sleep_for(seconds(1));
        cout << "Ketika memasuki ruangan ini, kamu melihat bayangan besar bergerak." << endl; sleep_for(seconds(1));
        cout << "Ternyata itu adalah patung golem yang hidup dan menghalangi jalanmu." << endl << endl; sleep_for(seconds(1));

        cout << "-- Teka-Teki untuk Melewati Golem --" << endl; sleep_for(seconds(1));
        cout << "Untuk melewati penjaga ini, kamu harus memecahkan teka-teki yang tertulis di dinding." << endl; sleep_for(seconds(1));
        cout << "Jika salah, golem akan menyerang." << endl << endl; sleep_for(seconds(1));
        int angka[4] = {15, 11, 5, 12}, benar = 0;
        cout << "Terdapat 5 angka di dinding, yaitu 15, 11, 5, dan 12." << endl; sleep_for(seconds(1));
        cout << "Kamu diminta untuk mengurutkannya dari yang terkecil." << endl; sleep_for(seconds(1));

        for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3 - i; j++) {
                    if(angka[j] > angka[j + 1]) {
                        int temp = angka[j];
                        angka[j] = angka[j + 1];
                        angka[j + 1] = temp;
                    }
                }
            }

        while(benar != 4) {
            benar = 0;
            cout << "Masukkan jawabanmu: ";
            for(int i = 0; i < 4; i++) {
                cin >> user.jawab[i];
            }

            for(int i = 0; i < 4; i++) {
                if(user.jawab[i] == angka[i]) {
                    benar++;
                }
            }

            if(benar != 4) {
                cout << "Jawaban kamu salah, golem menyerangmu." << endl; sleep_for(seconds(1));
                cout << "Cobalah lagi untuk menjawabnya." << endl; sleep_for(seconds(1));
            }
        }
        cout << "Kamu berhasil memecahkan teka-tekinya." << endl << endl; sleep_for(seconds(1));

        cout << "-- Jalan Baru Terbuka --" << endl; sleep_for(seconds(1));
        cout << "Setelah memecahkan teka-teki, golem bergeser, memperlihatkan tangga yang mengarah ke ruangan bawah." << endl << endl; sleep_for(seconds(1));
        cout << "Selamat " << user.nama << "!" << endl;
        cout << "Kamu berhasil melewati penjaga dan menemukan jalan baru." << endl << endl; sleep_for(seconds(3));
        episode3();
    }

    else if(user.pilih == 3) {
        cout << "-- Lorong Gelap Tanpa Cahaya --" << endl; sleep_for(seconds(1));
        cout << "Kamu masuk ke lorong gelap yang menimbulkan perasaan tak nyaman." << endl; sleep_for(seconds(1));
        cout << "Langkahmu melambat karena jalan ini terasa licin." << endl; sleep_for(seconds(1));
        cout << "sfx: suara hantu berbisik..." << endl; sleep_for(seconds(1));
        cout << "Di dalam kegelapan, kamu mendengar suara bisikan." << endl; sleep_for(seconds(1));
        cout << "Semakin jauh kamu melangkah, semakin kuat suara itu." << endl; sleep_for(seconds(1));
        cout << "Di ujung lorong, kamu melihat patung dewa-dewa kuno yang memancarkan aura mistis." << endl << endl; sleep_for(seconds(1));

        cout << "-- Teka-Teki Gaib --" << endl; sleep_for(seconds(1));
        cout << "Untuk melanjutkan, kamu harus menjawab pertanyaan gaib yang keluar dari patung." << endl; sleep_for(seconds(1));
        cout << "Kamu diminta untuk mencari nilai dari enam faktorial (6!)." << endl; sleep_for(seconds(1));
        cout << "Masukkan jawabanmu: "; cin >> user.jawaban; sleep_for(seconds(1));
        while(user.jawaban != faktorial(6)) {
            cout << "Jawaban kamu salah, coba lagi: "; cin >> user.jawaban; sleep_for(seconds(1));
        }
        cout << "Jawaban kamu benar, pintu rahasia terbuka di belakang patung." << endl << endl; sleep_for(seconds(1));
        cout << "Selamat " << user.nama << "!" << endl;
        cout << "Kamu melangkah ke dalam ruangan tersembunyi." << endl << endl; sleep_for(seconds(3));
        episode3();
    }
    else {
        episode2();
    }

}

void episode1() {
    cout << "\t == EPISODE 1: MEMASUKI KUIL TERSEMBUNYI ==" << endl << endl; sleep_for(seconds(1));
    cout << "Setelah berhari-hari melalui hutan lebat, kamu akhirnya tiba di depan kuil tua." << endl; sleep_for(seconds(1));
    cout << "Pintu utama terbuka, menyambutmu masuk ke lorong gelap yang bercabang menjadi tiga pintu berbeda." << endl << endl; sleep_for(seconds(1));
    cout << "\t [ 1 ]   [ 2 ]   [ 3 ]" << endl << endl; sleep_for(seconds(1));
    cout << "Pintu mana yang akan kamu pilih? "; cin >> user.pilih; sleep_for(seconds(1));

    if(user.pilih == 1) {
        cout << "Kamu memasuki pintu pertama dan segera menemukan lorong yang lebih sempit." << endl; sleep_for(seconds(1));
        cout << "Tapi sepertinya jalan ini mengarah langsung ke dalam kuil." << endl << endl; sleep_for(seconds(1));

        cout << "-- Lorong Pendek dengan Teka-teki --" << endl; sleep_for(seconds(1));
        cout << "Kamu melihat tulisan di dinding yang bertuliskan teka-teki kuno." << endl; sleep_for(seconds(1));
        cout << "Jika kamu menjawab dengan benar, sebuah pintu rahasia terbuka yang mengarah lebih dalam ke kuil." << endl << endl; sleep_for(seconds(1));
        cout << "Di dinding itu terdapat dua angka, yaitu 186 dan 210." << endl; sleep_for(seconds(1));
        cout << "Kamu diminta mencari faktor persekutuan terbesar dari dua angka itu." << endl; sleep_for(seconds(1));
        cout << "Masukkan jawabanmu: "; cin >> user.jawaban; cout << endl; sleep_for(seconds(1));
        while(user.jawaban != fpb(186, 210)) {
            cout << "Jawaban kamu salah, coba lagi: "; cin >> user.jawaban; sleep_for(seconds(1));
        }
        cout << "Jawabanmu benar, sebuah pintu rahasia terbuka yang mengarah lebih dalam ke kuil." << endl << endl; sleep_for(seconds(1));

        cout << "-- Tangga Licin --" << endl; sleep_for(seconds(1));
        cout << "Kamu menaiki tangga batu yang licin. Hati-hati! Kalau tidak, kamu bisa tergelincir ke bawah." << endl; sleep_for(seconds(1));
        cout << "Dengan langkah perlahan, kamu berhasil melewati tangga tersebut." << endl; sleep_for(seconds(1));
        cout << "sfx: reruntuhan kecil..." << endl; sleep_for(seconds(1));
        cout << "Ada bebatuan jatuh di depan pintu berikutnya!" << endl; sleep_for(seconds(1));
        cout << "Kamu bisa melewatinya, tapi butuh keseimbangan yang baik." << endl; sleep_for(seconds(1));
        cout << "Dengan sigap, kamu menyeimbangkan diri dan berhasil melewati rintangan ini." << endl << endl; sleep_for(seconds(1));

        cout << "-- Lorong Gelap --" << endl; sleep_for(seconds(1));
        cout << "Lorong mulai terasa gelap dan pengap!" << endl; sleep_for(seconds(1));
        cout << "Di ujung lorong kamu melihat cahaya yang menandakan kamu sudah dekat dengan bagian utama kuil." << endl << endl; sleep_for(seconds(1));
        cout << "Selamat " << user.nama << "!" << endl;
        cout << "Kamu berhasil menemukan jalan tercepat menuju bagian dalam kuil." << endl << endl; sleep_for(seconds(3));
        episode2();
    }
    else if(user.pilih == 2) {
        cout << "Kamu memilih pintu kedua yang terlihat agak mencurigakan." << endl; sleep_for(seconds(1));
        cout << "Ketika kamu masuk, suasana mulai mencekam." << endl << endl; sleep_for(seconds(1));

        cout << "-- Lorong Penuh Sarang Laba-Laba --" << endl; sleep_for(seconds(1));
        cout << "Kamu harus menyibak sarang laba-laba yang tebal." << endl; sleep_for(seconds(1));
        cout << "Ketika kamu melangkah lebih jauh, lantai di bawahmu mulai bergetar." << endl; sleep_for(seconds(1));
        cout << "sfx: lantai runtuh..." << endl; sleep_for(seconds(1));
        cout << "Tiba-tiba, lantai di bawah kakimu runtuh, membuatmu jatuh ke ruangan di bawah." << endl; sleep_for(seconds(1));
        cout << "Kamu mencoba bangkit, tapi ruangan ini penuh dengan jebakan lainnya." << endl; sleep_for(seconds(1));
        cout << "Kamu menemukan tangga yang bisa mengembalikanmu ke awal lorong" << endl << endl; sleep_for(seconds(1));
        cout << "Sayang sekali! Kamu harus kembali ke awal dan mencoba pintu yang lain." << endl << endl; sleep_for(seconds(1));
        cout << "\t =======" << endl;
        cout << "\t THE END" << endl;
        cout << "\t =======" << endl;
    }
    else if(user.pilih == 3) {
        cout << "Kamu memilih pintu ketiga, yang terlihat aman tapi terasa dingin." << endl; sleep_for(seconds(1));
        cout << "Ternyata pintu ini mengarah ke lorong panjang dengan beberapa rintangan sederhana." << endl; sleep_for(seconds(1));
        cout << "Petualanganmu akan lebih lama di jalur ini." << endl << endl; sleep_for(seconds(1));

        cout << "-- Lorong Gelap --" << endl; sleep_for(seconds(1));
        cout << "Kamu memasuki lorong panjang yang gelap." << endl; sleep_for(seconds(1));
        cout << "Hanya diterangi cahaya remang dari kristal di dinding." << endl; sleep_for(seconds(1));
        cout << "Udara di sini terasa dingin dan membuat bulu kudukmu berdiri." << endl << endl; sleep_for(seconds(1));

        cout << "-- Kolam Air Dangkal --" << endl; sleep_for(seconds(1));
        cout << "Kamu tiba di sebuah kolam dangkal yang harus dilintasi." << endl; sleep_for(seconds(1));
        cout << "Airnya dingin dan agak berlumpur, tapi kamu berhasil melewatinya dengan hati-hati." << endl << endl; sleep_for(seconds(1));

        cout << "-- Tangga Batu Curam --" << endl; sleep_for(seconds(1));
        cout << "Setelah kolam, kamu menemukan tangga curam yang harus dinaiki perlahan-lahan." << endl; sleep_for(seconds(1));
        cout << "Tangga ini terasa licin, tapi kamu berhasil sampai ke atas." << endl << endl; sleep_for(seconds(1));

        cout << "-- Patung Kuno dengan Teka-Teki --" << endl; sleep_for(seconds(1));
        cout << "Kamu bertemu patung besar yang memegang batu kecil dengan ukiran misterius." << endl; sleep_for(seconds(1));
        cout << "Ketika disentuh, patung itu berputar dan mengeluarkan suara, 'Hanya yang cerdik yang akan selamat'." << endl << endl; sleep_for(seconds(1));
        cout << "Di batu kecil itu terukir angka 24 dan 32." << endl; sleep_for(seconds(1));
        cout << "Kamu diminta untuk mencari kelipatan persekutuan terkecil dari dua angka itu." << endl; sleep_for(seconds(1));
        cout << "Masukkan jawabanmu: "; cin >> user.jawaban; cout << endl; sleep_for(seconds(1));
        int kpk = (24 * 32) / fpb(24, 32);
        while(user.jawaban != kpk) {
            cout << "Jawaban kamu salah, coba lagi: "; cin >> user.jawaban; sleep_for(seconds(1));
        }
        cout << "Kamu menyelesaikan teka-teki untuk membuka jalan selanjutnya." << endl << endl; sleep_for(seconds(1));

        cout << "-- Lorong dengan Cahaya Merah --" << endl; sleep_for(seconds(1));
        cout << "Kamu melangkah ke lorong yang disinari cahaya merah aneh dari kristal di dinding." << endl; sleep_for(seconds(1));
        cout << "Kamu harus berhati-hati, dindingnya sempit dan ada beberapa batu yang menonjol keluar." << endl << endl; sleep_for(seconds(1));

        cout << "-- Pintu Besi Tua --" << endl; sleep_for(seconds(1));
        cout << "Kamu tiba di depan pintu besi tua yang mengarah ke ruangan utama kuil." << endl; sleep_for(seconds(1));
        cout << "Dengan sedikit tenaga, kamu berhasil membukanya dan melangkah masuk." << endl << endl; sleep_for(seconds(1));
        cout << "Selamat " << user.nama << "!" << endl;
        cout << "Kamu berhasil mencapai bagian dalam kuil dengan selamat." << endl << endl; sleep_for(seconds(3));
        episode2();
    }
    else {
        episode1();
    }
}

int main() {
    char siap; sleep_for(seconds(1));
    cout << "\t ========================================" << endl;
    cout << "\t SELAMAT DATANG DI PETUALANGAN INTERAKTIF" << endl;
    cout << "\t ========================================" << endl; sleep_for(seconds(1));
    cout << "\t Masukkan namamu: "; getline(cin, user.nama); cout << endl; sleep_for(seconds(1));
    cout << "Selamat datang " << user.nama << "!" << endl; sleep_for(seconds(1));
    cout << "Kamu adalah seorang petualang pemberani yang ingin mencari harta karun legenda." << endl; sleep_for(seconds(1));
    cout << "Lanjutkan petualangan misteriusmu dengan pilihanmu sendiri!" << endl; sleep_for(seconds(1));
    cout << "Apakah kamu siap (y/n)? "; cin >> siap; cout << endl;
    
    if(siap == 'y') {
        sleep_for(seconds(3));
        episode1();
    }
    else {
        cout << "Sayang sekali! Kamu tidak akan mendapatkan harta karun legenda." << endl;
        cout << "\t =======" << endl;
        cout << "\t THE END" << endl;
        cout << "\t =======" << endl;
    }
}
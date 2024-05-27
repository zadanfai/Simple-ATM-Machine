#include <iostream>
#include <conio.h>
using namespace std;

struct account{
        int rekening;
        string nama;
        long long int saldo;
};

int main(){
        account acc1, acc2, acc3;

        acc1.rekening = 170087;
        acc1.nama = "Najwa";
        acc1.saldo = 9000000;

        acc2.rekening = 170118;
        acc2.nama = "Zadan";
        acc2.saldo = 20000;

        acc3.rekening = 170148;
        acc3.nama = "Hardiansyah";
        acc3.saldo = 50000;

        int pass, kode, kode2, kode3, kode4, rektujuan;
        char lagi, yakin;
        long int tarik, setor, transfer;
		string arstatus[999];
		
pass:
        system("cls");
        cout << "=================================================================\n";
        cout << "                         ATM UNSIKUY JAYA\n";
        cout << "                       Pecahan Rp.50.000,-\n";
        cout << "=================================================================\n";
        cout << "                         SELAMAT DATANG";
        cout <<endl;
        cout <<endl;
        cout <<endl;
        cout << "Silahkan Masukan PIN Anda : ";
        cin >> pass;
        system("cls");

        if(pass == 5222){
        awal_najwa:
                //Najwa
                cout << "=================================================================\n";
                cout << "                          ATM UNSIKUY JAYA                          "<<endl;
                cout << "                       Pecahan Rp.50.000,00                        "<<endl;
                cout << "=================================================================\n";
                cout <<endl;
                cout << " ________________________________________________________________\n";
                cout << "|                             MENU                               |"<<endl;
                cout << "|________________________________________________________________|\n";
                cout <<endl;
                cout << "         1. Cek Saldo                          3. Setor Tunai"<<endl;
                cout << "         2. Tarik Tunai                        4. Transfer Tunai"<<endl;
                cout << "         5. Keluar" << endl;
                cout <<endl;
                cout << "MASUKKAN PILIHAN ANDA : ";
                cin >>kode;
                system("cls");
                switch(kode){
                        case 1:
                                cout <<endl;
                                cout << " _______________________________________________________________\n";
                                cout << "|                      INFORMASI SALDO                          |"<<endl;
                                cout << "|_______________________________________________________________|\n";
                                cout << endl;
                                cout << " Saldo Anda: Rp."<< acc1.saldo << endl;
                                cout << endl;
                                cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                cin >> lagi;
                                system("cls");
                                goto awal_najwa;
                                break;
                        case 2:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                        PENARIKAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "          1. Rp.1.000.000               3. Rp.100.000"<<endl;
                                cout << "          2. Rp.  500.000               4. Rp. 50.000"<<endl;
                                cout << "          5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >> kode2;
                                system("cls");
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                        PENARIKAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode2)
                                {
                                case 1:
                                        tarik=1000000;
                                        break;
                                case 2:
                                        tarik=500000;
                                        break;
                                case 3:
                                        tarik=100000;
                                        break;
                                case 4:
                                        tarik=50000;
                                        break;
                                case 5:
                                        cout << "Masukkan jumlah: ";
                                        cin >> tarik;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi2;
                                        system("cls");
                                }
                                if(tarik > acc1.saldo){
                                        cout << "Saldo anda tidak mencukupi untuk melakukan transaksi ini!" << endl;
                                        }
                                else{
                                        acc1.saldo -= tarik;
                                        cout <<endl;
                                        cout << "\t\tPenarikan Berhasil";
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<"Anda melakukan penarikan tunai senilai : Rp" << tarik << endl;
                                        cout << "Sisa Saldo		: Rp. "<<acc1.saldo<<",-";
                                        cout <<endl;
                                        cout <<endl;
                                }
                                lagi2:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_najwa;
                                break;
                        case 3:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                          SETORAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "         1. Rp.1.000.000                  3. Rp.100.000"<<endl;
                                cout << "         2. Rp.  500.000                  4. Rp. 50.000"<<endl;
                                cout << "         5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >>kode3;
                                system("cls");
                                
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                          SETORAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode3)
                                {
                                case 1:
                                        setor=1000000;
                                        break;
                                case 2:
                                        setor=500000;
                                        break;
                                case 3:
                                        setor=100000;
                                        break;
                                case 4:
                                        setor=50000;
                                        break;
                                case 5:
                                        cout << "Masukan Jumlah yang anda inginkan :";
                                        cin>>setor;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi3;
                                        system("cls");
                                        }
                                acc1.saldo= acc1.saldo + setor;
                                cout <<endl;
                                cout << "\t\tPenarikan Berhasil"; 
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<"Anda melakukan setor tunai senilai : Rp." << setor <<endl;
                                cout << "Jumlah Saldo Anda Sekarang : Rp. "<<acc1.saldo<<",-";
                                cout <<endl;
                                cout <<endl;
                                lagi3:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_najwa;
                                break;
                        case 4:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                         TRANSFER TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "Masukkan rekening yang dituju: ";
                                cin >> rektujuan;
                                cout << "         1. Rp.1.000.000                  3. Rp.100.000"<<endl;
                                cout << "         2. Rp.  500.000                  4. Rp. 50.000"<<endl;
                                cout << "         5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >>kode4;
                                system("cls");
                                
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                         TRANSFER TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode4)
                                {
                                case 1:
                                        transfer=1000000;
                                        break;
                                case 2:
                                        transfer=500000;
                                        break;
                                case 3:
                                        transfer=100000;
                                        break;
                                case 4:
                                        transfer=50000;
                                        break;
                                case 5:
                                        cout << "Masukan Jumlah yang anda inginkan :";
                                        cin>>transfer;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi4;
                                        system("cls");
                                }
                                if(transfer > acc1.saldo){
                                        cout << "Saldo anda tidak mencukupi untuk melakukan transaksi ini!" << endl;
                                        }
                                else{
                                        if(rektujuan == 170118){
                                                cout << "Anda yakin ingin mentransfer uang sejumlah " << transfer << " ke rekening atas nama " << acc2.nama << " ?" << endl;
                                                cout << "(y/n)?";
                                                cin >> yakin;
                                                if(yakin == 'y' || yakin == 'Y'){
                                                        exit;
                                                }
                                                else{
                                                        goto awal_najwa;
                                                }
                                                acc2.saldo += transfer;
                                        }
                                        else if(rektujuan == 170148){
                                                cout << "Anda yakin ingin mentransfer uang sejumlah " << transfer << " ke rekening atas nama " << acc3.nama << " ?" << endl;
                                                cout << "(y/n)?";
                                                cin >> yakin;
                                                if(yakin == 'y' || yakin == 'Y'){
                                                        exit;
                                                }
                                                else{
                                                        goto awal_najwa;
                                                }
                                                acc3.saldo += transfer;
                                        }
                                        acc1.saldo -= transfer;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<"Anda melakukan transfer tunai senilai : Rp" << transfer << endl;
                                        cout << "Sisa Saldo		: Rp. "<<acc1.saldo<<",-";
                                        cout <<endl;
                                        cout <<endl;
                                }
                                lagi4:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_najwa;
                                break;
                                
                        case 5:
                                goto keluar;
                                break;

                        default:
                                cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                cout << "Pastikan kode yang anda masukkan benar";
                                system("cls");
                                }
        }
        else if(pass == 5333){
        awal_zadan:
                //Zadan
                cout << "=================================================================\n";
                cout << "                          ATM UNSIKUY JAYA                          "<<endl;
                cout << "                       Pecahan Rp.50.000,00                        "<<endl;
                cout << "=================================================================\n";
                cout <<endl;
                cout << " __________________________________________________________________\n";
                cout << "|                             MENU                                 |"<<endl;
                cout << "|__________________________________________________________________|\n";
                cout <<endl;
                cout << "         1. Cek Saldo                          3. Setor Tunai"<<endl;
                cout << "         2. Tarik Tunai                        4. Transfer Tunai"<<endl;
                cout << "         5. Keluar" << endl;
                cout <<endl;
                cout << "MASUKKAN PILIHAN ANDA : ";
                cin >>kode;
                system("cls");
                switch(kode){
                        case 1:
                                cout <<endl;
                                cout << " _______________________________________________________________\n";
                                cout << "|                      INFORMASI SALDO                          |"<<endl;
                                cout << "|_______________________________________________________________|\n";
                                cout << endl;
                                cout << " Saldo Anda: Rp."<< acc2.saldo << endl;
                                cout << endl;
                                cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                cin >> lagi;
                                system("cls");
                                goto awal_zadan;
                                break;
                        case 2:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                        PENARIKAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "          1. Rp.1.000.000               3. Rp.100.000"<<endl;
                                cout << "          2. Rp.  500.000               4. Rp. 50.000"<<endl;
                                cout << "          5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >> kode2;
                                system("cls");
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                        PENARIKAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode2)
                                {
                                case 1:
                                        tarik=1000000;
                                        break;
                                case 2:
                                        tarik=500000;
                                        break;
                                case 3:
                                        tarik=100000;
                                        break;
                                case 4:
                                        tarik=50000;
                                        break;
                                case 5:
                                        cout << "Masukkan jumlah: ";
                                        cin >> tarik;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi5;
                                        system("cls");
                                }
                                if(tarik > acc2.saldo){
                                        cout << "Saldo anda tidak mencukupi untuk melakukan transaksi ini!" << endl;
                                        }
                                else{
                                        acc2.saldo= acc2.saldo - tarik;
                                        cout <<endl;
                                        cout << "\t\tPenarikan Berhasil";
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<"Anda melakukan penarikan tunai senilai : Rp" << tarik << endl;
                                        cout << "Sisa Saldo		: Rp. "<<acc2.saldo<<",-";
                                        cout <<endl;
                                        cout <<endl;
                                }
                                lagi5:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_zadan;
                                break;
                        case 3:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                          SETORAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "         1. Rp.1.000.000                  3. Rp.100.000"<<endl;
                                cout << "         2. Rp.  500.000                  4. Rp. 50.000"<<endl;
                                cout << "         5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >>kode3;
                                system("cls");
                                
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                          SETORAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode3)
                                {
                                case 1:
                                        setor=1000000;
                                        break;
                                case 2:
                                        setor=500000;
                                        break;
                                case 3:
                                        setor=100000;
                                        break;
                                case 4:
                                        setor=50000;
                                        break;
                                case 5:
                                        cout << "Masukan Jumlah yang anda inginkan :";
                                        cin>>setor;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi6;
                                        system("cls");
                                        }
                                acc2.saldo= acc2.saldo + setor;
                                cout <<endl;
                                cout << "\t\tPenarikan Berhasil"; 
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<"Anda melakukan setor tunai senilai : Rp." << setor <<endl;
                                cout << "Jumlah Saldo Anda Sekarang : Rp. "<<acc2.saldo<<",-";
                                cout <<endl;
                                cout <<endl;
                                lagi6:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_zadan;
                                break;
                        case 4:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                         TRANSFER TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "Masukkan rekening yang dituju: ";
                                cin >> rektujuan;
                                cout << "         1. Rp.1.000.000                  3. Rp.100.000"<<endl;
                                cout << "         2. Rp.  500.000                  4. Rp. 50.000"<<endl;
                                cout << "         5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >>kode4;
                                system("cls");
                                
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                         TRANSFER TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode4)
                                {
                                case 1:
                                        transfer=1000000;
                                        break;
                                case 2:
                                        transfer=500000;
                                        break;
                                case 3:
                                        transfer=100000;
                                        break;
                                case 4:
                                        transfer=50000;
                                        break;
                                case 5:
                                        cout << "Masukan Jumlah yang anda inginkan :";
                                        cin>>transfer;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi7;
                                        system("cls");
                                }
                                if(transfer > acc2.saldo){
                                        cout << "Saldo anda tidak mencukupi untuk melakukan transaksi ini!" << endl;
                                        }
                                else{
                                        if(rektujuan == 170087){
                                                cout << "Anda yakin ingin mentransfer uang sejumlah " << transfer << " ke rekening atas nama " << acc1.nama << " ?" << endl;
                                                cout << "(y/n)?";
                                                cin >> yakin;
                                                if(yakin == 'y' || yakin == 'Y'){
                                                        exit;
                                                }
                                                else{
                                                        goto awal_zadan;
                                                }
                                                acc1.saldo += transfer;
                                        }
                                        else if(rektujuan == 170148){
                                                cout << "Anda yakin ingin mentransfer uang sejumlah " << transfer << " ke rekening atas nama " << acc3.nama << " ?" << endl;
                                                cout << "(y/n)?";
                                                cin >> yakin;
                                                if(yakin == 'y' || yakin == 'Y'){
                                                        exit;
                                                }
                                                else{
                                                        goto awal_zadan;
                                                }
                                                acc3.saldo += transfer;
                                        }
                                        acc2.saldo -= transfer;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<"Anda melakukan transfer tunai senilai : Rp" << transfer << endl;
                                        cout << "Sisa Saldo		: Rp. "<<acc2.saldo<<",-";
                                        cout <<endl;
                                        cout <<endl;
                                }
                                lagi7:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_zadan;
                                break;
                                
                        case 5:
                                goto keluar;
                                break;

                        default:
                                cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                cout << "Pastikan kode yang anda masukkan benar";
                                system("cls");
                                }
        }
        else if(pass == 5444){
        awal_hardi:
                //Hardi
                cout << "=================================================================\n";
                cout << "                          ATM UNSIKUY JAYA                          "<<endl;
                cout << "                       Pecahan Rp.50.000,00                        "<<endl;
                cout << "=================================================================\n";
                cout <<endl;
                cout << " __________________________________________________________________\n";
                cout << "|                             MENU                                 |"<<endl;
                cout << "|__________________________________________________________________|\n";
                cout <<endl;
                cout << "         1. Cek Saldo                          3. Setor Tunai"<<endl;
                cout << "         2. Tarik Tunai                        4. Transfer Tunai"<<endl;
                cout << "         5. Keluar" << endl;
                cout <<endl;
                cout << "MASUKKAN PILIHAN ANDA : ";
                cin >>kode;
                system("cls");
                switch(kode){
                        case 1:
                                cout <<endl;
                                cout << " _______________________________________________________________\n";
                                cout << "|                      INFORMASI SALDO                          |"<<endl;
                                cout << "|_______________________________________________________________|\n";
                                cout << endl;
                                cout << " Saldo Anda: Rp."<< acc3.saldo << endl;
                                cout << endl;
                                cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                cin >> lagi;
                                system("cls");
                                goto awal_hardi;
                                break;
                        case 2:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                        PENARIKAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "          1. Rp.1.000.000               3. Rp.100.000"<<endl;
                                cout << "          2. Rp.  500.000               4. Rp. 50.000"<<endl;
                                cout << "          5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >> kode2;
                                system("cls");
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                        PENARIKAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode2)
                                {
                                case 1:
                                        tarik=1000000;
                                        break;
                                case 2:
                                        tarik=500000;
                                        break;
                                case 3:
                                        tarik=100000;
                                        break;
                                case 4:
                                        tarik=50000;
                                        break;
                                case 5:
                                        cout << "Masukkan jumlah: ";
                                        cin >> tarik;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi8;
                                        system("cls");
                                }
                                if(tarik > acc3.saldo){
                                        cout << "Saldo anda tidak mencukupi untuk melakukan transaksi ini!" << endl;
                                        }
                                else{
                                        acc3.saldo= acc3.saldo - tarik;
                                        cout <<endl;
                                        cout << "\t\tPenarikan Berhasil";
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<"Anda melakukan penarikan tunai senilai : Rp" << tarik << endl;
                                        cout << "Sisa Saldo		: Rp. "<<acc3.saldo<<",-";
                                        cout <<endl;
                                        cout <<endl;
                                }
                                lagi8:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_hardi;
                                break;
                        case 3:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                          SETORAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "         1. Rp.1.000.000                  3. Rp.100.000"<<endl;
                                cout << "         2. Rp.  500.000                  4. Rp. 50.000"<<endl;
                                cout << "         5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >>kode3;
                                system("cls");
                                
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                          SETORAN TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode3)
                                {
                                case 1:
                                        setor=1000000;
                                        break;
                                case 2:
                                        setor=500000;
                                        break;
                                case 3:
                                        setor=100000;
                                        break;
                                case 4:
                                        setor=50000;
                                        break;
                                case 5:
                                        cout << "Masukan Jumlah yang anda inginkan :";
                                        cin>>setor;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi9;
                                        system("cls");
                                        }
                                acc3.saldo= acc3.saldo + setor;
                                cout <<endl;
                                cout << "\t\tPenarikan Berhasil"; 
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<"Anda melakukan setor tunai senilai : Rp." << setor <<endl;
                                cout << "Jumlah Saldo Anda Sekarang : Rp. "<<acc3.saldo<<",-";
                                cout <<endl;
                                cout <<endl;
                                lagi9:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_hardi;
                                break;
                        case 4:
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                         TRANSFER TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                cout << "Masukkan rekening yang dituju: ";
                                cin >> rektujuan;
                                cout << "         1. Rp.1.000.000                  3. Rp.100.000"<<endl;
                                cout << "         2. Rp.  500.000                  4. Rp. 50.000"<<endl;
                                cout << "         5. JUMLAH LAIN"<<endl;
                                cout <<endl;
                                cout <<endl;
                                cout <<endl;
                                cout << "MASUKKAN PILIHAN ANDA : ";
                                cin >>kode4;
                                system("cls");
                                
                                cout <<endl;
                                cout << " _________________________________________________________________\n";
                                cout << "|                         TRANSFER TUNAI                          |"<<endl;
                                cout << "|_________________________________________________________________|\n";
                                cout <<endl;
                                switch (kode4)
                                {
                                case 1:
                                        transfer=1000000;
                                        break;
                                case 2:
                                        transfer=500000;
                                        break;
                                case 3:
                                        transfer=100000;
                                        break;
                                case 4:
                                        transfer=50000;
                                        break;
                                case 5:
                                        cout << "Masukan Jumlah yang anda inginkan :";
                                        cin>>transfer;
                                        break;
                                default:
                                        cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                        cout << "Pastikan kode yang anda masukkan benar";
                                        goto lagi10;
                                        system("cls");
                                }
                                if(transfer > acc3.saldo){
                                        cout << "Saldo anda tidak mencukupi untuk melakukan transaksi ini!" << endl;
                                        }
                                else{
                                        if(rektujuan == 170118){
                                                cout << "Anda yakin ingin mentransfer uang sejumlah " << transfer << " ke rekening atas nama " << acc2.nama << " ?" << endl;
                                                cout << "(y/n)?";
                                                cin >> yakin;
                                                if(yakin == 'y' || yakin == 'Y'){
                                                        exit;
                                                }
                                                else{
                                                        goto awal_hardi;
                                                }
                                                acc2.saldo += transfer;
                                        }
                                        else if(rektujuan == 170087){
                                                cout << "Anda yakin ingin mentransfer uang sejumlah " << transfer << " ke rekening atas nama " << acc1.nama << " ?" << endl;
                                                cout << "(y/n)?";
                                                cin >> yakin;
                                                if(yakin == 'y' || yakin == 'Y'){
                                                        exit;
                                                }
                                                else{
                                                        goto awal_hardi;
                                                }
                                                acc1.saldo += transfer;
                                        }
                                        acc3.saldo -= transfer;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<endl;
                                        cout <<"Anda melakukan transfer tunai senilai : Rp" << transfer << endl;
                                        cout << "Sisa Saldo		: Rp. "<<acc3.saldo<<",-";
                                        cout <<endl;
                                        cout <<endl;
                                }
                                lagi10:
                                        cout << "APAKAH INGIN MELAKUKAN TRANSAKSI LAGI [Y/T]? : ";
                                        cin >>lagi;
                                        system("cls");
                                        goto awal_hardi;
                                break;
                                
                        case 5:
                                goto keluar;
                                break;

                        default:
                                cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA!" <<endl;
                                cout << "Pastikan kode yang anda masukkan benar";
                                system("cls");
                                }
        }     
        
keluar:
        cout << "=================================================================================\n";
        cout << "                   TERIMA KASIH TELAH MELAKUKAN TRANSAKSI\n";
        cout << "=================================================================================\n";
        cout << "Silahkan cek kembali uang anda dan Pastikan tidak ada barang yang tertinggal" <<endl;
        cout <<endl;

        goto pass;
        return 0;
}

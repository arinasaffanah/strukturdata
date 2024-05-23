#include <iostream>
#include <sstream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;

void system()
{system("cls");}

void pause()
{cout<<"\n\n"; system("PAUSE"); system("cls");}

struct Admin{
    string uname;
    string pass;
    string passs;
    string unameLog;
    string passLog;
    string passsLog;
    string status;
};

struct AdminData{
    Admin person;
};

struct AdminData admin[10];
struct AdminData *p = admin;
int admin_data = 0;

struct Fasilitas{
	string kodeFas;
	string namaFas;
	string stok;
	string kodePinjam;
};

struct DataFasilitas{
    Fasilitas fasilitas;
    
};

int jumlah_data = 0;
struct DataFasilitas dataFasilitas[10];
struct DataFasilitas *pfas = dataFasilitas;
int jmlDataFasilitas = 1;

string tempKode, tempNama, tempStok;

struct BarangDipinjam{
	string code;
	int qty;
};

struct Pinjam{
	string namaEmp;
    string nip;
    string tglPinjam;
    string blnPinjam;
    string thnPinjam;
    string tglKembali;
    string blnKembali;
    string thnKembali;
    int jmlPinjam;
    int pinjam;
	int qtyBarang = 0;
	BarangDipinjam barang[10];
};

struct DataPinjam{
    Pinjam person;
};

struct DataPinjam daftarPinjam[10];
struct DataPinjam *ppinjam = daftarPinjam;
int jmlPeminjaman = 0;
int peminjaman = 1;
int nota = 1;

void reg(){
    int i = 1;
    cout<<endl;
    cout<<"\t\t\t\t ========================================="<<endl;
    cout<<"\t\t\t\t =                SIGN UP                ="<<endl;
    cout<<"\t\t\t\t ========================================="<<endl;
	do {
        cout << "\n\t\t\t\t Username : ";
        cin >> (p + i)->person.uname;

        cout << "\t\t\t\t Password : ";
        char c;
        (p + i)->person.pass = "";
        while ((c = getch()) != '\r') {
            (p + i)->person.pass += c;
            cout << "*";
        }

        (p + i)->person.status = "berhasil";
        cout << "\n\t\t\t\t Registrasi " << (p + i)->person.status << endl;

    } while (i != 1);
}

void login(){
    int i = 1;
    cout<<endl;
    cout<<"\t\t\t\t ========================================="<<endl;
    cout<<"\t\t\t\t =                 LOGIN                 ="<<endl;
    cout<<"\t\t\t\t ========================================="<<endl;
    do {
        cout << "\n\t\t\t\t Username : ";
        cin >> (p + i)->person.unameLog;

        cout << "\t\t\t\t Password : ";
        char c;
        (p + i)->person.passLog = "";
        while ((c = getch()) != '\r') {
            (p + i)->person.passLog += c;
            cout << "*";
        }

        if ((p + i)->person.unameLog == (p + i)->person.uname && (p + i)->person.passLog == (p + i)->person.pass) 
		{
            (p + i)->person.status = "berhasil";
            cout << "\n\t\t\t\t Login " << (p + i)->person.status << endl;
        } else {
            (p + i)->person.status = "gagal";
            cout << "\n\t\t\t\t Login " << (p + i)->person.status << endl;
            pause();
            login(); // Memanggil kembali fungsi login() jika login gagal
        }
        i++; // Memperbarui indeks elemen p pada array
    } while ((p + i - 1)->person.status != "berhasil");
}

void inputData(){
	int i = 1;
	cout<<endl;
	cout<<"\t\t\t\t ========================================"<<endl;
	cout<<"\t\t\t\t =         Input Data Fasilitas         ="<<endl;
	cout<<"\t\t\t\t ========================================"<<endl;
	do{
		cout<<"\n\t\t\t\t Masukkan kode fasilitas : ";
		cin>> (pfas+jmlDataFasilitas)->fasilitas.kodeFas;
		cout<<"\t\t\t\t Masukkan nama fasilitas : ";
		cin.ignore();
		getline(cin, (pfas+jmlDataFasilitas)->fasilitas.namaFas);
		cout<<"\t\t\t\t Masukkan jumlah stok yang tersedia saat ini : ";
		cin>> (pfas+jmlDataFasilitas)->fasilitas.stok;
		jmlDataFasilitas++;
  		cout<<"\n\t\t\t\t Data fasilitas berhasil ditambahkan."<<endl;
  	} while(i!=1); 
	
	//sorting bubble sort
	for (int i = 1; i < jmlDataFasilitas; i++)
        {
            for (int j = 0; j < jmlDataFasilitas - i; j++)
            {
                if ((pfas+j)->fasilitas.kodeFas > (pfas+j+1)->fasilitas.kodeFas)
                {
                    tempKode = (pfas+j)->fasilitas.kodeFas;
                    (pfas+j)->fasilitas.kodeFas = (pfas+j+1)->fasilitas.kodeFas ;
                    (pfas+j+1)->fasilitas.kodeFas = tempKode;
                    
        			tempNama = (pfas+j)->fasilitas.namaFas;
                    (pfas+j)->fasilitas.namaFas = (pfas+j+1)->fasilitas.namaFas;
                    (pfas+j+1)->fasilitas.namaFas = tempNama;
                    
                    tempStok = (pfas+j)->fasilitas.stok;
                    (pfas+j)->fasilitas.stok = (pfas+j+1)->fasilitas.stok;
                    (pfas+j+1)->fasilitas.stok = tempStok;                    
                }
            }
        }	
}

void editTambah()
{
    int i = 1;
    cout<<endl;
    cout << "\t\t\t\t ==========================================" << endl;
    cout << "\t\t\t\t =          Tambah Stok Fasilitas         =" << endl;
    cout << "\t\t\t\t ==========================================" << endl;
    cout << "\n\t\t\t\t Masukkan kode fasilitas : ";
    string kodeFas;
    cin >> kodeFas;
    
    bool found = false;
    for (int i = 0; i < jmlDataFasilitas; i++)
    {
        if ((pfas+i)->fasilitas.kodeFas == kodeFas)
        {
            found = true;

            cout << "\t\t\t\t Masukkan jumlah stok yang ingin ditambahkan : ";
            int tambahStok;
            cin >> tambahStok;

            if (tambahStok >= 0) {
                int currentStok;
                stringstream((pfas+i)->fasilitas.stok) >> currentStok; // Konversi string ke integer
                currentStok += tambahStok;
                stringstream ss;
                ss << currentStok;
                (pfas+i)->fasilitas.stok = ss.str(); // Konversi integer ke string
                cout << "\n\t\t\t\t Stok fasilitas berhasil ditambahkan." << endl;
            } else {
                cout << "\n\t\t\t\t Jumlah stok yang ditambahkan harus lebih dari 0." << endl;
            }
            break;
        }
    }
    if (!found)
    {
        cout << "\n\t\t\t\t Data fasilitas tidak ditemukan." << endl;
    }
}

void editHapus()
{
    int i = 1;
    cout<<endl;
    cout << "\t\t\t\t ============================================" << endl;
    cout << "\t\t\t\t =            Hapus Stok Fasilitas          =" << endl;
    cout << "\t\t\t\t ============================================" << endl;
    cout << "\n\t\t\t\t Masukkan kode fasilitas : ";
    string kodeFas;
    cin >> kodeFas;
    
    bool found = false;
    for (int i = 0; i < jmlDataFasilitas; i++)
    {
        if ((pfas+i)->fasilitas.kodeFas == kodeFas)
        {
            found = true;

            cout << "\t\t\t\t Masukkan jumlah stok yang ingin dikurangi : ";
            int hapusStok;
            cin >> hapusStok;

            if (hapusStok >= 0)
			{
                int currentStok;
                stringstream((pfas+i)->fasilitas.stok) >> currentStok; // Konversi string ke integer

                if (hapusStok <= currentStok) {
                    currentStok -= hapusStok;
                    stringstream ss;
                    ss << currentStok;
                    (pfas+i)->fasilitas.stok = ss.str(); // Konversi integer ke string
                    cout << "\n\t\t\t\t Stok fasilitas berhasil dikurangi." << endl;
                } else {
                    cout << "\n\t\t\t\t Jumlah stok yang dihapus melebihi stok yang tersedia." << endl;
                }
            } else {
                cout << "\n\t\t\t\t Jumlah stok yang dihapus harus lebih dari 0." << endl;
            }

            break;
        }
    }
    if (!found)
    {
        cout << "\n\t\t\t\t Data fasilitas tidak ditemukan." << endl;
    }
}

void tampilkanDataFasilitas() 
{
	cout<<endl;
    cout<<"\t\t\t\t ================================================================="<<endl;
    cout<<"\t\t\t\t |                      Display Data Fasilitas                   |"<<endl;
    cout<<"\t\t\t\t ================================================================="<<endl;
    cout << setw(8) << "\t\t\t\t | No ";
    cout << setw(8) << "| Kode Fasilitas ";
	cout << setw(8) << "| 	Nama Fasilitas  ";
	cout << setw(8) << "| Stok Fasilitas |" << endl;;
	cout<<"\t\t\t\t -----------------------------------------------------------------"<<endl;

    if (jmlDataFasilitas == 0)
    {
        cout << "\n\t\t\t\t Tidak ada data fasilitas yang tersedia." << endl;
    }
    if (jmlDataFasilitas >= 1)
    {   
    	for (int i = 1; i < jmlDataFasilitas; i++)
        {
            cout << "\t\t\t\t |" << setw(3) << i;
			cout << " | " << setw(14) << (pfas+i)->fasilitas.kodeFas;
            cout << " | 	" << setw(14) << (pfas+i)->fasilitas.namaFas;
            cout << "	| " << setw(14) << (pfas+i)->fasilitas.stok << " | " << endl;   
        }
        
    }
    cout<<"\t\t\t\t -----------------------------------------------------------------"<<endl;
}

void dataPeminjam()
{
	int i = 1;
	cout << endl;
    cout << "\t\t\t\t =============================================" << endl;
    cout << "\t\t\t\t =          Data Peminjam Fasilitas          =" << endl;
    cout << "\t\t\t\t =============================================" << endl;
	do{
    cout << "\n\t\t\t\t Masukkan Nama Karyawan : ";
    cin >>(ppinjam+peminjaman)->person.namaEmp;
    cout << "\t\t\t\t Masukkan NIP Karyawan : ";
    cin >> (ppinjam+peminjaman)->person.nip;
    cout << "\t\t\t\t Masukkan Tanggal Peminjaman (DD-MM-YYYY) : ";
    cin >> (ppinjam+peminjaman)->person.tglPinjam >> (ppinjam+peminjaman)->person.blnPinjam >> (ppinjam+peminjaman)->person.thnPinjam;
    cout << "\t\t\t\t Masukkan Tanggal Pengembalian (DD-MM-YYYY) : ";
    cin >> (ppinjam+peminjaman)->person.tglKembali >> (ppinjam+peminjaman)->person.blnKembali >> (ppinjam+peminjaman)->person.thnKembali;
    
    peminjaman++;

    cout << "\n\t\t\t\t Data peminjam fasilitas berhasil diinput." << endl;
	} while (i !=1);
}

void displayNota()
{
	cout << "\t\t\t\t\t\t\t\t\t\t      PT. SWANS " << endl;
	cout << "\t\t\t\t\t\t\t\t\t         Gedung Pacific Utara" << endl;
	cout << "\t\t\t\t\t\t\t\t\t   Jalan Jalan doang, Jadian Kagak," << endl;
	cout << "\t\t\t\t\t\t\t\t          Jakarta Barat, Jakarta - Indonesia" << endl;
	
    cout << endl;
    cout <<"\t\t\t\t ===============================================================================================================" << endl;
    cout <<"\t\t\t\t |                                               Nota Peminjaman                                               |" << endl;
    cout <<"\t\t\t\t ===============================================================================================================" << endl;
	cout <<"\t\t\t\t | Nama Karyawan |   NIP    | Tanggal Peminjaman | Tanggal Pengembalian |  Kode  |     Nama Fasilitas | Jumlah |" << endl;
	cout <<"\t\t\t\t ===============================================================================================================" << endl;
	
	if (peminjaman && jmlDataFasilitas > 0)
	{

		cout << "\t\t\t\t |" << setw(14) << (ppinjam+(peminjaman-1))->person.namaEmp;
		cout << " | " << setw(8) << (ppinjam+(peminjaman-1))->person.nip;
		cout << " | " << setw(18) << ((ppinjam+(peminjaman-1))->person.tglPinjam + " " + (ppinjam+(peminjaman-1))->person.blnPinjam + " " + (ppinjam+(peminjaman-1))->person.thnPinjam);
		cout << " | " << setw(20) << ((ppinjam+(peminjaman-1))->person.tglKembali + " " + (ppinjam+(peminjaman-1))->person.blnKembali + " " + (ppinjam+(peminjaman-1))->person.thnKembali);

		for (int i = 0; i < (ppinjam+(peminjaman-1))->person.qtyBarang; i++)
		{
			for (int a = 0; a < jmlDataFasilitas; a++) {
				if ((ppinjam+(peminjaman-1))->person.barang[i].code == (pfas+a+1)->fasilitas.kodeFas) {
					cout << " | " << setw(6) << (pfas+a+1)->fasilitas.kodeFas;
					cout << " | " << setw(18) << (pfas+a+1)->fasilitas.namaFas;
					cout << " | " << setw(6) << (ppinjam+peminjaman-1)->person.barang[i].qty << " | " <<endl;
					cout <<"\t\t\t\t |               |          |                    |                     ";
					break;
				}
			}
		}
		cout << " |        |                    |        |" << endl;				
    	cout << "\t\t\t\t ---------------------------------------------------------------------------------------------------------------" << endl;
    	cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t     Customer service : +62-895-8080-00566 (Zey)" <<endl;
    
    if (peminjaman && jmlDataFasilitas == 0) {
        cout << "\n\t\t\t\t Tidak ada data peminjaman yang tersedia." << endl;
    }
	}
}

void dataPinjem(){
	string cari;
	int jumlahPinjam;
	char pilTampil;
	bool isFound = false;
jumlah:
	cout<<endl;
    cout<<"\t\t\t\t =============================================="<<endl;
	cout<<"\t\t\t\t =            Peminjaman Fasilitas            ="<<endl;
	cout<<"\t\t\t\t =============================================="<<endl;
	
    	pilih:
			cout << "\n\t\t\t\t Masukkan kode fasilitas yang ingin dipinjam : ";
 			cin >> cari;
         
	for (int i = 1; i < jmlDataFasilitas; i++)
    {
 		if ((pfas+i)->fasilitas.kodeFas == cari){
			isFound = true;
		   	cout << "\n\t\t\t\t Fasilitas ditemukan." << endl;
        	cout << "\t\t\t\t Stok saat ini: " << (pfas+i)->fasilitas.stok << endl;
        
			int currentStok;
			stringpilih:
        	cout << "\n\t\t\t\t Masukkan jumlah fasilitas yang ingin dipinjam : ";
			cin >> jumlahPinjam;
			(ppinjam+i)->person.jmlPinjam = jumlahPinjam;

			(ppinjam+i)->person.pinjam =  (ppinjam+i)->person.jmlPinjam;
			stringstream((pfas+i)->fasilitas.stok) >> currentStok;

			int qtyBarang = (ppinjam+(peminjaman-1))->person.qtyBarang;
			     
			if ((ppinjam+i)->person.jmlPinjam <= currentStok){
				(ppinjam+(peminjaman-1))->person.qtyBarang += 1;
				(ppinjam+(peminjaman-1))->person.barang[qtyBarang].code = cari;
				(ppinjam+(peminjaman-1))->person.barang[qtyBarang].qty = jumlahPinjam;
				
        		stringstream((pfas+i)->fasilitas.stok) >> currentStok;
            	currentStok -= (ppinjam+i)->person.jmlPinjam;
            	stringstream ss;
            	ss << currentStok;
            	(pfas+i)->fasilitas.stok = ss.str();
           	 	cout << "\n\t\t\t\t Fasilitas berhasil dipinjam." << endl;
           	 	cout << "\n\t\t\t\t Stok terbaru: " << (pfas+i)->fasilitas.stok << endl;
           	 	pause(); displayNota(); break;
			}
			else if (currentStok <= 0) {
			cout << "\n\t\t\t\t Stok Fasilitas Kosong." << endl;
			pause(); goto jumlah;
			}
		}
	}

	if (!isFound) {
		cout << "\n\t\t\t\t Fasilitas tidak ditemukan." << endl;

		cout << "\n\t\t\t\t Tampilkan data saat ini? [y/n] : ";
		cin >> pilTampil;
		if (pilTampil == 'y'){
			tampilkanDataFasilitas();
			pause(); goto jumlah;
		} else if (pilTampil == 'n'){
			cout << "\n\t\t\t\t Silahkan masukkan ulang kode." << endl;
			pause(); goto jumlah;
		} else{
			cout << "\n\t\t\t\t Kode yang anda masukkan tidak valid." << endl;
			pause(); goto jumlah;
		}
	}
}

void kembaliFas()
{
    cout << endl;
    cout <<"\t\t\t\t ===============================================================================================================" << endl;
    cout << "\t\t\t\t =                                           Pengembalian Fasilitas                                           =" << endl;
    cout <<"\t\t\t\t ===============================================================================================================" << endl;
    string nipKaryawan;
    cout << "\n\t\t\t\t Masukkan NIP Karyawan : ";
    cin >> nipKaryawan;
    string notaTgl, notaBln, notaThn;
    cout << "\n\t\t\t\t Masukkan tanggal pinjam : ";
    cin >> notaTgl >> notaBln >> notaThn;
    

    bool found = false;
    for (int i = 1; i < peminjaman; i++) {
        if ((ppinjam + i)->person.nip == nipKaryawan && (ppinjam+i)->person.tglPinjam == notaTgl &&  (ppinjam+i)->person.blnPinjam == notaBln && (ppinjam+i)->person.thnPinjam == notaThn) {
            found = true;
            
            cout << endl;
  		    cout <<"\t\t\t\t ===============================================================================================================" << endl;
   			cout <<"\t\t\t\t |                                               Nota Peminjaman                                               |" << endl;
    		cout <<"\t\t\t\t ===============================================================================================================" << endl;
            cout <<"\t\t\t\t | Nama Karyawan |   NIP    | Tanggal Peminjaman | Tanggal Pengembalian |  Kode  |     Nama Fasilitas | Jumlah |" << endl;;
			cout <<"\t\t\t\t ===============================================================================================================" << endl;
	
			if (peminjaman && jmlDataFasilitas> 0) {
				cout << "\t\t\t\t |" << setw(14) << (ppinjam+i)->person.namaEmp;
				cout << " | " << setw(8) << (ppinjam+i)->person.nip;
				cout << " | " << setw(18) << ((ppinjam+i)->person.tglPinjam + " " + (ppinjam+i)->person.blnPinjam + " " + (ppinjam+i)->person.thnPinjam);
				cout << " | " << setw(20) << ((ppinjam+i)->person.tglKembali + " " + (ppinjam+i)->person.blnKembali + " " + (ppinjam+i)->person.thnKembali);
				
				// for (int i = 0; i < jmlDataFasilitas; i++)
				// {
				// 	if((ppinjam+i+1)->person.pinjam != 0)
				// 	{
				//     	cout << " | " << setw(6) << (pfas+i+1)->fasilitas.kodeFas;
				//     	cout << " | " << setw(18) << (pfas+i+1)->fasilitas.namaFas;
				//     	cout << " | " << setw(6) << (ppinjam+i+1)->person.pinjam << " | " <<endl;        	
				// 		cout << "\t\t\t\t |   " << setw(14);
				// 		cout << " | " << setw(11);
				// 		cout << " | " << setw(21);
				// 		cout << " | " << setw(23);
				// 	}
				// }

				// 		cout << " | " << setw(9);
				// 		cout << " | " << setw(21);
				// 		cout << " | " << setw(9) << " | ";
						
				// cout << endl;

				for (int a = 0; a < (ppinjam+i)->person.qtyBarang; a++) {
					for (int b = 0; b < jmlDataFasilitas; b++) {
						if ((ppinjam+i)->person.barang[a].code == (pfas+b+1)->fasilitas.kodeFas) {
							cout << " | " << setw(6) << (pfas+b+1)->fasilitas.kodeFas;
							cout << " | " << setw(18) << (pfas+b+1)->fasilitas.namaFas;
							cout << " | " << setw(6) << (ppinjam+i)->person.barang[a].qty << " | " <<endl;
							cout <<"\t\t\t\t |               |          |                    |                     ";
							break;
						}
					}
				}
				cout << " |        |                    |        |" << endl;
				cout << "\t\t\t\t ---------------------------------------------------------------------------------------------------------------" << endl;

				string konfirmasi;
				cout << endl;
				cout << "\t\t\t\t Konfirmasi pengembalian (yes/no) : ";
				cin >> konfirmasi;

				bool pesanDicetak = false;
				if (konfirmasi == "yes") {
					int currentStok;
					for (int a = 0; a < (ppinjam+i)->person.qtyBarang; a++) {
						for (int b = 0; b < jmlDataFasilitas; b++) {
							if ((ppinjam+i)->person.barang[a].code == (pfas+b+1)->fasilitas.kodeFas) {
								
								stringstream((pfas+b+1)->fasilitas.stok) >> currentStok;
								currentStok += (ppinjam+i)->person.barang[a].qty;
								(pfas+b+1)->fasilitas.stok = to_string(currentStok);
								(ppinjam+i)->person.barang[a].qty = 0;
								
								break;
							}
						}
					}
					
					// stringstream((pfas + i + 1)->fasilitas.stok) >> currentStok;
					// currentStok += (ppinjam + i + 1)->person.pinjam;
					// stringstream ss;
					// ss << currentStok;
					// (pfas + i + 1)->fasilitas.stok = ss.str();
					(ppinjam + i + 1)->person.pinjam = 0;

					if (!pesanDicetak) {
						cout << "\n\t\t\t\t Fasilitas berhasil dikembalikan." << endl;
						pesanDicetak = true;
					}
				}
				else if (konfirmasi == "no") {
					if (!pesanDicetak) {
						cout << "\n\t\t\t\t Pengembalian fasilitas dibatalkan." << endl;
						pesanDicetak = true;
					}
				}
				else {
					if (!pesanDicetak) {
						cout << "\n\t\t\t\t Input tidak valid. Pengembalian fasilitas dibatalkan." << endl;
						pesanDicetak = true;
					}
				}
			}
		}
	}
    if (!found)
    {
        cout << "\n\t\t\t\t Tidak ditemukan data peminjaman dengan informasi tersebut." << endl;
    }
}

void laporan()
{
	cout << "\t\t\t\t\t\t\t\t\t\t      PT. SWANS " << endl;
	cout << "\t\t\t\t\t\t\t\t\t         Gedung Pacific Utara" << endl;
	cout << "\t\t\t\t\t\t\t\t\t   Jalan Jalan doang, Jadian Kagak," << endl;
	cout << "\t\t\t\t\t\t\t\t          Jakarta Barat, Jakarta - Indonesia" << endl;
	
    cout << endl;
    cout <<"\t\t\t\t ===============================================================================================================" << endl;
    cout <<"\t\t\t\t |                                              Laporan Peminjaman                                             |" << endl;
    cout <<"\t\t\t\t ===============================================================================================================" << endl;
	cout <<"\t\t\t\t | Nama Karyawan |   NIP    | Tanggal Peminjaman | Tanggal Pengembalian |  Kode  |     Nama Fasilitas | Jumlah |" << endl;
	cout <<"\t\t\t\t ===============================================================================================================" << endl;
	
	if (peminjaman && jmlDataFasilitas > 0)
	{

        for (int a = 1; a < peminjaman; a++) {
            cout << "\t\t\t\t |" << a << ")" << setw(12) << (ppinjam+a)->person.namaEmp;
            cout << " | " << setw(8) << (ppinjam+a)->person.nip;
            cout << " | " << setw(18) << ((ppinjam+a)->person.tglPinjam + " " + (ppinjam+a)->person.blnPinjam + " " + (ppinjam+a)->person.thnPinjam);
            cout << " | " << setw(20) << ((ppinjam+a)->person.tglKembali + " " + (ppinjam+a)->person.blnKembali + " " + (ppinjam+a)->person.thnKembali);
        
			for (int i = 0; i < (ppinjam+a)->person.qtyBarang; i++)
            {
                for (int b = 0; b < jmlDataFasilitas; b++) {
					if ((ppinjam+a)->person.barang[i].code == (pfas+b+1)->fasilitas.kodeFas) {
						cout << " | " << setw(6) << (pfas+b+1)->fasilitas.kodeFas;
						cout << " | " << setw(18) << (pfas+b+1)->fasilitas.namaFas;
						cout << " | " << setw(6) << (ppinjam+a)->person.barang[i].qty << " | " <<endl;
						cout <<"\t\t\t\t |               |          |                    |                     ";
						break;
					}
				}
            }
            cout << " |        |                    |        |" << endl;
        }
    	cout << "\t\t\t\t ---------------------------------------------------------------------------------------------------------------" << endl;
    	cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t     Customer service : +62-895-8080-00566 (Zey)" <<endl;
    
    if (peminjaman && jmlDataFasilitas == 0) {
        cout << "\n\t\t\t\t Tidak ada data peminjaman yang tersedia." << endl;
    }
	}
}

int main(){
    int pil;
menu1:
    system("cls");
	cout<<endl;
	cout<<"\t\t\t    ~ Aplikasi Peminjaman Fasilitas Kantor - PT. SWANS ~"<<endl;
	cout<<"\n\t\t\t\t =========================================="<<endl;
	cout<<"\t\t\t\t =             SELAMAT DATANG             ="<<endl;
	cout<<"\t\t\t\t =========================================="<<endl;
	
	cout<<"\t\t\t\t  1. Login"<<endl;
	cout<<"\t\t\t\t  2. Sign Up"<<endl;
	cout<<"\t\t\t\t  3. Exit"<<endl;
	cout<<"\n\t\t\t\t  Pilih [1/2/3] : ";
	cin>>pil;

    switch(pil){
        case 1 :
        system("cls");
            login();
            pause(); goto menu2;
            break;
        case 2 :
        system("cls");
            reg();
            pause(); goto menu1;
        menu2:
	        cout<<endl;
	        cout<<"\t\t\t\t =========================================="<<endl;
	        cout<<"\t\t\t\t =                MENU UTAMA              ="<<endl;
	        cout<<"\t\t\t\t =========================================="<<endl;
	
	        cout<<"\t\t\t\t  1. Manajemen Data"<<endl;
	        cout<<"\t\t\t\t  2. Tampilkan Data Fasilitas"<<endl;
	        cout<<"\t\t\t\t  3. Peminjaman Fasilitas"<<endl;
	        cout<<"\t\t\t\t  4. Pengembalian Fasilitas"<<endl;
	        cout<<"\t\t\t\t  5. Laporan Peminjaman Fasilitas"<<endl;
	        cout<<"\t\t\t\t  6. Logout"<<endl;
	        cout<<"\n\t\t\t\t  Pilih [1/2/3/4/5/6] : ";
	        cin>>pil;
        	switch(pil){
        		case 1 :
        		system("cls");
        			menu3:
        				cout<<endl;
        				cout<<"\t\t\t\t ========================================"<<endl;
						cout<<"\t\t\t\t =            Manajemen Data            ="<<endl;
						cout<<"\t\t\t\t ========================================"<<endl;
						
						cout<<"\t\t\t\t  1. Input Data Fasilitas"<<endl;
	            		cout<<"\t\t\t\t  2. Edit Data Fasilitas"<<endl;
	            		cout<<"\t\t\t\t  3. Kembali ke Menu Utama"<<endl;
	            		cout<<"\n\t\t\t\t  Pilih [1/2/3] : ";
	            		cin>>pil;
	            	switch(pil){
	            		case 1 :
	            		system("cls");
	            			menu4:
	            				cout<<endl;
		        				cout<<"\t\t\t\t ========================================"<<endl;
								cout<<"\t\t\t\t =         Input Data Fasilitas         ="<<endl;
								cout<<"\t\t\t\t ========================================"<<endl;
								
								cout<<"\t\t\t\t  1. Input Data Barang"<<endl;
			            		cout<<"\t\t\t\t  2. Input Data Ruangan"<<endl;
			            		cout<<"\t\t\t\t  3. Kembali ke Menu Manajemen"<<endl;
			            		cout<<"\n\t\t\t\t  Pilih [1/2/3] : ";
			            		cin>>pil;
			            	switch(pil){
			            		case 1 :
			            		system("cls");
			            			inputData();
			            			pause(); goto menu4;
		        					break;
		        				case 2 :
		        				system("cls");
		        					inputData();
		        					pause(); goto menu4;
		        					break;
		        				case 3 :
		        				system("cls"); goto menu3;
		        				default :
		            				cout << "\n\t\t\t\t  Kode yang anda masukkan salah" << endl;
		            				pause(); goto menu4; break;			
							}
						case 2 :
						system("cls");
							menu5:
								cout<<endl;
			        			cout<<"\t\t\t\t ======================================="<<endl;
								cout<<"\t\t\t\t =         Edit Data Fasilitas         ="<<endl;
								cout<<"\t\t\t\t ======================================="<<endl;
									
								cout<<"\t\t\t\t  1. Tambah Fasilitas"<<endl;
				           		cout<<"\t\t\t\t  2. Hapus Fasilitas"<<endl;
				           		cout<<"\t\t\t\t  3. Kembali ke Menu Manajemen"<<endl;
				           		cout<<"\n\t\t\t\t  Pilih [1/2/3] : ";
				           		cin>>pil;
							switch(pil){
				           		case 1 :
				           		system("cls");
				           			editTambah();
				           			pause(); goto menu5;
			       					break;
			       				case 2 :
			       				system("cls");
			       					editHapus();
		        					pause(); goto menu5;
		        					break;
		        				case 3 :
			        				system("cls"); goto menu3;
									default :
			           				cout << "\n\t\t\t\t  Kode yang anda masukkan salah" << endl;
			           				pause(); goto menu5; break;	
								}
						case 3 :
							system("cls"); goto menu2;
							default :
			          		cout << "\n\t\t\t\t  Kode yang anda masukkan salah" << endl;
			           		pause(); goto menu4; break;	
			    	}
        		case 2 :
    			system("cls");
    				tampilkanDataFasilitas();
    				pause(); goto menu2;
    			case 3 :
    			system("cls");
    				dataPeminjam();
    				menu6:
						cout<<endl;
        				cout<<"\t\t\t\t ============================================"<<endl;
						cout<<"\t\t\t\t =           Peminjaman Fasilitas           ="<<endl;
						cout<<"\t\t\t\t ============================================"<<endl;
						
						cout<<"\t\t\t\t  1. Pinjam Barang"<<endl;
	            		cout<<"\t\t\t\t  2. Pinjam Ruangan"<<endl;
	            		cout<<"\t\t\t\t  3. Tampilkan Data"<<endl;
	            		cout<<"\t\t\t\t  4. Kembali ke Menu Utama"<<endl;
	            		cout<<"\n\t\t\t\t  Pilih [1/2/3/4] : ";
	            		cin>>pil;
    				switch(pil){
	            		case 1 :
	            		system("cls");
	            			dataPinjem();
							pause(); goto menu6; break;
        				case 2 :
        				system("cls");
        					dataPinjem();
							pause(); goto menu6; break;
						case 3 :
		    			system("cls");
		    				tampilkanDataFasilitas();
		    				pause(); goto menu6;
        				case 4 :
        				system("cls"); goto menu2;
        				default :
            				cout << "\n\t\t\t\t Kode yang anda masukkan salah" << endl;
            				pause(); goto menu6; break;
					}
				case 4 :
					system("cls");
						kembaliFas();
						pause(); goto menu2; break;
            	case 5:
    				system("cls");
    				laporan();
           			pause(); goto menu2;
           			break;
           		case 6 :
            		cout << "\n\t\t\t\t  Logout Berhasil" << endl; 
            		pause(); goto menu1;break;
            	default :
            		cout << "\n\t\t\t\t  Kode yang anda masukkan salah" << endl;
            		pause(); goto menu2;
           			break;
    	}
    	case 3:
    		system("cls");
    		cout<<endl;
    		cout<<"\t\t\t\t  Terima Kasih!"<<endl;
    		pause(); break;
    	default :
            cout << "\n\t\t\t\t Kode yang anda masukkan salah" << endl;
            pause(); goto menu1;
            break;
    }
    return 0;
}

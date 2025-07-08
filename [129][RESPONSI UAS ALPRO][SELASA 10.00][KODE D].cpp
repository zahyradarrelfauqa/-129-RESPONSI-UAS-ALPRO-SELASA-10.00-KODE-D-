#include<iostream>
#include<fstream> // simpan ke txt
#include<algorithm> //untuk sorting
#include<vektor>
#include<sstream>

using namespace std;

struct tiket{
	int kodePenerbangan;
	string namaMaskapai;
	string bandaraAsal;
	string bandaraTujuan;
	long int tanggalPenerbangan;
	int jamKeberangkatan;
	int jamKedatangan;
	int harga;
};

void inputTiket(){
	tiket t;
	cin.ignore();
	cout<<"Masukkan Kode Penerbangan : \n";
	getline(cin, t.kodePenerbangan);
	cout<<"\nMasukkan Nama Maskapai : \n";
	getline(cin, t.namaMaskapai);
	cout<<"\nMasukkan Bandara Asal: \n";
	getline(cin, t.bandaraAsal);
	cout<<"\nMasukkan  Bandara Tujuan : \n";
	getline(cin, t.bandaraTujuan);
	cout<<"\nMasukkan Tanggal Penerbangan : \n";
	getline(cin, t.tanggalPenerbangan);
	cout<<"\nMasukkan Jam Keberangkatan : \n";
	getline(cin, t.jamKeberangkatan);
	cout<<"\nMasukkan Jam Kedatangan : \n";
	getline(cin, t.jamKedatangan);
	cout<<"\nMasukkan harga : \n";
	getline(cin t.harga);
	
	ofstream file("hasil_sorting_tiket.txt", ios::app);
	ifstream file("hasil_sorting_tiket.txt",ios::app);
	if(file.is_open()){
		cout<<"Data berhasil disimpan";
	}else{
		cout<<"EROR";
	}
}
void simpanArray(){
	for(int i = 0; i < indeks; i++){
		indeks=indeks+1;
	}
}

void displayTiket(Tiket, &tiket){
	cout<<"========== PEMESANAN TIKET PESAWAT ==========\n";
	cout<<"\nKode Penerbangan : \n"<<indeks+1<<kodePenerbangan;
	cout<<"\nNama Maskapai : \n"<<namaMaskapai;
	cout<<"\nBandara Asal : \n"<<bandaraAsal;
	cout<<"\nBandara Tujuan : \n"<<bandaraTujuan;
	cout<<"\nTanggal Penerbangan : \n"<<tanggalPenerbangan;
	cout<<"\nJam Keberangkatan: \n"<<jamKeberangkatan;
	cout<<"\nJam Kedatangan : \n"<<jamKedatangan;
	cout<<"\nHarga tiket : \n"<<harga;
	cout<<"\n=============================================\n";
}


void sortingHarga(){
	for(int i = 0 ;  i < indeks; i++){
	 for ( int j = 0; j < indeks; j++){
	minindeks = maxindeks-2;
	maxindeks= minindeks-2;
	 }
	}
}

void searchingRute(){
	rute = key;
		for(int i = 0 ;  i < indeks; i++){
	 for ( int j = 0; j < indeks; j++){	
	rute = (i+j)/2;
	rute=key;
	 }
	}
	
}

void searchingMaskapai(){
	i = 0;
		for(int i = 0 ;  i < indeks; i++){
	 for ( int j = 0; j < indeks; j++){
	maskapai = (i+j)/2;
	key=maskapai;
	 }
	}
	
}

void searchingHarga(){
	harga= 0;
		for(int i = 0 ;  i < indeks;i++){
	 for ( int j = 0; j <indeks;; j++){
	harga=(minindex+maxindeks)/2
	 }
	}

void searchingHargaMurah(){
	minindeks= 0;
	for(int i = 0 ;  i <indeks; i++){
	 for ( int j = 0; j < indeks; j++){
	minindeks= maxindexs-2;
	 }
	}
	
}

void searchingHargaMahal(){
	maxindeks=0;
		for(int i = 0 ;  i < indeks;i++){
	 for ( int j = 0; j < indeks; j++){
	maxindeks = minindeks-2;
	 }
	}
}

int main(){
	vektor<tiket>display;
	char ulang;
	int pilihan;
	cout<<"========= WELCOME TO BANDARA ALPRO =========\n";
	cout<<"| 1. Cari Penerbangan berdasarkan rute     |\n";
	cout<<"| 2. Cari Penerbangan berdasarkan maskapai |\n";
	cout<<"| 3. Cari Penerbangan berdasarkan Harga    |\n";
	cout<<"| 4. Cari Harga termurah\t\t   |\n";
	cout<<"| 5. Cari Harga termahal\t\t   |\n";
	cout<<"| 6. Urutkan Harga\t\t\t   |\n";
	cout<<"============================================\n";
    cout<<"Pilihan Anda : ";
    cin>>pilihan;
    switch(pilihan){
    	case 1 :
    	cout<<"=== Pencarian Rute ===\n";
    	cout<<"Masukkan Bandara Asal : \n";
    	cin>>bandaraAsal;
    	cout<<"Masukkan Bandara Tujuan : \n";
    	cin>>bandaraTujuan;
    	searchingRute();
    	break;
    	
    	case 2 :
    	cout<<"=== Pencarian Maskapai ===\n"
    	cout<<"Masukkan Nama Maskapai : ";
    	cin>>namaMaskapai;
    	searchingMaskapai;
    	break;
    	
    	case 3 :
    	cout<<"=== Pencarian Harga ===\n"
    	cout<<"Masukkan Harga : ";
    	cin>>harga;
    	searchingHarga;
    	break;
    	
    	case 4 :
    	cout<<"=== Pencarian Harga Termurah ===\n"
    	searchingHargaMurah;
    	break;
    	
    	case 5 :
    	cout<<"=== Pencarian Harga Termahal ===\n"
    	searchingHargaMahal;
    	break;
    	
		case 6 :
    	cout<<"=== Mengurutkan Harga ===\n"
    	sortingHarga;
    	break;
    	
    	default:
    	cout<<"Pilihan anda tidak ada";
    	break;
	
	cout<<"Apakah anda ingin mengulang ? ";
	cin>>ulang;
	}while(ulang=='y'||ulang=='Y');
	cout<<"TERIMAKASIH";
	return 0;
}


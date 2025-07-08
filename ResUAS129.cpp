#include<iostream>
#include<fstream> // simpan ke txt
#include<algorithm> //untuk sorting
using namespace std;

struct{
	int kodePenerbangan;
	string namaMaskapai;
	string bandaraAsal;
	string bandaraTujuan;
	int tanggalPenerbangan;
	int jamKeberangkatan;
	int jamKedatangan;
	int harga;
};

void inputData(){
	cout<<"Masukkan Kode Penerbangan : \n";
	cin>>kodePenerbangan;
	cout<<"\nMasukkan Nama Maskapai : \n";
	cin>>namaMaskapai;
	cout<<"\nMasukkan Bandara Asal: \n";
	cin>>bandaraAsal;
	cout<<"\nMasukkan  Bandara Tujuan : \n";
	cin>> bandaraTujuan;
	cout<<"\nMasukkan Tanggal Penerbangan : \n";
	cin>>tanggalPenerbangan;
	cout<<"\nMasukkan Jam Keberangkatan : \n";
	cin>>jamKeberangkatan;
	cout<<"\nMasukkan Jam Kedatangan : \n";
	cin>>jamKedatangan;
	cout<<"\nMasukkan harga : \n";
	cin>>harga;
}

void display(Data &data){
	cout<<"========== PEMESANAN TIKET PESAWAT ==========\n";
	cout<<"\nKode Penerbangan : \n";
	cout<<"\nNama Maskapai : \n";
	cout<<"\nBandara Asal : \n";
	cout<<"\nBandara Tujuan : \n";
	cout<<"\nTanggal Penerbangan : \n";
	cout<<"\nJam Keberangkatan: \n";
	cout<<"\nJam Kedatangan : \n";
	cout<<"\nHarga tiket : \n";
	cout<<"==============================================\n";
}

int main(){
	inputData;
	display;
	return 0;
}


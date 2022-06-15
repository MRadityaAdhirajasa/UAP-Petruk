#include <iostream>
#include <queue>
#include <conio.h>
#include <windows.h>
using namespace std;

void cekAntrean(queue<string> qu){
	queue<string> q = qu;
	system("cls");
	cout<<"Daftar antrean saat ini :"<<endl;
	if(!q.empty()){
	while(!q.empty()){
		cout<<">> ["<<q.front()<<"]"<<"\n";
		q.pop();
		
	}getch();
	}else{
		system("cls");
		cout<<"Antrean saat ini kosong";
		getch();
	}
	
	cout<<"\n";
}

int main(){
	int pilihan,pilihOpsi;
	string nomor;
	int tabung, tarik;
	queue<string> q;
	string opsi[] = {"Menabung Uang","Menarik Uang"};
	int arrSize = sizeof(opsi)/sizeof(opsi[0]);
do{
	system("cls");
	cout<<"1. Masuk Antrean"<<endl;
	cout<<"2. Panggil Antrean"<<endl;
	cout<<"3. Cek Antrean"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"\nMasukkan Pilihan : ";
	cin>>pilihan;

	switch(pilihan){
		case 1:
			cout<<"\nMasukkan Nomor Antrean : ";
			cin>>nomor;
			q.push(nomor);
			
			cout<<"Nomor Antrean ["<<nomor<<"] berhasil ditambahkan";
			
			getch();
			break;
		case 2:
			system("cls");
			if(!q.empty()){
			cout<<"Pilih Opsi: "<<endl;
			for(int i = 0; i<arrSize; i++)
				cout<<i+1<<". "<<opsi[i]<<endl;
			cout<<endl;
			
			cout<<"Silahkan customer dengan nomor antrean "<<q.front()<<" memilih opsi\n";
			cout<<"Pilih : ";	
			cin>>pilihOpsi;
			
			system("cls");
			if(pilihOpsi==1){
				cout<<"Masukkan nominal uang yang ingin ditabungan : Rp. ";
				cin>>tabung;
				cout<<"Uang senilai Rp. "<<tabung<<" berhasil ditabung";
			}if(pilihOpsi==2){
				cout<<"Masukkan nominal uang yang ingin ditarik : Rp. ";
				cin>>tarik;
				cout<<"Uang senilai Rp. "<<tarik<<" berhasil ditarik";
			}
			
			q.pop();
			getch();
			system("cls");
			}else{
				cout<<"Antrian kosong!\n";
				getch();
			}
			break;
		case 3:
    	cekAntrean(q);
		break;
	}
}
	while(pilihan !=4);
}

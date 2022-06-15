#include <iostream>
#include <conio.h>
#define MAX 100

using namespace std;

int nomer[MAX];
int head=-1;
int tail=-1;

bool IsEmpty(){ 
   if(tail == -1){
       return true;
   }else{
       return false;
   }
}

bool IsFull(){ 
   if(tail == MAX-1){
       return true;
   }else{
       return false;
   }
}

void MasukAntrian(int in){
    if (IsEmpty()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=in;
}

void PanggilAntrian(){
    if(IsEmpty()){
        cout<<"Antrian kosong ";
        getch();
    }else {
        for(int a=head;a<tail;a++){
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail == -1){
            head = -1;
        }
    }
}

void HapusAntrian(){
    head=tail=-1;
}

void LihatAntrian(){
     if(IsEmpty()){
         cout<<"Antrian kosong ";

     }else {
         system("cls");
         for(int a=head;a<=tail;a++){
              cout     << "\nNomor Antrian " << nomer[a] << "";
         }
     }
    
}

int main(){
    int Pilih, p=1, urut;
    do{
        system("cls");
        cout << "1. Tambah Antrian "<<endl;
        cout << "2. Panggil Antrian "<<endl;
        cout << "3. Kosongkan Antrian "<<endl;
        cout << "4. Lihat antrian"<<endl;
        cout << "5. keluar"<<endl;
        cout << "\nPilih : "; 
		cin	 >> Pilih;
        cout << "\n\n";
        if(Pilih == 1){
            if(IsFull()) {
                cout<<"Antrian penuh ";
            }
            else{
                urut=p;
                MasukAntrian(urut);
                cout << "Nomor antrian "<< p <<" ditambahkan"<< endl;
                cout << "Menunggu " << tail << " Antrian" << endl;
                p++;
            }
        }
        else if(Pilih == 2){
        	if(IsEmpty()){
        	cout<<"Antrian kosong";
        	}
        	else{
            cout << "Nomor antrian " << nomer[head] << " dipanggil"<<endl;
            PanggilAntrian();
        }
        }
        else if(Pilih == 3){
            HapusAntrian();
            cout<<"Antrian telah dikosongkan ";
        }
        else if(Pilih == 4){
            LihatAntrian();
        }
        else if(Pilih == 5){
		}
        else{
            cout << "Masukan anda salah"<< endl;
        }
        getch();
    }while(Pilih!=5);
}

/*
Nama: Mohammad Dhikri
Kelas: A
NPM : 140810180075
Tanggal : 23-April-2019
*/
#include <iostream>
using namespace std;
struct ElmtList{
	int noDaftar;
	string tim;
	string asal;
	int gol;
	ElmtList* next;
};
typedef ElmtList* pointer;
typedef pointer list;
void createList(list& First){
	First=NULL;
}
void createElmt(pointer& pBaru){
	pBaru = new ElmtList;
	cout<<"No. Daftar : "; cin>>pBaru->noDaftar;
	cout<<"Nama Tim : "; cin>>pBaru->tim;
	cout<<"Asal Daerah : "; cin>>pBaru->asal;
	pBaru->gol=0;
	pBaru->next=NULL;
}
void insertLast(list& First, pointer pBaru){
	pointer last;
	if(First==NULL){
		First=pBaru;
	}
	else{
		last=First;
		while(last->next != NULL){
			last=last->next;
		}
		last->next=pBaru;
	}
}
void traversal(list first){
	pointer pBantu;
	if(first==NULL){
		cout<<"Empty List !"<<endl;
	}
	else{
		pBantu=first;
		do{
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<pBantu->noDaftar<<"\t"<<pBantu->tim<<"\t"<<"\t"<<pBantu->asal<<"\t"<<pBantu->gol<<endl;
			pBantu=pBantu->next;
		}
		while(pBantu != NULL);
	}
}
void linearSearch(list& first, int found, string key, pointer pCari){
	pCari = first;
	found=0;
	while(found == 0 && pCari != NULL){
		if(pCari->tim == key){
			found=1;
		}
		else{
			pCari= pCari->next;
		}
	}
}
void update(list& First, pointer& pBaru){
	if(First==NULL){
		cout<<"Nothing can be update"<<endl;
	}
	else{
		cout<<"Banyak Gol : "; cin>>pBaru->gol;
	}
}
void sorting (list& First){
	pointer pBantu;
	if(First==NULL){
		return;
	}
	else{
		
	}
}
main(){
	pointer p, pCari;
	list uts;
	char pilih, ans;
	string nama; 
	int found, n;
	
	createList(uts);
	cout<<"Masukan banyak data : "; cin>> n;
	for(int i=0; i<n; i++){
		createElmt(p);
		insertLast(uts, p);
		traversal(uts);
		cout<<endl;
	}
	cout<<"do you want to update some data ? "; cin>>ans;
	if (ans == 'Y' || ans == 'y'){
		cout<<"Masukan nomor urut tim yang akan di update : "; cin>>nama;
		linearSearch(uts, found, nama, pCari);
		update(uts, p);
		traversal(uts);
	}
}

/*Tugas Kelompok Stack List
Nama-anggota:
1. 
2.
3.

Link Github: .....
*/
#include <bits/stdc++.h>
#define MAX_STACK_SIZE 100

using namespace std;
class Lingkaran{
public:
    double radius;
    Lingkaran *next;

    Lingkaran(){
        this->radius=1;
    }
    Lingkaran(double radius){
        this->radius = radius;
    }
    Lingkaran(Lingkaran &lingkaran) {
        this->radius = lingkaran.radius;
    }
    double getLuas(){
        return M_PI * radius * radius;
    }
    double getKeliling(){
        return 2 * M_PI * radius;
    }
};

class ListStack{
public:
    Lingkaran *top;
    ListStack(){
        top=NULL;
    }
    bool isEmpty(){
        //anggota 1
    }
    bool isFull(){
        //anggota 1
    }
    void push(Lingkaran *item){
        //anggota 2
        item -> next = NULL;
        if(isEmpty()){
            top = item;
        }else{
            item -> next = top;
            top = item;
        }
        cout << "Stack ditambahkan" << endl;
    }
    void push(double radius){
        //anggota 2
    }
    Lingkaran *pop(){
        if (isEmpty()){
            cout<<"Data kosong"<<endl;
        }else {
	        lingkaran *bantu;
	        bantu = new Lingkaran();
	        bantu= top;
	        top = top -> next;
	        cout << "Data Berhasil Dihapus"<< endl;
	        return bantu;
		}
    }
};
int main(){
    ListStack tes;

    tes.push(20);
}


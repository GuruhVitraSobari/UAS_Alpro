#include <iostream>

using namespace std;

int main(){

    int a,b,n;
    cout << "UAS Algoritma dan Pemrograman \n";
    cout << "Program Matriks Identitas \n\n";
    cout << "Masukkan Jumlah Ordo Matriks = ";cin >> n;

    for(a = 1; a <= n; a+=1){
        for(b = 1; b <= n; b+=1){
            if(a == b){
                cout << " 1 ";
            }else{
            cout << " 0 ";
            }
        }cout << "\n";
    }
return 0;
}

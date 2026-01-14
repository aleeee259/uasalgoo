#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    int jumlah;
    cout << "SISTEM PENILAIAN MAHASISWA\n";
    cout << "Masukkan jumlah mahasiswa:";
    cin>>jumlah;

    string nama[jumlah];
    float tugas[jumlah], uts[jumlah], nilaiakhir[jumlah];
    char grade [jumlah];

    //input data mahasiswa 
    for (int i=0;i<jumlah;i++){
        cout<<"\nMahasiswa ke-"<<i+1<<endl;
        cout<<"nama:";
        cin>>nama[i];
        cout<<"nilai tugas:";
        cin>>tugas[i];
        cout<<"nilai uts:";
        cin>>uts[i];


        //Hitung nilai akhir
          nilaiakhir[i]=(tugas[i] + uts[i])/2;

          //menentukan grade
          if (nilaiakhir[i]>=75)
            grade[i]='A';
        else if (nilaiakhir[i]>=65)
            grade[i]='B';
        else
            grade[i]='C';
    }

    //output hasil
    cout<< "HASIL PENILAIAN\n";
    cout<<left<<setw(15)<<"nama"
    <<setw(12)<<"nilai akhir"
    <<setw(8)<<"grade"
    <<"status\n";

    for(int i=0;i<jumlah;i++) {
        cout<<left<<setw(15)<<nama[i]
        <<setw(12)<<fixed<<setprecision(2)<<nilaiakhir[i]
        <<setw(8)<<grade[i];

        if(grade[i]=='A'||grade[i]=='B'||grade[i]=='C')
            cout<<"LULUS\n";
        else
            cout<<"TIDAK LULUS\n";
    }

    cout<<"program selesai.\n";
    return 0;
}
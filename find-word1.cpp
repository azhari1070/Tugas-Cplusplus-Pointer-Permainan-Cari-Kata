#include <iostream>
#include <cstring>
using namespace std;
int main() {
    
    char A1[] = {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'};
    char A2[] = {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'};
    char A3[] = {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'};
    char A4[] = {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'};
    char A5[] = {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'};
    char A6[] = {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'};
    char A7[] = {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'};
    char A8[] = {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'};
    char A9[] = {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'};
    char A10[] = {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'};
    char A11[] = {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'};
    char A12[] = {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'};
    char A13[] = {'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'};
    char A14[] = {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'};
    char A15[] = {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'};
    char *Y[] = {A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15};
    
  cout<<"============================================== "<<endl;
	cout<<"||       Tugas Pemograman Terstruktur       || "<<endl;
	cout<<"|| M.IQBAL, AZHARI, RIFKY EKANADA PRAMSWARY || "<<endl;
	cout<<"||                Find Words                || "<<endl;
	cout<<"============================================== "<<endl;
    for(int a = 0; a<15; a++)
	{
        for(int b=0; b<15; b++) 
        cout<<*(*(Y+a)+b)<<"  ";
        cout<<endl;
    }

            int jum_kata;
                cout<<endl<<"Masukkan Jumlah Kata yang Akan Dicari : ";
                cin>>jum_kata;
            int hasil[jum_kata], hasil_akhir[jum_kata], panjang[jum_kata] , dgnl;
                char kata[jum_kata][15];

    cin.ignore();
    for(int a=0; a<jum_kata; a++) {
        cout<<a+1<<". ";
        cin.getline(kata[a], 15);
        panjang[a]=strlen(kata[a]);   
    }

    for(int m=0; m<jum_kata; m++) {
        hasil[m]=0;
        int panjang_kata = panjang[m], x=0;
        bool ada[panjang_kata], result;
//lanjutin nanggung yang versi 2

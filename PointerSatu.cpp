#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void ShowNim(){
        cout<<"No Induk ="<<nim<<endl;
    }
};

int main(){
    mahasiswa mhs{1};
    mhs.ShowNim();

    mahasiswa &refMhs = mhs;
    refMhs.nim = 2;
    mhs.ShowNim();

    mahasiswa *pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->ShowNim();
    return 0;
}
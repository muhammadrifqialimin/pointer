#include <iostream>
#include <string>
using namespace std;
class mahasiswa
{
private:
    string nama;
public:
    friend void  setNama(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

int main()
{
    mahasiswa joko;
    setNama(joko, "Kairi Kumar");
    return 0;
}
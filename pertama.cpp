#include <iostream>
using namespace std;

class PersegiPanjang
{
public:
    int panjang, lebar;

public:
    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan Lebar :";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    //lingkaran ol;
};

class Lingkaran
{
    int jarijari;

    void input()
    {
        cout << "masukkan Jari-jari :";
        cin >> jarijari;
    }

    int LuasLingkaran(int r)
    {
        return 3.14 * r * r;
    }
};
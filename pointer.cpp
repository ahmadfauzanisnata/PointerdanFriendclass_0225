#include <iostream>
using namespace std;

class PersegiPanjang
{
    public:
    int panjang, lebar;
    int luasPersegiPanjang(int b, int a)
    {
        return a * b;
    }
};

class segitiga

{
    public:
    int tinggi, alas;
    int luasSegitiga(int a, int t)
    {
        return 0.5 *a *t;

    }
    int hitung (PersegiPanjang p)
    {
        return p.panjang;
    }
};
int main(){
    PersegiPanjang pp;
    segitiga sg;
    cout << "Masukan Panjang : ";
    cin >> pp.panjang;
    cout << "Masukan Lebar : ";
    cin >> pp.lebar;
    cout << "Masukan Alas : ";
    cin >> sg.alas;
    cout << "Masukan TInggi : ";
    cin >> sg.tinggi;
    cout << "Luas Persegi Panjang : " << pp.luasPersegiPanjang(pp.panjang, pp.lebar) << endl;
    cout << "Luas Segitiga : " << sg.luasSegitiga(sg.alas, sg.tinggi) << endl;

}

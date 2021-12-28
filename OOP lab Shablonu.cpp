// OOP lab Shablonu.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio> // printf
using namespace std;

class Pokyp {
public:
    string name;
    int age;

    Pokyp() {
        name = "";
        age = 0;
    }

    Pokyp(string f, int i) {
        name = f;
        age = i;
    }

    ~Pokyp() {

    }
};

class Farm {
public:
    string name;
    int age;

    Farm() {
        name = "";
        age = 0;
    }

    Farm(string f, int i) {
        name = f;
        age = i;
    }

    ~Farm() {

    }
};

template <class T>
class Tovar {
public:
    T *price;

    Tovar() {
        delete[] price;
        price = nullptr;
    }

    Tovar(T *i) {
        price = i;
    }

    ~Tovar() {

    }
};

int main()
{

    Pokyp p1("Erik", 54);
    Farm f1("Vlad", 23);
    Pokyp p2("Arina", 60);
    Farm f2("Vlad", 53);

    Tovar<int> k;
    Tovar<double> tg;
    int i; 
   
    
    for (i = 0; i < 10; i++) {
        k.price = k.price + 10;
        tg.price = tg.price + 10,10;
        cout << k.price<<" "<<tg.price<<endl;
    }
   
}
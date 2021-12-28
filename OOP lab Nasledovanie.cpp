// OOP lab Nasledovanie.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class School {
public:
    void Forma(){

    }
};

class Teacher : public School {
public :
    void Forma() {
        cout << "Delovaya forma odezhdu.";
    }
};

class Children : public School {
public: 
    void Forma() {
        cout << "Sholnaya forma uchenikov.";
    }
};

class Foto {
public :
    void Forma(School *School) {
        School->Forma();
    }

};
int main()
{
    Foto VVRLI;
    Teacher SSV;
    Children devyatuyB;

    VVRLI.Forma(&SSV);
    VVRLI.Forma(&devyatuyB);
}

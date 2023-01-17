// Lesson17.2CPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// need optimization

#include <iostream>
#include <string>

using namespace std;
class var
{
private:
    int _i = 0;
    double _d = 0.0;
    string _str = "";
public:
    var() {}
    var(var* v) : _i{v->_i}, _d{ v->_d }, _str{ v->_str }{}
    var(const char* str) : _str{str} {}
    var(int z) : _i{ z } {}
    var(double dz) : _d{ dz } {}
    var operator+(var& v)
    {
        if (_i != 0)
        {
            _i += v._i;
            if (v._d > 0)
                _i += int(v._d);
            if (v._str > "")
                _i += stoi(v._str);            
        }
        if (_d != 0.0)
        {
            _d += v._d;
            if (v._i > 0)
                _d += double(v._i);
            if (v._str > "")
                _d += stod(v._str);
        }
        if (_str != "")
        {
            if (v._i > 0)
                _str += to_string(v._i);
            if (v._d > 0.0)
                _str += to_string(v._d);
            _str += v._str;
             
        }
        return this;
    }
    var operator-(var& v)
    {

    }
    var operator*(var& v)
    {

    }
    var operator/(var& v)
    {

    }
    var operator+=(var& v)
    {
        if (_i != 0)
        {
            _i += v._i;
            if (v._d > 0)
                _i += int(v._d);
            if (v._str > "")
                _i += stoi(v._str);
        }
        if (_d != 0.0)
        {
            _d += v._d;
            if (v._i > 0)
                _d += double(v._i);
            if (v._str > "")
                _d += stod(v._str);
        }
        if (_str != "")
        {
            if (v._i > 0)
                _str += to_string(v._i);
            if (v._d > 0.0)
                _str += to_string(v._d);
            _str += v._str;

        }
        return this;
    }
    var operator-=(var& v)
    {

    }
    var operator*=(var& v)
    {

    }
    var operator/=(var& v)
    {

    }
    var operator=(int a)
    {
        _i = a;
        
    }
    var operator=(double a)
    {
        _d = a;
    }
    var operator=(string a)
    {
        _str = a;
    }

    friend ostream& operator<<(ostream& out, var& v)
    {
        if (v._i != 0)
        {
            out << v._i;
        }
        if (v._d != 0.0)
        {
            out << v._d;
        }
        if (v._str != "")
        {
            out << v._str;

        }
        return out;
    }
};

int main()
{

    var i = 5;
    var d = 4.4;
    var x = "10";


    cout << i << "\n";
    i += d;
    cout << i << "\n";
    i += x;
    cout << i << "\n";

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

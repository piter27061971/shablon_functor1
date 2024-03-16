// ConsoleApplication35.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>

/*template <class T> T kvadrat(T a)
{
    //a = a * a;
    return (a*a);
}
template <> std::vector <int>  kvadrat( std::vector <int> a)
{
    std::vector <int> m(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        m[i] = a[i] ;
    }
    return m;

}
*/

template <class T> T kvadrat(T a)
{
    //a = a * a;
    return (a * a);
}
template <class S> std::vector <S>  kvadrat(std::vector <S> a)
{
    std::vector <S> m(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        m[i] = a[i]*a[i];
    }
    return m;

}

template <class M>
std::string vect_strok(std::vector <M> a)
{
    std::string h="";
    for (int i = 0; i < a.size(); i++)
    {
        h =h + std::to_string(a[i])+" ";
    }
    return h;
    
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int m=4;
    std::cout <<"Исходное число " << m << " Преобразованное число " << kvadrat<int>(m) << std::endl;
    std::vector <int> b = { -1, 4, 8 };
    std::cout<< "Исходное данные " << vect_strok(b)<< " Преобразованное число " << vect_strok(kvadrat(b)) << std::endl;
    std::vector <double> a = {-1.8 , 5.4 , 10.0};
    std::cout << "Исходное данные " << vect_strok(a) << " Преобразованное число " << vect_strok(kvadrat(a)) << std::endl;
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

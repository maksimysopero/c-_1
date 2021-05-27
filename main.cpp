//1.1
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a;
	cout << "Введите число: ";
	cin >> a;

	char b;
	cout << "Введите букву: ";
	cin >> b;

	float c;
	cout << "Введите нецелое число: ";
	cin >> c;

	char x;
	cout << "Введите символ: ";
    cin >> x;

	cout << "Число = " << a << endl << "Буква = " << b << endl << "Нецелое число = " << c << endl << "Ваш символ = " << x << endl;
}

//1.2
#include <iostream>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "rus");
 
    char letter1,letter2,letter3,letter4,letter5;
    
 
    cout << "Введите слово из 5-ти букв: " << endl;
    cin >> letter1 >> letter2 >> letter3 >> letter4 >> letter5;
 
    cout << "Вы ввели данное слово: ";
    cout << letter1 << letter2 << letter3 << letter4 << letter5;
    cout << endl;
 
    return 0;
}

//1.3
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int Var01;
	cout << "Введите  первое число : ";
	cin >> Var01;

	int Var02;
	cout << "Введите второе число : ";
	cin >> Var02;
	
	cout<<"Произведение = " << Var01*Var02<<endl<<"Сумма = "<< Var01+Var02<<endl<<"Разница = "<< Var01-Var02<<endl<<"Среднее арифметическое ="<<(Var01+Var02)/2<<endl;
}

//1.4

#include<iostream> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	int cell; 
	int rabbit; 
	
	cout << "Сколько  зайцев: ";
	cin >> rabbit;
	cout << "Сколько клеток: ";
	cin >> cell;
	cout << "Максимальное количество зайцев, которое гарантированно окажется в одной клетке = " << (rabbit + cell - 1) / cell << endl;
}
//1.6 так как  пятого задания нет/не дописано
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a; 
	cout << "Введите данные о стороне квадрата: ";
	cin >> a;
	cout << "Периметр вашего квадрата = " << a * 4 << endl << "Площадь вашего квадрата = " << a * a << endl;
}

//1.7
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int first; 
	int second; 

	cout << "Введите ваш первый катет: ";
	cin >> first;
	cout << "Введите ваш второй катет: ";
	cin >> second;

	cout << "Гипотенуза равна = " << sqrt((first*first)+(second*second))  << endl;
}
//1.8
#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	int pupils; 
	int apple;

	cout << "Введите сколько всего школяров: ";
	cin >> pupils;
	cout << "Введите имеющиеся количество яблок: ";
	cin >> apple;

	cout << "Каждому школьнику достанется по "<< apple/pupils<< endl<<"яблоку"<<endl;
}
//1.9
{#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	float x; 

	cout << "Введите значение x: ";
	cin >> x;

	cout << "Значение функции равно "<<pow(x,2)+3*x-100<< endl;
}

// 1.10
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Курашкин Максим БФБО-01-20";
}
// 1.11
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;
    cout << "Надеюсь все знают, где брать значение a,b,c в уравнении. Если нет, то google в помощь) Приступаем-->";
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    if((b*b - 4*a*c) >= 0) 
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "Первый корень равен " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "Второй корень равен " << x << endl;
    }
    else
    {
        cout << "Дискриминант меньше 0, корней нет." << endl;
    }

    return 0;
}
//1.13
#include <iostream>
using namespace std;
 
int main()
{
 setlocale(LC_ALL, "rus");
 
 
 int cups;
 
 cout << "Сколько чашек всего ";// количество вводим сами
 cin>>cups; 
 int spoons = cups;
 int saucers = cups; 
 int amount = cups + spoons + saucers;  
 
 cout << "Всего " << amount << " предмета на столе" << endl;
 
 return 0;
}

//1.14
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cin >> a>>b;
	swap(a, b); 
	cout << a << endl << b << endl;
}
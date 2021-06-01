//2.1
#include <iostream>
int main()
{
    int n=88, m=2;// сами задаем числа
    std::cout << (n / m + 1) * m;
    return 0;
} // не полностью выполеяет условие, так как не знаю как ее сделать

//2.2
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a, b;

	cout << "Введите ваш первый катет: ";
	cin >> a;
	cout << "Введите ваш второй катет: ";
	cin >> b;

    cout << "Гипотенуза равна  " << sqrt((a * a) + (b * b)) << endl;
}

//2.3 
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, a, b, c;
	cout << "Введите ваше трёхзначное число: ";
	cin >> x;
	a = x / 100;
	x = x % 100;
	b = x / 10;
	x = x % 10;
	c = x;
	cout <<"Произведение цифр = "<<a * b * c << " " <<"Сумма цифр = "<< a + b + c<<endl;
}

// 2.4
#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "rus");
    int x, y;
    cout << "Введите точки x, y : ";
        cin >> x >> y;
    cout << x << "x+" << y << "y+C=0" << endl;

}

//2.6
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a; 
	int b;
	cin >> a >> b;
	swap(a, b);
	cout << a << endl << b << endl;
}

//2.7
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, a, b, c, d;
	cout << "Введите ваше четырёхзначное число: ";
	cin >> x;
	a = x / 1000;
	x = x % 1000;
	b = x / 100;
	x = x % 100;
	c = x/10;
	x = x % 10;
	d = x;

	cout << a * b + c * d << endl;
}

//2.9.1
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	float a, b;

	cout<<"Длина прямоугольника(сторона a): ";
	cin >> a;
	
	cout << "Ширина прямоугольника(сторона b): ";
	cin >> b;

	cout <<"Периметр фигуры равен = " <<(2*a)+(2*b)<< endl;
}

// 2.9.2
#include<iostream> 
using namespace std;

int main()
{

	float a, b, c;

	cout<<"First side : ";
	cin >> a;
	
	cout << "The second side : ";
	cin >> b;

	cout << "Third side : ";
	cin >> c;

	cout << "triangle perimitre = " << a + b + c << endl;
}

//2.9.3
#include<iostream> 
using namespace std;

int main()
{
	float a, b, c, d;

	cout<<"First side : ";
	cin >> a;
	
	cout << "The second side : ";
	cin >> b;

	cout << "Third side : ";
	cin >> c;

	cout << "Fourth side : ";
	cin >> d;

	cout <<"Perimeter of the quadrilateral = " <<a+b+c+d<< endl;
}

//2.10
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
        float p=3.14;
	float R;
        cout << "Радиус вашего шара  равен  ";
	cin >> R;
	cout << "Площадь поверхности шара = " <<4*p*R*R<<endl<<"Объём шара = "<<(4*p*R*R*R)/3 << endl;
}

//2.11
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    float p=3.14; // число pi
	float r,h;
	cout << "Радиус цилиндра = ";
	cin >> r;
	cout << "Высота цилиндра = ";
	cin >> h;
	cout<< "Объём цилиндра равен " <<p*r*r*h<< endl;
    cout<< "Площадь поверхности равна " <<(2*p*r)*(r+h)<< endl;
    
}

// 2.12
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double r, l, h;
	cout << "Данные радиуса основания вашего конуса = ";
	cin >>r;
	cout << "Данные о образующей вашего конуса = ";
	cin >>l;
	h = sqrt((l*l)-(r*r));
		cout << "Площадь осевого сечения прямого кругового конуса = "<<r*h<<endl;
}
//2.13
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    float p=3.14;// число pi
	double r, h, l;

	cout << "Радиус основания конуса равен ";
	cin >> r;

	cout << "Высота конуса равна ";
	cin >> h;

	l = sqrt((r*r)+(h*h));

	cout << "Объём конуса равен " <<(p*r*r*h)/3<<endl<<"Площадь поверхности конуса равна "<<(p*r)*(l+r);
}

//2.14
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    float p=3.14;// число pi
	double a,h,v,l;

	cout << "Сторона основания пирамиды равна "; //треугольная пирамида
	cin >> a;

	cout << "Высота пирамиды равна ";
	cin >> h;
    v=(h*a*a)/(4*sqrt (3)) ;
	l =((a/4)*(a*sqrt(3)+6*h));
    cout<< "Объём пирамиды равен "<<v<<endl;
    cout<<"Площадь поверхности пирамиды равна "<<l<<endl;
    
}

//2.15
#include<iostream> // Объём правильной шестиугольной пирамиды
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    float p=3.14;// число pi
	double a,h,v,l;

	cout << "Сторона основания пирамиды равна "; // шестиугольная пирамида
	cin >> a;

	cout << "Высота пирамиды равна ";
	cin >> h;
    v=sqrt(3)/2*h*a*a;
    cout<< "Объём пирамиды равен "<<v<<endl;
  
    
}

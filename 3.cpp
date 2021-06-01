// 3.1
#include<iostream> 
using namespace std;

int main()
{
	setlocale( LC_ALL, "rus" );
	int a, b;
	cin >> a >> b; 
	
	if (a % 2 != 0)
	{
	
		cout << a << endl;
	 }
	else
	{
		cout << b << endl;
	  }
}
 //3.2
#include<iostream> 
#include <algorithm>
using namespace std;

int main()
{
	int x, z, y;
	cin >> x >> z >> y;
	cout <<(x+z+y)-max(x,max(z,y))-min(x,(z, y));
}
// 3.3
include<iostream> 
using namespace std;
 
 int main() {
    setlocale(LC_ALL, "rus");
    int x;
    char c;
    printf("Число: ");
    scanf("%d%*c",&x);
    printf("Перевести в байты (1) или килобайты (2): ");
    scanf("%c",&c);
    switch (c) {
        case '1': 
            printf("%d Кб = %d байт", x, x*1024);
            break;
        case '2': 
            printf("%d байт = %.2f Кб", x, x/1024.0);
            break;
    }
    printf("\n");
}
//3.4
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	if (a>64 and a<91)
	{
		cout << "Это является кодом английской буквы ";
	}
	else if (a > 96 and a < 123)
	{
		cout << "Это является кодом английской буквы ";
	}
	else  
	{
		cout << "Это не является кодом английской буквы ";
	}
}
// 3.5
#include<iostream> 
using namespace std;

 
 int main() 
 {
    int a,b;
    scanf("%d%d",&a,&b);
    if (a%b == 0) 
    {
        printf("%d делится на %d", a, b);
    }
    else {
        
        printf(" Число %d не делится на %d\n", a, b);
        printf("Остаток равен %d", a%b);
    }
    printf("\nЧастное: %d\n", a/b);
}
//3.6
#include<iostream> 
using namespace std;

 
main() {
    int y;
    scanf("%d",&y);
    if (y%4 != 0) printf("Ваш год - обычный");
    else
        if (y%100 == 0 && y%400 != 0) printf("Ваш год - обычный");
        else printf("Ваш год - високосный");
    printf("\n");
}
//3.7
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	float a, b, c, D;

	cout << "Введите коэффициенты вашего квадратного уравнения " << endl;
	cin>>a>>b>>c;
	D = b*b-4*a*c;
	if (D > 0)
	{
		cout << "x1 =  " << (-b + sqrt(D)) / 2 * a << endl; 
	    cout<<"x2 = " << (-b - sqrt(D)) / 2 * a << endl;
	}
	else 
	
	  if (D == 0)
	{
		cout << "x = " << -b / 2 * a << endl;
	}
	else
	{
		cout << "Нет корней " << endl;
	}
}
//3.8
#include<iostream> 
using namespace std;

 
int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    if (x>0 && y>0) printf("I");
    else
        if (x<0 && y>0) printf("II");
        else 
            if (x<0 && y<0) printf("III");
            else
                if (x>0 && y<0) printf("IV");
    printf("\n");
}
//3.9

#include<iostream> 
#include<cmath>
using namespace std;

 int main() {
    float x,y,r,h;
    printf("Координаты точки: ");
    scanf("%f%f", &x,&y);
    printf("Радиус круга: ");
    scanf("%f", &r);
    h = sqrt(x*x + y*y);
    printf("Гипотенуза равна %.2f. ", h);
    if (h > r) 
    printf("Точка не принадлежит кругу.");
    else 
    printf("Точка принадлежит кругу.");
}
//3.11
#include<iostream> 
using namespace std;
 
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
 
    if (a>b) 
        if (a > c)
         printf("%d", a);
        else printf("%d", c);
    else
        if (b > c) 
         printf("%d", b);
        else printf("%d", c);
}
//3.12
#include<iostream> 
using namespace std;
 
 
int main() {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if (a+b <= c || a+c <= b || b+c <= a) 
        printf("Треугольника не существует.\n");
    else
        if (a != b && a != c && b != c) 
            printf("Разносторонний\n");
        else
            if (a == b && b == c)
                printf("Равносторонний\n");
            else
                printf("Равнобедренный\n");
}
//3.13
#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");// x  сторона, r радиус, s диагональ

	float x, r, s; 
	
	cin >> x >> r;
	s = sqrt(x * x + x * x);
	
	if (x / 2 == r)
	{
		cout << "Круг можно вписать в квадрат " << endl;
	}
	else
	 if (s / 2 == r)
	{
		cout << "Квадрат можно вписать в круг " << endl;
	}
	else
	{
		cout << "Круг нельзя вписать в квадрат и квадрат нельзя вписать в круг " << endl;
	}
	
}
// 3.14 #include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a;
	cout << "Введите возраст человека ";
	scanf("%d", &a);
	if (a > -1 && a < 7) printf("Дошкольник ");
	
	else if (a > 7 && a < 24 ) printf("Ученик");
	
	else if (a > 24 && a < 65) printf("Работник ");
	
	else if (a > 65) printf("Пенсионер");
	
}

// 3.15 
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a, b; 
	cout << "Введите возраст человека ";
	scanf("%d", &a);
	cout << "Введите рабочий стаж ";
	scanf("%d", &b);
	if (a<43 && b>=20) printf("Человек будет принят на работу");
	
	else  printf("Человек не будет принят на работу");
	
}
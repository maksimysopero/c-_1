//4.1
#include <iostream>
using namespace std;
int main()
{
 setlocale(LC_ALL, "rus");
 
 int age = 0; 
 int maxAge = 0; 
 int minAge = 100; 
 int s = 0; // сумма лет
 int z = 0; // средний возраст
 int x = 0; // количество посетителей спортзала
 
 cout << "Введите количество посетителей спортзала: ";
 cin >> x;
 
 for (int i = 0; i < x; i++)
 {
 cout << "Введите возраст " << i + 1 << "-го посетителя: "; 
 cin >> age;
 
 if (age > maxAge) 
 maxAge = age; 
 if (age < minAge) 
 minAge = age;
 
 s += age; 
 }
 
 z = s / x; // средний возраст
 
 cout << "Средний возраст всех посетителей: " << z << endl;
 cout << "Самый взрослый: " << maxAge << endl;
 cout << "Самый молодой: " << minAge << endl;
 

}

//4.2
#include<iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	int sum = 15; 
	int a; //кол-во ящиков которое  грузится в машину

	for (int i = 1; ; i++)
	{
		cout << "Ящиков загрузить в " << i << "-ю машину ";
		cin >> a;

		if (a>sum)
		{
			cout << "Ящиков не хватает " << endl;
			cout << "Осталось ящиков " << sum << endl;
			i--;
		}
		else
		{
			sum -= a;
				cout << "Осталось ящиков " << sum << endl;
		}
		if (sum == 0) printf("Ящики кончились! ");
		break;
	}
}
	
//4.3

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x = 0; 
	int y = 0; 
	int sumxy = 0;

	cout << "Введите начало диапазона: ";
	cin >> x;
	cout << "Введите конец диапазона: ";
	cin >> y;

	int i = x; 
		 
	while (i <= y)
	{
		if (i % 2 != 0)
		{
			cout << i << ", "; 
			sumxy	+= i; // сумма чисел
		}		
		i++;
	}	

	cout << "\nСумма нечетных чисел в диапазоне от " << x << " по " << y;
	cout << " = " << sumxy << endl << endl;
}
//4.4
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int h = 0; 

    cout << "Введите высоту  треугольника: ";
    cin >> h;

    for (int i = 0; i < h; i++)
    {
        for (int j = 1; j < h - i; j++)
        {
            cout << ' ';
        }

        for (int j = h - 2 * i; j <= h; j++)
        {
            cout << '^';
        }
        cout << endl;
    }
    
}
// 4.5
#include<iostream> 
using namespace std;

int main () 
{
  
int x, y;
  
scanf ("%d", &x);
  
y = x % 10;
  
x = x / 10;
  
while (x > 0)
    {
      
if (x % 10 > y)
	
y = x % 10;
      
x = x / 10;
    
}
  
printf("%d",y);
  
}

// 4.7
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int n, sum;
    cin >> n;
    sum = n*(n+1)/2;
    cout << "sum = "<<sum<<endl;
}
// 4.8
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(NULL));

    int n, i, o;
    n = rand() % 100;
    i = 1;

    while (i <= 10)
    {
        cout << i << "-я попытка ";
        cin >> o;

        if (o < n)
        {
            cout << "Меньше нужного" << endl;
        }
        else if (o > n)
        {
            cout << "Больше нужного" << endl;
        }
        else {
                printf("Угадали!!!");
                break;
        }
        i += 1;
    }
    if (i == 11)
    {
        cout << "Не угадали =(  Попытки закончились. Загаданное число " << n << endl;
    }
}
//4.9
#include <iostream>
using namespace std;

int main()
{
    char x;
    for(x=32;x<=127;x++)
    {
        cout <<x<< "-";
        if (x % 10 == 0)
        {
            cout << "\n";
        }
        if (x == 127)
        {
            break;
        }
    }
}
// 4.10
#include <iostream>
using namespace std;
 
 int main()
 {
    int x,y,z;
    scanf("%d",&x);
    y = 0; // чет
    z = 0; // неч
    while (x>0) 
    {
        if (x%2 == 0) y += 1;
        else z += 1;
        x = x/10;
    }
    printf(" количество четных - %d, количество нечетных - %d", y, z);
}

//4.11
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, i, z;
	int a = 1;
	int b = 2;

	cout << "Введите количество чисел ";
	cin >> x;
	cout << a;
	cout <<" "<< b;

	for (i = 3; i <= x; i++)
	{
		cout <<" "<< a + b;
		z = a;
		a = b;
		b = z + a;
	}
	
}
// 4.12
#include <iostream>
using namespace std;
 
 int main() {
    int a,b,c; // c - шаг a b числа
    scanf("%d%d%d",&a,&b,&c);
    for (a;a<=b;a+=c) printf("%d, ", a);
}
//4.13
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, y;

	y = 0;

	cout << "Введите ваше число ";
	cin >> x;

	while (x > 0)
	{
		y = y * 10 + x % 10;
		x = x / 10;
	}

	cout << y;
	
}
// 4.14#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	int x, amount, composition, z;

	amount = 0;
	composition = 1;
	z = 0;

	cout << "Введите число ";
	cin >> x;

	while(x>0)
	{
		z = x % 10;
		amount += z;
		composition *= z;
		x = x / 10;
	}

	cout << "Сумма равна " << amount << endl<< "Произведение равно " << composition << endl;
	
}]

//4.15

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, b;
	char s = '+';
	while (s != '0')
	{
		cout<< "Действие с числами (Деление, умножение, сложение и тп)";
		cin >> s;
		if (s == '0')
		{
			break;
		}
		if (s == '+' || s == '-' || s == '*' || s == '/')
		{
			cout << "Введите 2 числа " << endl;
			cin >> x >> b;
		}
	

		switch (s)
		{
		case '+':
			cout << "Ответ " << x + b << endl;
			break;
		case '-':
			cout << "Ответ " << x - b << endl;
			break;

		case '*':
			cout << "Ответ " << x * b << endl;
			break;

		case '/':
			if (b != 0)
			{
				cout << "Ответ " << (float)x / b << endl;
			}
			else
			{
				cout << "Ай яй на ноль делим?))" << endl;
			}

		}
	
	}
}

// Figures

#include <iostream>
#include <locale.h>

using namespace std;

//#define FIGURES
//#define SQUARE
//#define TRIANGLE_ONE
//#define TRIANGLE_TWO
//#define TRIANGLE_THREE
//#define TRIANGLE_FOUR
//#define RHOMBUS
//#define PLUS
#define PIFAGOR
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
#ifdef FIGURES
    int size;
    cout << "Введите размер фигуры: "; cin >> size;
#ifdef SQUARE
    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
#endif
#ifdef TRIANGLE_ONE
    for (int i = 0; i < size; i++)
    {
        for (int j = 0;  j <= i;  j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
#endif
#ifdef TRIANGLE_TWO
    for (int i = 0; i < size; size--)
    {
        for (int j = 1; j <= size; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
#endif 
#ifdef TRIANGLE_THREE
    for (int i = size; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < size-i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
#endif 
#ifdef TRIANGLE_FOUR
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = size; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
#endif
#ifdef    RHOMBUS
     for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
            cout << " ";
            cout << "/";
        for (int j = 0; j < i; j++)
            cout << "  ";
            cout << "\\";
            cout << endl;  
    }
     for (int i = 0; i < size; i++)
     {
         for (int j = 0; j <= i; j++)
         cout << " ";
         cout << "\\";
         for (int j = 0; j <(size-1-i); j++)
         cout << "  ";
         cout << "/";
         cout << endl;
     }
#endif
#ifdef    PLUS 
     for (int i = 0; i < size; i++)
     {
         for (int j = 1; j < size; j=j+2)
         {
             if (i % 2 == 0) cout << "+ - ";
             else cout << "- + ";
         }
         if (size % 2 == 1)
         {
             if (size%2==0) cout << "+ ";
             else cout << "- ";
         }
         cout << endl;
     }
#endif
#endif
#ifdef PIFAGOR
     for (int i = 0; i <= 9; i++)
         cout << i << '\t';
     cout << endl;
     for (int i = 1; i <= 9; i++)
     {
         cout << i << '\t';
         for (int j = 1; j <= 9; j++)
             cout << i * j << '\t';
         cout << endl;
     }
#endif

}

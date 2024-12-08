void VarsObjsAndDatatypes();

// ╔════════════════════════════════════════════════════════════════════════════╗
// ║                             Programm-Structure                             ║
// ╚════════════════════════════════════════════════════════════════════════════╝
//
// Структура программы

// Библиотека для ввода и вывода инфы
#include <iostream>

// Подключение пространства имён std.
// Без него нужно так std::cout << "" << std::endl;
using namespace std;

// Стартовой точкой программы является функция main.
// без неё никак. Иногда у функции могут быть аргументы
// int main (int argc, char *argv[]) 
int main()
{
  cout << "Hello Bababuy" << endl;
  VarsObjsAndDatatypes();
  return 0;
}



// ╔════════════════════════════════════════════════════════════════════════════╗
// ║                     Variables-Constants-and-datatypes                      ║
// ╚════════════════════════════════════════════════════════════════════════════╝
//
// Переменные, константы и типы данных

void VarsObjsAndDatatypes()
{
  // Один символ 1 байт (8 бит). -128 - 127
  signed char bukva = 'A';
  cout << bukva << endl;

  // Один символ 1 байт (8 бит). 0 - 255
  unsigned char eshceBukva = 'B';
  cout << eshceBukva << endl;

  // Один символ 1 байт (8 бит). -128 - 127 или 0 - 255
  char opyatBukva = 'j';
  cout << opyatBukva << endl;

  // Целое число 1 байт (16 бит). –32768 - 32767
  // тип также имеет псевдонимы short int, signed short int, signed short
  short chislo = 123;
  cout << chislo << endl;

  // Целое число 1 байт (16 бит). 0 - 65535
  unsigned short chisloSnova = 34234;
  cout << chisloSnova << endl;

  // Целое число 4 байт (32 бит). −2 147 483 648 - 2 147 483 648
  // тип имеет псевдонимы signed int и signed
  int normChislo = 45345345345;
  cout << normChislo << endl;

}



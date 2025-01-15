#include <iostream>
#include <string> 
#include <cctype> 
using namespace std;

bool corr(const string& num); //Функция для проверки строки на корректность (содержит только цифры)

bool dlin(string& num1, string& num2); //Функция для сравнения чисел по длине (если длина одинаковая, то сравниваются сами строки)

string vych(string& num1, string& num2); //Функция для вычитания чисел, представленных строками

string ostat(string num1, string& num2); //Функция для вычисления остатка от деления одного числа на другое

string Evkl(string a, string b); //Функция реализует алгоритм Евклида для двух чисел

string NOD(string& num1, string& num2, string& num3); //Функция NOD использует функцию Evkl для нахождения НОД сначала первых двух чисел, а затем результата с третьим

string vvod(const string& p); //Функция для проверки на корректность ввода числа

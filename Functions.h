#pragma once
#include <string>
#include "main.h"

void rout(std::string); //выдача кирилицы в терминал
std::string choice(std::string, std::string); //выбор в терминале символа с проверкой
bool is_number(const std::string&); //проверка стринга на цифру
std::string cp1251_to_utf8(const char* str); //перекодировка 
std::string utf8_to_cp1251(const char* str); //перекодировка


#ifdef _MYSQLSERVER
int createDb(); //создание базы данных
bool connectDb(); //установка соединения
void closeDb(); //закрытие соединения
#endif



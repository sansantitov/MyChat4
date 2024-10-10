#include "Msg.h"
#include "main.h"
#include "Functions.h"
#include <iostream>
#include <ctime>
#include <chrono>
#include <iostream>
#include <sstream>

#pragma warning(disable : 4996)

Msg::Msg(int id, int idFrom, int idTo, std::string message)
{
    //Формирование текущего времени
    std::ostringstream strstr;
    std::string str;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    strstr << ltm->tm_mday << ".";
    strstr << 1 + ltm->tm_mon << ".";
    strstr << 1900 + ltm->tm_year << " ";
    strstr << ltm->tm_hour << ":";
    strstr << ltm->tm_min << ":";
    strstr << ltm->tm_sec;
    str = strstr.str();
    //Запись данных
    _id = id;
    _datetime = str;
	_message = message;
	_idFrom = idFrom;
	_idTo = idTo;
}


std::string Msg::getTime()const
{
    return _datetime;
}

int Msg::getIdFrom() const
{
    return _idFrom;
}

int Msg::getIdTo() const
{
    return _idTo;
}

std::string Msg::getMessage() const
{
    return _message;
}



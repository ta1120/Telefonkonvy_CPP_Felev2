#include <iostream>             // Kiíratáshoz
#include <cstring>              // Sztringműveletekhez

#include "string.h"
String::String(char ch)
{
    len = 1;
    pData = new char[len+1];
    pData[0] = ch;
    pData[1] = '\0';
}

String::String(const char *p)
{
    len = strlen(p);
    pData = new char[len+1];
    strcpy(pData, p);
}

String::String(const String& s1)
{
    len = s1.len;
    pData = new char[len+1];
    strcpy(pData, s1.pData);
}

String::~String()
{
    delete[] pData;
}

String& String::operator=(const String& rhs)
{
    if (this != &rhs)
    {
        delete[] pData;
        len = rhs.len;
        pData = new char[len+1];
        strcpy(pData, rhs.pData);
    }
    return *this;
}

char& String::operator[](unsigned int idx)
{
    if (idx >= len) throw "ERROR 404";
    return pData[idx];
}

String String::operator+(const String& rhs) const
{
    String temp;
    temp.len = len + rhs.len;
    delete []temp.pData;
    temp.pData = new char[temp.len+1];
    strcpy(temp.pData, pData);
    strcat(temp.pData, rhs.pData);
    return temp;
}

std::ostream& operator<<(std::ostream& os, const String& s0)
{
    os << s0.c_str();
    return os;
}





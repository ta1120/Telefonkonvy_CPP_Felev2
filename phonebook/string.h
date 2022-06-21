#ifndef STRING_H
#define STRING_H

#include <iostream>

class String
{
    char *pData;
    size_t len;
public:
    void printDbg(const char *txt = "") const
    {
        std::cout << txt << "[" << len << "], "
                  << (pData ? pData : "(NULL)") << '|' << std::endl;
    }

    String() :pData(0), len(0) {}
    size_t size() const
    {
        return len;
    }
    const char* c_str() const
    {
        if (pData == NULL) return "";
        else return pData;
    }
    virtual ~String();

    String(char ch);

    String(const char *p);

    String(const String& s1);

    String& operator=(const String& rhs);

    String operator+(const String& rhs) const ;

    char& operator[](unsigned int idx);
};

std::ostream& operator<<(std::ostream& os, const String& s0);



#endif

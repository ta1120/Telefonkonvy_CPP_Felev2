#ifndef STORED_TYPES_HPP
#define STORED_TYPES_HPP

#include <iostream>
#include "string.h"


class Name //Vezeteknev es keresztnev tarolasa
{
protected:
    String firstName;
    String lastName;
public:
    Name(const char* first,const char* last): firstName(first),lastName(last){};
    String GetFN() const {return firstName;}
    String GetLN() const {return lastName;}
    String GetFullName() const {return firstName + " " + lastName;}
    void print(){std::cout << GetFullName() << "\n";}
    virtual ~Name();
};

class PhNum //Munkahelyi es mobiltelefonszam tarolasa
{
protected:
    String workTel;
    String mobile;
public:
    PhNum(const char* wt, const char* m): workTel(wt),mobile(m){};
    String GetWN(){return workTel;}
    String GetMobile(){return mobile;}
    void print(){std::cout << "Work: " << GetWN() << " Mobile: " << GetMobile() << "\n";}
    virtual ~PhNum();

};

class Address //Lakcim tarolasa(irsz,varos,utca,hazszam)
{
protected:
    String zip;
    String city;
    String street;
    String hnum;
public:
    Address(const char* z, const char* c,const char* s,const char* n) :zip(z),city(c),street(s),hnum(n){};
    String GetZIP(){return zip;}
    String GetCity(){return city;}
    String GetAddress(){return street + " " + hnum;}
    void print(){std::cout << GetZIP() + " " + GetCity() + " " + GetAddress() + "\n";}
    virtual ~Address();
};

class Date //Datum eltarolasa (szuletesnaphoz)
{
protected:
    int year;
    int month;
    int day;
public:
    Date(int y,int m,int d): year(y),month(m),day(d){};
    int GetYear(){return year;}
    int GetMonth(){return month;}
    int GetDay(){return day;}
    void print(){std::cout << GetYear() << "." << GetMonth() << "." << GetDay() << "\n";}
    virtual ~Date();
};

#endif // STORED_TYPES_HPP

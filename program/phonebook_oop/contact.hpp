#include <iostream>
#include "string.h"
#include "stored_types.hpp"

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
    Name name;
    String nickname;
    Address address;
    PhNum number;
    String email;
    Date birthdate;
public:
    Contact(Name n, String nick,Address a,PhNum num,String e,Date d): name(n),nickname(nick),address(a),number(num),email(e),birthdate(d){};
    virtual void print()
    {
        name.print();
        std::cout << nickname << "\n";
        address.print();
        number.print();
        std::cout << email << "\n";
        birthdate.print();
    }
    Name GetName(){return name;}
    String GetNick(){return nickname;}
    Address GetAddress(){return address;}
    PhNum GetNumber(){return number;}
    String GetEmail(){return email;}
    Date GetBD(){return birthdate;}
    virtual ~Contact();
};


#endif // CONTACT_HPP

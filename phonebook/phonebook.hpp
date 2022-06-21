#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "array.hpp"
#include "contact.hpp"
#include <iostream>


class PhoneBook
{
    Array<Contact*> entry;
public:
        void list_contacts();
        void Add(Contact* c);
        void Remove(Contact* c);
        void SearchByName(const Name& n);
        void SearchByNumber(const PhNum& num);
        void SearchByAddress(const Address& a);
        void SearchByBirthday(const Date bd);
};


#endif // PHONEBOOK_HPP


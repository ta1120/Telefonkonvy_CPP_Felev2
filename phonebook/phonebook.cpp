
#include "phonebook.hpp"
#include "contact.hpp"

void PhoneBook::Add(Contact* c)
{
    entry.bovit(c);
}

void PhoneBook::Remove(Contact* c)
{
    if(entry.GetLength() == 0) return;
    entry.elem_ki(c);
}

void PhoneBook::list_contacts()
{
    for(size_t i = 0; i< entry.GetLength();i++)
    {
        entry[i]->print();
    }
}

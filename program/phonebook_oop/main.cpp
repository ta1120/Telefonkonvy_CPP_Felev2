#include <iostream>
#include "array.hpp"
#include "contact.hpp"
#include "phonebook.hpp"
#include "phonebook.cpp"
#include "stored_types.hpp"
#include "string.h"



using namespace std;

int main()
{
    /*                                                         EZ NEM A VEGLEGES TESZT!*/

    //Telefonkonyv teszt, mukodes szemleltetese
    Contact proba_1(Name("Elek","Teszt"),String("Uttoro"),Address("1111","Budapest","Ez utca","1"),PhNum("123456","654321"),String("telek@email.hu"),Date(1990,1,1));
    Contact proba_2(Name("Janos","Kovacs"),String("Tomi"),Address("1122","Kecskemet","Fo utca","100"),PhNum("11223344","44332211"),String("kovajni@g.g"),Date(2000,10,23));

    std::cout << "2 teszt contact felveve: \n";
    proba_1.print();
    proba_2.print();

    PhoneBook test;
    std::cout << "Telefonkonyv peldany letrehozva\n";

    test.Add(&proba_1);
    std::cout << "Proba_1 felveve\n";
    test.list_contacts();

    test.Add(&proba_2);
    std::cout << "Proba_2 felveve\n";
    test.list_contacts();

    Name keres("Elek","Teszt");
    std::cout << "Keressuk a kovetkezo nevet: ";
    keres.print();
    test.SearchByName(keres);

    std::cout << "Toroljuk a kovetkezo contactot: \n";
    proba_1.print();
    std::cout << "Ezutan a telefonkony: \n";
    test.Remove(&proba_1);
    test.list_contacts();

    std::cout << "TEST1 vege\n";


}

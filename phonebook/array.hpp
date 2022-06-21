#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stddef.h>
#include "contact.hpp"


template <class T>
class Array
{
protected:
    T* Elements;
    size_t length;

public:

    Array(size_t h = 0) :length(h){Elements = new T[length];}
    Array(Array<T>& o)
    {
        length = o.length;
        Elements = new T[length];
        for(size_t i = 0;i<length;i++)
        {
            Elements[i] = o.Elements[i];
        }
    }
    T& operator[](size_t n){return Elements[n];}
    Array& operator=(const Array& c)
    {
        if(*this != c)
        {
            length = c.length;
            delete[] Elements;
            for(size_t i = 0;i<length;i++)
            {
                Elements[i] = c.Elements[i];
            }
        }
        return this;
    }
    T* GetElement(){return Elements;}
    size_t GetLength(){return length;}
    ~Array(){delete Elements;}

    void bovit(Contact* be)
    {
        for(size_t i = 0;i<length;i++)
        {
            if(Elements[i] == be) return;
        }
        length++;
        T* uj = new T[length];
        for(size_t i = 0;i<length-1;i++)
        {
            uj[i] = Elements[i];
        }
        delete[] Elements;
        uj[length-1] = be;
        Elements = uj;
    }

    void elem_ki(Contact* ki)
    {
        bool eleme = false;
        for(size_t i = 0;i<length;i++)
        {
            if(Elements[i] == ki) eleme = true;
        }
        if(eleme == 0) return;
        length--;
        T* uj = new T[length];
        size_t j = 0;
        for(size_t i = 0;i<length+1;i++)
        {
            if(Elements[i] != ki){ uj[j] = Elements[i];j++;}
        }
        delete[] Elements;
        Elements = uj;
    }
};

#endif // ARRAY_HPP

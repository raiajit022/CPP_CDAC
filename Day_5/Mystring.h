#ifndef MYSTRING_H
#define MySTRING_H

class Mystring
{
    private:
    char * p;
    int size;

    public:
    Mystring();
    Mystring(int s);
    Mystring(const char * val);
    Mystring(const Mystring& other);
    ~Mystring();

    void display() const;
    void input();


};

#endif
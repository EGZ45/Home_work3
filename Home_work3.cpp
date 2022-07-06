//                          [2]Разработать класс Person, который содержит соответствующие члены для хранения :
//              ■ имени,
//              ■ возраста,
//              ■ пола
//              ■ телефонного номера.
//              Напишите функции - члены, которые смогут изменять эти члены данных индивидуально.
//              Напишите функцию - член Person::Print(), которая выводит отформатированные данные о человеке.




#include "Person.h"

int main()
{
    setlocale(LC_ALL, "ru");
    Person person1;
    person1.Print();
    person1.InputName();
    person1.InputLastName();
    person1.InputAge();
    person1.InputGender();
    person1.InputNumber();
    person1.Print();
    
}


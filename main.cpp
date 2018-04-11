#include <iostream>
#include <string>
#include "Person.h"


template <class T>
T max(T const& t1, T const& t2){
    return t1 < t2 ? t2 : t1;
}
int main() {
    std::cout << "Max of 33 and 44 is "  << max(33, 44) << '\n';
    std::string s1 = "hello";
    std::string s2 = "world";
    std::cout << "Max of " << s1 << " and " << s2 << " is " << ::max(s1, s2) << '\n';

    Person person1("Walter", "White", 52);
    Person person2 ("Jessie", "Pinkman", 25);

    std::cout << "Max of " << person1.getName() << " and " << person2.getName() << " is " << max(person1, person2).getName() << '\n';
    return 0;
}
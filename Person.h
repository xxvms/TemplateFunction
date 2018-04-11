//
// Created by xxvms on 08/04/18.
//

#ifndef SECTION5BUILD_CLASSES_PERSON_H
#define SECTION5BUILD_CLASSES_PERSON_H

#include <string>

class Person {
private:
  std::string firstName;
  std::string lastName;
  int arbitraryNumber;

public:
  Person();
  ~Person();
  Person(std::string first, std::string last, int arbitrary);
  std::string getName() const;
  int getNumber() const;
  void setNumber(int x);


};


inline bool operator<( const Person& p0, const Person& p1)  {
    return p0.getNumber() < p1.getNumber();
}

inline bool operator <(const int i, const Person& person) {
    return i < person.getNumber();
}
#endif // SECTION5BUILD_CLASSES_PERSON_H

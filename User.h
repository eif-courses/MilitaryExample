//
// Created by Marius on 1/25/2021.
//

#ifndef MILITARYEXAMPLE_USER_H
#define MILITARYEXAMPLE_USER_H
#include <iostream>

using namespace std;

class User {
private:
  string country;
  int age;
  int difficulty;
public:
  User(const string &country, int age, int difficulty);

  const string &GetCountry() const;

  void SetCountry(const string &country);

  int GetAge() const;

  void SetAge(int age);

  int GetDifficulty() const;

  void SetDiffuculty(int diffuculty);

};


#endif //MILITARYEXAMPLE_USER_H

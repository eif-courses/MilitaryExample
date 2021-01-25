//
// Created by Marius on 1/25/2021.
//

#include "User.h"

User::User(const string &country, int age, int difficulty) : country(country), age(age), difficulty(difficulty) {}

const string &User::GetCountry() const {
  return country;
}

void User::SetCountry(const string &country) {
  User::country = country;
}

int User::GetAge() const {
  return age;
}

void User::SetAge(int age) {
  User::age = age;
}


void User::SetDiffuculty(int difficulty) {
  User::difficulty = difficulty;
}

int User::GetDifficulty() const {
  return difficulty;
}

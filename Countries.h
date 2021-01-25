//
// Created by Marius on 1/25/2021.
//

#ifndef MILITARYEXAMPLE_COUNTRIES_H
#define MILITARYEXAMPLE_COUNTRIES_H

#include <iostream>
#include <vector>
#include "Country.h"
#include "Statistics.h"

using namespace std;


vector<Country> countriesList;

vector<Country> GetCountries() {
  countriesList = vector<Country>{
      Country("Lithuania",
              Statistics(
                  3,
                  222,
                  Mentality::HAPPY,
                  22222,
                  10020)),
      Country("Germany",
              Statistics(
                  3,
                  444,
                  Mentality::HAPPY,
                  22222,
                  10020)),
      Country("France",
              Statistics(
                  3,
                  5555,
                  Mentality::HAPPY,
                  22222,
                  10020)),
      Country("Poland",
              Statistics(
                  3,
                  777,
                  Mentality::HAPPY,
                  22222,
                  10020)) };
  return countriesList;
}

void update(int index, Country country){
  countriesList[index] = country;
}


#endif //MILITARYEXAMPLE_COUNTRIES_H

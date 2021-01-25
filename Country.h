//
// Created by Marius on 1/25/2021.
//

#ifndef MILITARYEXAMPLE_COUNTRY_H
#define MILITARYEXAMPLE_COUNTRY_H


#include "Statistics.h"
#include <iostream>
using namespace std;
class Country {
private:
  string name;
  Statistics statistics;
public:
  Country(const string &name, const Statistics &statistics);
  const string &GetName() const;
  const Statistics &GetStatistics() const;


};


#endif //MILITARYEXAMPLE_COUNTRY_H

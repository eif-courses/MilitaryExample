//
// Created by Marius on 1/25/2021.
//

#include "Country.h"

const string &Country::GetName() const {
  return name;
}

const Statistics &Country::GetStatistics() const {
  return statistics;
}

Country::Country(const string &name, const Statistics &statistics) : name(name), statistics(statistics) {}

//
// Created by Marius on 1/25/2021.
//

#include "Statistics.h"

Statistics::Statistics(int population, int food, Mentality mentality, int balance, int military) : population(
    population), food(food), mentality(mentality), balance(balance), military(military) {}

int Statistics::GetPopulation() const {
  return population;
}

void Statistics::SetPopulation(int population) {
  Statistics::population = population;
}

int Statistics::GetFood() const {
  return food;
}

void Statistics::SetFood(int food) {
  Statistics::food = food;
}

Mentality Statistics::GetMentality() const {
  return mentality;
}

void Statistics::SetMentality(Mentality mentality) {
  Statistics::mentality = mentality;
}

int Statistics::GetBalance() const {
  return balance;
}

void Statistics::SetBalance(int balance) {
  Statistics::balance = balance;
}

int Statistics::GetMilitary() const {
  return military;
}

void Statistics::SetMilitary(int military) {
  Statistics::military = military;
}

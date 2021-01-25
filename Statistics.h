//
// Created by Marius on 1/25/2021.
//

#ifndef MILITARYEXAMPLE_STATISTICS_H
#define MILITARYEXAMPLE_STATISTICS_H

enum class Mentality{ HAPPY, WELL, NEUTRAL, FRUSTRATED, REBELIOUS };
class Statistics {
private:
  int population;
  int food;
  Mentality mentality;
  int balance;
  int military;
public:
  Statistics(int population, int food, Mentality mentality, int balance, int military);

  int GetPopulation() const;

  void SetPopulation(int population);

  int GetFood() const;

  void SetFood(int food);

  Mentality GetMentality() const;

  void SetMentality(Mentality mentality);

  int GetBalance() const;

  void SetBalance(int balance);

  int GetMilitary() const;

  void SetMilitary(int military);
};


#endif //MILITARYEXAMPLE_STATISTICS_H

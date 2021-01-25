#include <iostream>
#include "User.h"
#include "Countries.h"
#include <iostream>

using namespace std;
int main() {



  vector<Country> countries = GetCountries();

  cout << "==============================Pasirinkite saly====================================="<<endl;
  int country, age, difficulty;
  for (int i = 0; i < countries.size(); ++i) {
    cout << (i+1) <<". " << countries[i].GetName() << endl;
  }
  cout << "Iveskite saly: ";
  cin >> country;

  cout << "Iveskite amziu: ";
  cin >> age;
  cout << "Iveskite lygi: ";
  cin >> difficulty;
  User user(countries[country-1].GetName(), age, difficulty);
  cout <<" , country: " <<user.GetCountry() <<", age: " << user.GetAge() << ", diff: " << user.GetDifficulty() << endl;

  for(auto c: countriesList){
    cout << "Balance: "<< c.GetStatistics().GetBalance() <<
    ", Food: " << c.GetStatistics().GetFood()<<
    "Military: " << c.GetStatistics().GetMilitary() <<
    endl;
  }

  for (int i = 0; i < countries.size(); ++i) {
    cout << (i+1) <<". " << countries[i].GetName() << endl;
  }
  cout << "Iveskite saly: ";
  cin >> country;

  int pop, food,bal, mil;

  cout << "Iveskite populiacija: ";
  cin >> pop;
  cout << "Iveskite maista: ";
  cin >> food;
  cout << "Iveskite balance: ";
  cin >> bal;
  cout << "Iveskite armija: ";
  cin >> mil;

  Statistics statistics(pop, food, Mentality::NEUTRAL, bal, mil);

  Country customCountryStats(countriesList[country-1].GetName(), statistics);


  update(country-1, customCountryStats);


  cout << endl;
  for(auto c: countriesList){
    cout <<c.GetName() <<"   Balance: "<< c.GetStatistics().GetBalance() <<
         ", Food:    " << c.GetStatistics().GetFood()<<
         "Military: " << c.GetStatistics().GetMilitary() <<
         endl;
  }















  return 0;
}

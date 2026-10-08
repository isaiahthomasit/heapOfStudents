#include "date.h"
#include <iostream>
#include <sstream>

Date::Date(){

}

void Date::init(std::string dateString){
  std::stringstream ss(dateString);

  std::string monthString;
  std::string dayString;
  std::string yearString;

  std::getline(ss, monthString, '/');
  std::getline(ss, dayString, '/');
  std::getline(ss, yearString);

  std::stringstream converter1(monthString);
  converter1 >> month;
  
  std::stringstream converter2(dayString);
  converter2 >> day;

  std::stringstream converter3(yearString);
  converter3 >> year;

}

void Date::printDate(){
  std::string months[] = {
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
  };

  std::cout << months[month] << " " << day << ", " << year << std::endl;

}

// Date header file
#ifndef DATA_H
#define DATA_H

#include <string>

class Date{
protected:
  std::string dateString;
  int month;
  int day;
  int year;

public:
  Date();
  void init(std::string dateString);
  void printDate();

};

#endif

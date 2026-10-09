#include "address.h"
#include <iostream>

Address::Address(){
  this->street = "";
  this->city = "";
  this->state = "";
  this->zip = "";
}

void Address::init(std::string street, std::string city, std::string state, std::string zip){

  this->street = street;
  this->city = city;
  this->state = state;
  this->zip = zip;
  // assigns parameter 'name' to Address class 'name'

}  

void Address::printAddress(){
  std::cout << street << '\n' << city << " " << state << ", " << zip << std::endl;

}

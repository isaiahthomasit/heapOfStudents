```mermaid

classDiagram

class Student{
  # str studentString
  # str firstName
  # str lastName
  # Date* dob
  # Date* expectedGrad
  # Address* Address
  # int creditHours
  + Student()
  + ~Studen()
  + void init(studentString)
  + void printStudent() 
}

class Date{
  # str dateString
  # int month
  # int day
  # int year
  + Date()
  + void init(dateString)
  + void printDate()
}

class Address{
  # str street
  # str city
  # str state
  # str zip
  + Address()
  + void init(street, city, state, zip)
  + void printAddress()
}

Student --> Date

Student --> Address

```

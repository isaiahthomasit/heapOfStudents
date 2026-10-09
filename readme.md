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
  + ~Student()
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
# Address Header
```
If not defined, define the header of Address

class Address{
protected:
  define street, city, state, and zip as strings

public:
  create constructor for Address class
  create an initializer that receives 4 string inputs: street, city, state, and zip
  create printAddress function for Address class

```
# Address Code
```
in


  
  


```

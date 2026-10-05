```text

Examples Used:
  cpp_adv_oop:
    basicHeap
    critterHeap

# basicHeap
int stackInt = 0; //

15 int* heapInt = new int; // "new" creates 2 things: a pointer to the data on the heap cloud 
*heapInt = 5; // pointer to an int

18 std::string* heapString = new std::string("I'm on the heap"); // pointer on heapString, data lives on the heap

21 int* heapArray = new int[5] // you can change the array size later, can't do that on stack

28 delete heapInt; // "delete" = free up memory, deletes what the pointer was pointing to, why? if not, causes memory leak 
29 delete heapString;

delete[] heapArray; // use this for deleting or freeing an array

# critterHeap.cpp

~Critter(); // ~ = tilda, tilda is a destructor, you should write this right away, clean up your play things
*Critter::name = name; // value at name gets name

//delete class
Critter::~Critter //destructor is called when the class is deleted

// c is a pointer so you use the arrow 
c->setName("George")

// delete heap data that c points to, pointer will be destroyed automatically
delete(c);

Critter* cA = new Critter[3];

// when writing a new pointer, you should immediately write the delete 
delete[] cA;


```

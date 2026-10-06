# Day 1

```text

___________

Examples Used:
  cpp_adv_oop:
    basicHeap.cpp
    critterHeap.cpp
__________

basicHeap
int stackInt = 0; //

15 int* heapInt = new int;
  //"new" creates 2 things: a pointer to the data on the heap cloud

*heapInt = 5;
  //pointer to an int

18 std::string* heapString = new std::string("I'm on the heap");
  //pointer on heapString; data lives on the heap

21 int* heapArray = new int[5]
  //you can change the array size later; can't do that on the stack

28 delete heapInt;
  //"delete" = free up memory; deletes what the pointer was pointing to, why? If not, it causes a memory leak 
29 delete heapString;

delete[] heapArray;
  //use this for deleting or freeing an array

___________

critterHeap.cpp
~Critter();
  //~ = tilde; tilde is a destructor; you should write this right away, clean up your play things

*Critter::name = name;
  //value at name gets name

Critter::~Critter
  //delete class
  //destructor is called when the class is deleted

c->setName("George")
  //c is a pointer, so you use the arrow 

delete(c);
  //delete heap data that c points to; the pointer will be destroyed automatically

Critter* cA = new Critter[3];
 
delete[] cA;
  //when writing a new pointer, you should immediately write the delete

___________


```

# Day 2

```

___________

Review:
Access to 2 different types of memory. We've been using the stack
The new memory we are learning is heap memory / shared memory
You can easily destroy/create it and move it around
Stack space = local
Heap space = shared

"new" means it's on the heap in C code

___________


critterHeap
valgrind ./a.out
  //valgrind keeps track of every time memory is allocated and deallocated
  //Tells you when there is a memory leak

valgrind --leak-check=full ./a.out
  //tells you exactly WHERE a memory leak was found.
  //EX: critterleak.cpp:44 -> line 44
  //EX: HEAP SUMMARY: 8 allocs, 8 frees -> good message, no leaks

___________

```

# Project Info

```
___________

Examples Used:
  cpp_adv_oop:
    shallowCopy.cpp
    shallowHeap.cpp
    deepCopy.cpp
    friend.cpp
    complex.cpp
    staticBus.cpp

___________

I've blanked out here; these are just keywords to take note of:

  //copying classes
  //When copying in the heap, it doesn't work the same as copying on the stack.
  //To copy in the heap, you'll need to create a deepCopy


friend
friend void changeName();
  //"friend" is an identifier
  //friend function (in C++) can access private instance variables

staticbus
  //the word "static" doesn't belong to an instance
  //the "board" method is attached to an instance
  //you can have static methods and static data, belongs to the class, not the instances

static void printTotal();
  //static belongs to the class
  //the ordinary methods belong to everybody
  //static method you can only manipulate static data






  



```

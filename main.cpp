#include <iostream>
#include "address.h"
#include "date.h"

int main(){

    Address a;

    a.init("123 W Main St", "Muncie", "IN", "47303");

    a.printAddress();

    // end testAddress

    Date d;

    d.init("01/27/1997");

    d.printDate();
    
    // end testDate

    return 0;
}

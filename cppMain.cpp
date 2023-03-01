
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
//class cppMain {  


 // void printExtra() { 
    //    std::cout << "extra";
    //}

class extra { 
    
public:
 void printExtra() { 
     std::cout << "Hello EXTRA!";
}
};



int main() { 
    //printExtra(); 
    extra example;
    example.printExtra();
    std::cout << "Hello!" << std::endl; 

    return 0;


  } 




//};




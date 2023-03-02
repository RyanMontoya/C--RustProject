
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

string value;
 void printExtra() { 
     std::cout << "Hello EXTRA!";
} 

string print2()  { 
return value;
}

};



int main() { 
    //printExtra(); 
    extra example; 
    example.value = "hi"; 
    example.printExtra();
    std::cout << "Hello!" << example.value << std::endl; 

    return 0;


  } 




//};




// this file will append new information to the file

#include <iostream>

// to run the c++ command use the g++ or clang++ 
// example: g++ logappend.cpp -o logappend
//                 ^               ^
//               c++ filename     executable filename


int main(int argc, char* argv[]){
    // std::cout prints the string after the "<<" insertion operator. 
    // Note: you can do multiple insertion and at the end std::endl to end the line.
   
    // this argc and argv is used for inputting codes in command line while executing the object file
   for( int i = 1; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }

    std::cout << "Hello logappend!" << std::endl;
}

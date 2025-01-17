#include <iostream>
#include <string>
#include <fstream>

#include "encode.hpp"

int main(){
    std::string input;
    std::cin>>input;
    //filename, space, flag (e/d)
    //change this to be cli-compatible?
    std::string filename = input.substr(0,input.find(" "));
    std::string flag = input.substr(input.find(" ")+1, input.back());
    struct array_struct encodedfile = encode(filename);
    for(int i = 0; i < 4; i++)
    {
    std::cout<<encodedfile.words_arr[i][0];
    std::cout<<encodedfile.words_arr[i][1];
    std::cout<<encodedfile.words_arr[i][2];
    std::cout<<"\n";
    }
    return 0;
}
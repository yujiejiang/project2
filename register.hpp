//
//  register.hpp
//  pro2
//
//  Created by YuJie Jiang on 10/13/19.
//  Copyright © 2019 YuJie Jiang. All rights reserved.
//

#ifndef register_hpp
#define register_hpp
#include <sstream>
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <limits>


using namespace std;

class Register
{
public:    
    Register();
    
    Register(string& registertype);
    
    Register(const vector<string>& source_code);
    
    vector<Register> _registers;
    
    void read_register();
    
    void print();
   

  
    
private:
    vector<string> source;
    
    string register_type;

    int num_of_register;
    
 
};







#endif /* register_hpp */

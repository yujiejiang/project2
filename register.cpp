//
//  register.cpp
//  pro2
//
//  Created by YuJie Jiang on 10/13/19.
//  Copyright © 2019 YuJie Jiang. All rights reserved.
//

#include "register.hpp"

Register::Register(){}

Register::Register(string& registertype)
{
    register_type = registertype;
}


Register::Register(const vector<string>& source_code)
{
    source = source_code;
}

//read first word of each line, which is the registers
void Register::read_register()
{
    ifstream inFile("source.txt");
    string firstWord;
    
    while(inFile>>firstWord)
    {
        cout<<"firstword"<<firstWord<<endl;
        _registers.push_back(firstWord);
        inFile.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

/*
 Register Register::read_register(const string& line)
 {
 vector<string> words {"","",""};
 int i =0;
 for(char ch : line)
 {
 if (ch != ' ' && ch != '=' && ch != '=')
 {
 words[i] = words[i]+ch;
 }
 else
 {
 i = i+1;
 }
 }
 num_of_register = num_of_register+1;
 Register new_register(words[0]);
 _registers.push_back(words[0]);
 return new_register;
 }
*/

void Register::print()
{
    for(auto it{_registers.begin()}; it!=_registers.end();it++)
    {
        cout<<"-"<<&*it<<endl;
    }
}


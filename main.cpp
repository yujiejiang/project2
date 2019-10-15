//
//  main.cpp
//  pro2
//
//  Created by YuJie Jiang on 10/13/19.
//  Copyright © 2019 YuJie Jiang. All rights reserved.
//
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include "register.hpp"

using namespace std;

int main() {
    vector<string> source;
    string input;
    Register reg;
    
    while(1)
    {
      
        cout<<"****************************** HERE IS THE MENU *********************************"<<endl;
        cout<<"* A: Reading sourcefile                                                         *"<<endl;
        cout<<"* R: resister table                                                             *"<<endl;
        cout<<"* M: memory table                                                               *"<<endl;
        cout<<"* C: cache table                                                                *"<<endl;
        cout<<"* J: usage of memory and cache, virtual memory                                  *"<<endl;
        cout<<"* F: cache hit and miss, replace rate                                           *"<<endl;
        cout<<"* G: page table and memory layout of the running application                    *"<<endl;
        cout<<"* H: run-time information: the address of each instruction                      *"<<endl;
        cout<<"* E: EXIT                                                                       *"<<endl;
        cout<<"*********************************************************************************"<<endl;
        
        getline(cin, input);
        stringstream buff(input);
       // string filename;
        string command;
        buff >> command;
        
        if (command == "A")
        {
            ifstream sourceFile;
            sourceFile.open("source.txt");
            if(!sourceFile.is_open())
            {
                cout<<"errror"<<endl;
            }
            else
            {
            cout<<"-------READING FROM THE SOURCE FILE NOW-------"<<endl;
            string line;
              //  vector<string> source;
                while(sourceFile.good())
                {
                  getline(sourceFile, line);
                    source.push_back(line); //pushback
                    cout<< line <<endl;
                 }
            }
        }
        else if(command == "R")
        {
            cout<<"here is resister table: "<<endl;
            reg.print();
           
        }
        else if (command == "M")
        {
            cout<<"here is memory table"<<endl;
        }
        else if (command == "C")
        {
             cout<<"here is cache table"<<endl;
        }
        else if (command == "J")
        {
            cout<<"here is the usage of memory and cache, virtual memory"<<endl;
        }
        else if (command == "F")
        {
            cout<<"here is the cache hit and miss, replace rate"<<endl;
        }
        else if (command == "G")
        {
            cout<<"here is the  page table and memory layout of the running application"<<endl;
        }
        else if (command == "H")
        {
            cout<<"here is the application run-time information: the address of each instruction, highlight the current instruction"<<endl;
        }
        else if (command == "E")
        {
            break;
        }
        
        else
        {
        cout<<"INVALID INPUT, PLEASE TRY AGAIN \n" <<endl;
        }
    
    }
    
    
    
    return 0;
}

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <string>
#include "headerfile.hpp"





void askforuserinput(){
    std::cout << '\n';


      re:
      std::cout << "Enter the position: ";
       char a,b;

      std::cin >> a >> b;

      std::cout << "Enter the number: ";

      std::string value;
      std::cin >> value;

       float sent = 0;

      if(value == "HINT"){
        if(count == 0) {
            std::cout << "No hints left" << '\n';
            goto re;
        }
        sent  = 22.337;
      }
      else{
        if(value[0] == '-'){
            sent = (-1)*(value[1] - '0');
        }
        else{
            sent = value[0] - '0';
        }
      }


     a = toupper(a);
     b = toupper(b);

     int coordinate1 = 2*((a - 'A')+ 1 );
     int coordinate2 = 2*((b - 'A') + 1);
     

     DisplayGrid(coordinate1,coordinate2,sent);

}
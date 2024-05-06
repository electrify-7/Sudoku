#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include "headerfile.hpp"
float epsilon = 0.0001;


void DisplayGrid(int coordinate1 , int coordinate2, float value){


   if(!(fabs(value - 22.337) < epsilon)){  
     if((displayarr[coordinate1][coordinate2] != '?' || value > 9.0) && value >=0)
     {
        std::cout << "Error: The value is assigned already(to remove a previous assignment, use -1 for particular coordinate";

        askforuserinput();
     }


     else{
        if(value < 0){
            displayarr[coordinate1][coordinate2] = '?';
            colorarray[coordinate1][coordinate2] = red;
        }
        else{
        displayarr[coordinate1][coordinate2] = value + '0';
        colorarray[coordinate1][coordinate2] = cyan;
        }

int i,j;


for(i=0; i < 21; i++){
    for(j=0; j < 21; j++){
        switch (colorarray[i][j])
        {
            case blue: {
            printf("\e[1;34m%c\e[0m", displayarr[i][j]);
            std::cout << ' ';
            }
            break;
            case red: {
            printf("\e[1;31m%c\e[0m", displayarr[i][j]);
             std::cout << ' ';
            }
            break;
            case green: {
            printf("\e[1;32m%c\e[0m", displayarr[i][j]);
             std::cout << ' ';
            }
            break;
            case yellow: {
            printf("\e[1;33m%c\e[0m", displayarr[i][j]);
             std::cout << ' ';
            }
            break;
            case cyan: {
            printf("\e[1;36m%c\e[0m", displayarr[i][j]);
            std::cout << ' ';
            }
        
        default:
            break;
        }
       
    }
    std::cout << '\n';

         
}


     }
   }
else{
     displayarr[coordinate1][coordinate2] = arr[coordinate1][coordinate2];
      colorarray[coordinate1][coordinate2] = yellow;
      count--;
      std::cout << "The number was: " << arr[coordinate1][coordinate2] << '\n';


int i,j;
for(i=0; i < 21; i++){
    for(j=0; j < 21; j++){
        switch (colorarray[i][j])
        {
            case blue: {
            printf("\e[1;34m%c\e[0m", displayarr[i][j]);
            std::cout << ' ';
            }
            break;
            case red: {
            printf("\e[1;31m%c\e[0m", displayarr[i][j]);
             std::cout << ' ';
            }
            break;
            case green: {
            printf("\e[1;32m%c\e[0m", displayarr[i][j]);
             std::cout << ' ';
            }
            break;
            case yellow: {
            printf("\e[1;33m%c\e[0m", displayarr[i][j]);
             std::cout << ' ';
            }
            break;
            case cyan: {
            printf("\e[1;36m%c\e[0m", displayarr[i][j]);
            std::cout << ' ';
            }
        
        default:
            break;
        }
       
    }
    std::cout << '\n';

         
}


     std::cout << '\n';

      
   }

}

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <string>
#include "headerfile.hpp"

bool gamecheck(){
    int i,j;
    for(i=0; i < 21; i++){
        for(j=0; j < 21; j++){
            if(displayarr[i][j] != arr[i][j]){
                return false;
            }
        }
    }
    return true;
}


bool wincheck(){
    int i,j;
    for(i=0; i < 21; i++){
        for(j=0; j < 21; j++){
            if(displayarr[i][j] == '?'){
                return false;
            }
        }
    }
    return gamecheck();

}

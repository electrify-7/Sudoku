#include <random>
#include <iostream>
#include <algorithm>
#include <chrono>
#include <set>
#include <map>
#include <vector>
#include <stdio.h>
#include "headerfile.hpp"


//Guesswork for assigning values to the grid

bool check(int temp , std::map<int,int>* store, int row){
    if(store[row/2-1][temp] == 0){
        store[row/2 - 1][temp]++;
        return true;
    }
    else{
        return false;
    }
}


/* Earlier, used for storing column data before I moved to a shuffled
vector list from generating a random number for each [i][j], which 
 took fairly enough, lot of time to generate a grid.
*/

// bool check2(int temp , std::map<int,int>* store, int column){
//     if(store[column/2-1][temp] == 0){
//         store[column/2 - 1][temp]++;
//         return true;
//     }
//     else{
//         return false;
//     }
// }
 Color colorarray[21][21];
 char displayarr[21][21];
 char arr[21][21] = {0};


void create(){
   
    int i = 0; int j = 0;


    //Making an array to store color values of all

  



    int k = 0;
    arr[0][0]= ' ';
    colorarray[0][0] = green;



        for(j=1; j < 21; j++){

            if(j%2 == 0){
                arr[i][j] = 'A' + k;
                colorarray[i][j] = yellow;
                k++;
            }

            else{
                arr[i][j] = '|';
                colorarray[i][j] = blue;
            } 
        }

j = 0;
k = 0;

           for(i=1; i < 21; i++){

            if(i%2 == 0){
                arr[i][j] = 'A' + k;
                colorarray[i][j] = yellow;
                k++;
            }

            else {
                arr[i][j] = '-';
                colorarray[i][j] = blue;
            }
        }



        // for(i=0; i < 20; i ++){
        //     for(j=0; j < 20; j++){
        //         std::cout << arr[i][j];
        //     }
        //     std::cout << '\n';
        // }
    
      //Store values of the already occured digits

     std::map<int,int> store2[10];
     std::map<int,int> store[10];


     //Get a random lists of shuffled vectors;
     

    for(i=1; i < 21; i++ ){

        // Generate a random sequence of vectors

          std::vector<int> v;
          int init;
          for(init=0; init < 10; init++) v.push_back(init);

            unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

            std::default_random_engine e(seed);
            std::shuffle(v.begin(), v.end() , e);


        // Assigning values of those generated numbers and forming a grid


        for(j=1; j < 21; j ++){

            if(i%2 != 0){
                if(j%2 == 0){
                    arr[i][j] = '-';
                    colorarray[i][j] = blue;

                }
                else{
                    arr[i][j] = '.';
                    colorarray[i][j] = blue;
                }
            }
            else{
                if(j%2 != 0){
                    arr[i][j] = '|';
                    colorarray[i][j] = blue;
                }
                else{
                    int temp = 0;
                    std::vector<int>::iterator it = v.begin();
                     do{
                         temp = *(it);
                         
                         it++;
                         
                     }while(!check(temp,store,j) && it!=v.end());

                     arr[i][j] = temp + '0';   
                     colorarray[i][j] = green;
                                    
                     it--;
                    v.erase(it);
                }

            
               
            }
        }
    }

         //Create the grid to be displayed 

    

         for(i=0; i < 21; i++){
            for(j=0; j < 21; j++){
                displayarr[i][j] = arr[i][j];
           }
         }









        // Hide the generated grid with randomizer hiding
       
        srand(time(nullptr));

            
         //List for how many elements I have to remove in each row and which elements are to be removed
         // This can later be updated for when I add difficulty level medium and hard.


    for(i=2; i < 21; i=i+2)
    {
            //v here is the random list of elements to be removed from the row

            std::vector<int> v;
            int init;
            for(init=0; init < 10; init++) v.push_back(init);
            unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();

            std::default_random_engine el(seed1);
            std::shuffle(v.begin(), v.end() , el);
      
            // U here is the number of elements to be removed from the row
            std::vector<int> u;
             for(init=2; init < 6; init++) u.push_back(init);
            unsigned seed2= std::chrono::system_clock::now().time_since_epoch().count();

            std::default_random_engine ell(seed2);
            std::shuffle(u.begin(), u.end() , ell);

            int k = 0;

            int temp = u[0];

               while(temp--){
                if(v[k]*2 > 0){
                   displayarr[i][v[k]*2] = '?';
                   colorarray[i][v[k]*2] = red;
                }
                   k++;
               }

    }





//print the grid;




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
        
        default:
            break;
        }
       
    }

    std::cout << '\n';

}


 std::cout << '\n';



    

}
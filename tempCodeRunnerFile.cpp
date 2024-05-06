#include <random>
#include <iostream>
#include <set>
#include <map>
#include <vector>


bool check(int temp , std::map<int,int>* store, int row){
    if(store[row/2-1][temp] == 0){
        store[row/2 - 1][temp]++;
        return true;
    }
    else{
        return false;
    }
}


bool check2(int temp , std::map<int,int>* store, int column){
    if(store[column/2-1][temp] == 0){
        store[column/2 - 1][temp]++;
        return true;
    }
    else{
        return false;
    }
}


int main(){
    char arr[21][21] = {0};
    int i = 0; int j = 0;

    int k = 0;
    arr[0][0]= ' ';



        for(j=1; j < 21; j++){

            if(j%2 == 0){
                arr[i][j] = 'A' + k;
                k++;
            }

            else arr[i][j] = '|';
        }

j = 0;
k = 0;

           for(i=1; i < 21; i++){

            if(i%2 == 0){
                arr[i][j] = 'A' + k;
                k++;
            }

            else arr[i][j] = '-';
        }



        // for(i=0; i < 20; i ++){
        //     for(j=0; j < 20; j++){
        //         std::cout << arr[i][j];
        //     }
        //     std::cout << '\n';
        // }
    


    // Initalize with randomizer;
    
    std::srand(time(nullptr));

    std::map<int,int> store2[10];
     std::map<int,int> store[10];

    for(i=1; i < 21; i++ ){
        for(j=1; j < 21; j ++){
            if(i%2 != 0){
                if(j%2 == 0){
                    arr[i][j] = '-';
                }
                else{
                    arr[i][j] = '.';
                }
            }
            else{
                if(j%2 != 0){
                    arr[i][j] = '|';
                }
                else{
                   int temp;
                   do{
                    temp = rand()%10;
                   }while(!check(temp, store , j) || !check2(temp,store2,i));

                   arr[i][j] = temp + '0';

                }
            }
        }
    }

    //to dispay the value


            for(i=0; i < 21; i ++){
            for(j=0; j < 21; j++){
                std::cout << arr[i][j] << " ";
            }
            std::cout << '\n';
        }
    

    return 0;


}
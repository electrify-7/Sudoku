void askforuserinput();
void DisplayGrid(int coordinate1, int coordinate2, float value);
void create();
void change();
bool wincheck();

enum Color{
     blue,
     green,
     red,
     yellow,
     cyan
};

extern char arr[21][21];
extern char displayarr[21][21];
extern enum Color colorarray[21][21];
extern int count;







// #include <iostream>
// #include <vector>
// #include <set>
// #include <random>

// int main(){
//     char arr[21][21] = {0};
//     int i = 0; int j = 0;

//     int k = 0;
//     arr[0][0]= ' ';



//         for(j=1; j < 21; j++){

//             if(j%2 == 0){
//                 arr[i][j] = 'A' + k;
//                 k++;
//             }

//             else arr[i][j] = '|';
//         }

// j = 0;
// k = 0;

//            for(i=1; i < 21; i++){

//             if(i%2 == 0){
//                 arr[i][j] = 'A' + k;
//                 k++;
//             }

//             else arr[i][j] = '-';
//         }
        
        
//         std::srand(time(nullptr));
        
//       for(i=1; i < 21; i++ ){
//         for(j=1; j < 21; j ++){
//             if(i%2 != 0){
//                 if(j%2 == 0){
//                     arr[i][j] = '-';
//                 }
//                 else{
//                     arr[i][j] = '.';
//                 }
//             }
//             else{
//                 if(j%2 != 0){
//                     arr[i][j] = '|';
//                 }
             
//             }
//         }
//     }





//         for(i=0; i < 21; i ++){
//             for(j=0; j < 21; j++){
//                 std::cout << arr[i][j] << " ";
//             }
//             std::cout << '\n';
//         }
    

// }

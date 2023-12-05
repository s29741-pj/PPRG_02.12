#include<iostream>
#include <iomanip>
using namespace std;



int main() {

    int arrSize = 0;
    int arrNum = 0;

    cout << "Podaj długość tablicy : ";
    cin >> arrSize;

    int newArr[arrSize];


    for (int i = 0; i < arrSize; i++) {
            cout << "Podaj liczbę do umieszczenia w tablicy: ";
            cin >> arrNum;
            newArr[i] = arrNum;    
     }

    cout << endl;
    cout << "Tablica wejściowa:"<< endl;
    cout << endl;

     for (int col = 0; col < arrSize; col++){
        if(col % 2 == 0){
            cout<< newArr[col] << setw(7);
        }else if (col % 2 != 0){
            cout<< newArr[col];
            cout << endl;
        }
     }

    cout << endl;
    cout << "Tablica wyjściowa:"<< endl;
    cout << endl;

     for(int rev = 0; rev < arrSize; rev++){
        
        if(rev % 2 == 0){
                cout<< newArr[rev+1] << setw(7);
        }else if (rev % 2 != 0){
                cout << newArr[rev-1];
                cout << endl;
          }  
     }

    return 0;
}
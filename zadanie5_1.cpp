#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int vecSize = 0;
    int vecElem = 0;
    int counter = 0;
    int biggestElem = 0;
    int biggestElemIndex = 0;
    vector<int> userVec;


    cout << "Proszę podać liczbę elementów wektora: ";
    cin >> vecSize;

    while (counter < vecSize)
    {
        cout << "Proszę podać wartość " << counter + 1 << " elementu wektora: ";
        cin >> vecElem;
        userVec.push_back(vecElem);
        counter++;
    }


    for(int i = 0; i < userVec.size(); i++){
        if(userVec[i] > biggestElem){
            biggestElem = userVec[i];
            biggestElemIndex = i;
        } 
    }

    cout << "Wartość elementu maksymalnego: " << biggestElem << endl;
    cout << "Numer indeksu elementu maksymalnego: " << biggestElemIndex;

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int x = time(0);
    srand(x);
    cout << 1 + rand() % 15<< endl;
    //pause the program
    cin.ignore();
    cin.get();
    return 0; 
}
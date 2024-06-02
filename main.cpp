#include <iostream>
#include "Graf.h"
using namespace std;

class mainMenu
{
private:
    /* data */
public:
    mainMenu(){
        Graf graf;
        int a = graf.getNodes();
        cout << a;
        cin >> a;
    }
    
};

int main(){
    mainMenu menu;  
}



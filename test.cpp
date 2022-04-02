#include <iostream>
using namespace std;
int main(){
    int humanPicks = 0;
    int humanPick;
    cout << "Pick: "; cin >> humanPick;
    if (humanPick != 1 || humanPick != 2 || humanPick != 3){
        cout << "Invalid pick";
    }
    else {
        humanPicks =+ humanPick;
    }
    cout << humanPicks;
    return 0;
}
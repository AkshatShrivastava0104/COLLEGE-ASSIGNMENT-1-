#include <iostream>
using namespace std;

int main() {
    cout<<"AKSHAT KUMAR (102206107)";
    
    for (int i = 0; i < 5; i++) {
        cout << "for loop " << i << endl;
    }

    int j = 0;
    for (; j < 5; j++) {
        cout << "for loop without initialization  " << j << endl;
    }

    
      int k = 0;
    for (; k < 5;) {
        cout << "for loop without increment " << k << endl;
        k++;
    }

    
    int x = 0;
    while (x < 5) {
        cout << "while loop " << x << endl;
        x++;
    }

    int y = 0;
    do {
        cout << "do-while loop " << y << endl;
        y++;
    } while (y < 5);

    return 0;
}

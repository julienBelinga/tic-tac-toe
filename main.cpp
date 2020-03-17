#include <iostream>

using namespace std;

char table[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void Ecrire(){
    cout << "========== Morpion ===========" << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << table[i][j] << "";
        }
        cout << endl;
    }

}

int main()
{
        Ecrire();

        return 0;
}

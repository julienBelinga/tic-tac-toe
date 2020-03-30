#include <iostream>

using namespace std;

char table[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char joueur = 'X';

void Ecrire(){
    cout << "========== Morpion ===========" << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << table[i][j] << "";
        }
        cout << endl;
    }

}

void Input(){
    int a;
    cout << "Donnez le numéro de la case: ";
    cin >> a;

     switch(a){
case 1:
    table[0][0] = joueur;
    break;
case 2:
    table[0][1] = joueur;
    break;
case 3:
    table[0][2] = joueur;
    break;
case 4:
    table[1][0] = joueur;
    break;
case 5:
    table[1][1] = joueur;
    break;
case 6:
    table[1][2] = joueur;
    break;
case 7:
    table[2][0] = joueur;
    break;
case 8:
    table[2][1] = joueur;
    break;
case 9:
    table[2][2] = joueur;
    break;
}

void Changer_joueur(){
    if (joueur == 'X')
        joueur = 'O';
    else
        joueur = 'X';
}

int main()
{
        Ecrire();

        while(1){
            Input();
            Ecrire();
            Changer_joueur();
        }

        return 0;
}

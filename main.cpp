#include <iostream>
using namespace std;
char table[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char joueur = 'X';
void Ecrire()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void Entree()
{
    int a;
    cout << "Choissisez une case: ";
    cin >> a;

    if (a == 1)
        table[0][0] = joueur;
    else if (a == 2)
        table[0][1] = joueur;
    else if (a == 3)
        table[0][2] = joueur;
    else if (a == 4)
        table[1][0] = joueur;
    else if (a == 5)
        table[1][1] = joueur;
    else if (a == 6)
        table[1][2] = joueur;
    else if (a == 7)
        table[2][0] = joueur;
    else if (a == 8)
        table[2][1] = joueur;
    else if (a == 9)
        table[2][2] = joueur;
}
void Changerjoueur()
{
    if (joueur == 'X')
        joueur = 'O';
    else
        joueur = 'X';
}
char Fin()
{
    //1er joueur
    if (table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X')
        return 'X';
    if (table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X')
        return 'X';
    if (table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X')
        return 'X';

    if (table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X')
        return 'X';
    if (table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X')
        return 'X';
    if (table[0][2] == 'X' && table[1][2] == 'X' && table[2][2] == 'X')
        return 'X';

    if (table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X')
        return 'X';
    if (table[2][0] == 'X' && table[1][1] == 'X' && table[0][2] == 'X')
        return 'X';

    //2nd joueur
    if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O')
        return 'O';
    if (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O')
        return 'O';
    if (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O')
        return 'O';

    if (table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O')
        return 'O';
    if (table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O')
        return 'O';
    if (table[0][2] == 'O' && table[1][2] == 'O' && table[2][2] == 'O')
        return 'O';

    if (table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O')
        return 'O';
    if (table[2][0] == 'O' && table[1][1] == 'O' && table[0][2] == 'O')
        return 'O';

    return '/';
}
void Regles(){
 cout << "========== Morpion ===========" << endl;

    cout << "Chaque joueur a donc son propre symbole, généralement une croix (1) pour l’un et un rond(2) pour l’autre.";
    cout << "La partie se termine quand l’un des joueurs à aligner 3 symboles ou quand la grille est complétée sans vainqueur. Il y a alors égalité." << endl;
}

int main()
{
    Regles();
    Ecrire();
    while (1)
    {
        Entree();
        Ecrire();
        if (Fin() == 'X')
        {
            cout << "Le joueur 1 gagne!" << endl;
            break;
        }
        else if (Fin() == 'O')
        {
            cout << "Le joueur 2 gagne!" << endl;
            break;
        }
        Changerjoueur();
    }
    return 0;
}

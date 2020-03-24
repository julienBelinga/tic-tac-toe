struct plateau
{
    int table[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
};

enum type_code_partie
{
    non_finie,
    joueur_1_gagnant,
    joueur_2_gagnant,
    match_nul
};

void afficher_regles()
{
    cout << "========== Morpion ===========" << endl;

    cout << "Chaque joueur a donc son propre symbole, généralement une croix (1) pour l’un et un rond(2) pour l’autre.";
    cout << "La partie se termine quand l’un des joueurs à aligner 3 symboles ou quand la grille est complétée sans vainqueur. Il y a alors égalité.";

}

void initialiser_plateau( plateau * p )
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            p[i][j] = 0;
        }
        cout << "plateau initialiser" << endl;
        }
}

void faire_jouer_un_coup( int joueur, plateau * p )
{
     int case;

    cout << "Veuillez selectionner une case: ";
    cin >> case;

    switch(case){
case 1:
    p[0][0] = joueur;
    break;
case 2:
    p[0][1] = joueur;
    break;
case 3:
    p[0][2] = joueur;
    break;
case 4:
    p[1][0] = joueur;
    break;
case 5:
    p[1][1] = joueur;
    break;
case 6:
    p[1][2] = joueur;
    break;
case 7:
    p[2][0] = joueur;
    break;
case 8:
    p[2][1] = joueur;
    break;
case 9:
    p[2][2] = joueur;
    break;
}
}

void afficher_plateau( plateau p )
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << p[i][j] << "";
        }
        cout << endl;
}
}


void afficher_gagnant( plateau p )
{
 if( code_partie() == joueur_1_gagnant)
    cout << "joueur 1 gagnant !" << endl;
 else if (code_partie() == joueur_2_gagnant)
    cout << "joueur 2 gagnant !" << endl;
 else
    cout << "match nul !" << endl;
}


type_code_partie code_partie( plateau p )
{
    type_code_partie statement = non_finie;

    if((p[0][0] == 1 && ((p[0][1] == 1 && p[0][2] == 1) || (p[0][1] == 1 && p[0][2] == 1) || (p[1][1] == 1 && p[2][2] == 1)) ||
        p[0][2] == 1 && ((p[1][2] == 1 && p[2][2] == 1) || (p[1][1] == 1 && p[2][0] == 1)) ||
        p[2][1] == 1 && ((p[2][0] == 1 && p[2][2] == 1) || (p[1][1] == 1 && p[0][1] == 1)) ||
        p[1][0] == 1 && p[1][1] = 1 && p[1][2] = 1) {
            statement = joueur_1_gagnant;
    }
    else if((p[0][0] == 2 && ((p[0][1] == 2 && p[0][2] == 2) || (p[0][1] == 2 && p[0][2] == 2) || (p[1][1] == 2 && p[2][2] == 2)) ||
        p[0][2] == 2 && ((p[1][2] == 2 && p[2][2] == 2) || (p[1][1] == 2 && p[2][0] == 2)) ||
        p[2][1] == 2 && ((p[2][0] == 2 && p[2][2] == 2) || (p[1][1] == 2 && p[0][1] == 2)) ||
        p[1][0] == 2 && p[1][1] == 2 && p[1][2] == 2) {
            statement = joueur_2_gagnant;
    }
    else if (for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            p[i][j] == 1 || 2;
        }}){
            statement = match_nul;
        }
        else{
            statement = non_finie;
        }

    return statement;
}


void jeu()
{
    // déclaration des variables
    int joueur;
    plateau p1;

    // initialisation des variables
    initialiser_plateau( &p1 );
    joueur = 1;

    // initialisation des variables
    afficher_regles();

    // on affiche le plateau
    afficher_plateau( p1 );

    // jeu
    do
    {
        // on fait jouer un coup
        faire_jouer_un_coup( joueur, &p1 );

        // on affiche le plateau
        afficher_plateau( p1 );

        // changement de joueur
        joueur = 3 - joueur;
    } while ( code_partie( p1 ) == non_finie );

    afficher_gagnant(p1);
}


int main()
{
    jeu();

    return 0;
}

struct plateau
{
    char table[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
};

//------------------------------------------------------------
// D�claration du type type_code_partie
enum type_code_partie
{
    non_finie,
    joueur_1_gagnant,
    joueur_2_gagnant,
    match_nul
};

//------------------------------------------------------------
// Proc�dure affichant les r�gles
//A FAIRE
void afficher_regles()
{
    cout << "========== Morpion ===========" << endl;

    cout << "Chaque joueur a donc son propre symbole, g�n�ralement une croix pour l�un et un rond pour l�autre.";
    cout << "La partie se termine quand l�un des joueurs � aligner 3 symboles ou quand la grille est compl�t�e sans vainqueur. Il y a alors �galit�.";

}

//------------------------------------------------------------
// Proc�dure initialisant le plateau
// A FAIRE
void initialiser_plateau( plateau * p )
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            p[i][j] = 0;
        }
        cout << "plateau initialiser" << endl;
        }
}

//------------------------------------------------------------
// Proc�dure faisant jouer un coup au joueur j
// A FAIRE
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
//------------------------------------------------------------
// Proc�dure affichant le plateau
// A FAIRE
void afficher_plateau( plateau p )
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << p[i][j] << "";
        }
        cout << endl;
}
}

//------------------------------------------------------------
// Proc�dure affichant le gagnant
// A FAIRE
void afficher_gagnant( plateau p )
{

}

//------------------------------------------------------------
// Fonction retournant :
//      non_finie : si la partie n'est pas termin�e
//      joueur_1_gagnant : si le joueur 1 a gagn�
//      joueur_2_gagnant : si le joueur 2 a gagn�
//      match_nul : s'il y a match nul
type_code_partie code_partie( plateau p )
{
    type_code_partie statement = non_finie;

    if((p[0][0] = 1 && ((p[0][1] = 1 && p[0][2] = 1) || (p[0][1] = 1 && p[0][2] = 1) || (p[1][1] = 1 && p[2][2] = 1)) ||
        p[0][2] = 1 && ((p[1][2] = 1 && p[2][2] = 1) || (p[1][1] = 1 && p[2][0] = 1)) ||
        p[2][1] = 1 && ((p[2][0] = 1 && p[2][2] = 1) || (p[1][1] = 1 && p[0][1] = 1)) ||
        p[1][0] = 1 && p[1][1] = 1 && p[1][2] = 1) {
            statement = joueur_1_gagnant;
    }
    else if((p[0][0] = 2 && ((p[0][1] = 2 && p[0][2] = 2) || (p[0][1] = 2 && p[0][2] = 2) || (p[1][1] = 2 && p[2][2] = 2)) ||
        p[0][2] = 2 && ((p[1][2] = 2 && p[2][2] = 2) || (p[1][1] = 2 && p[2][0] = 2)) ||
        p[2][1] = 2 && ((p[2][0] = 2 && p[2][2] = 2) || (p[1][1] = 2 && p[0][1] = 2)) ||
        p[1][0] = 2 && p[1][1] = 2 && p[1][2] = 2) {
            statement = joueur_2_gagnant;
    }
    else if (for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            p[i][j] = 1 || 2;
        }}){
            statement = match_nul;
        }
        else{
            statement = non_finie;
        }

    return statement;
}

//------------------------------------------------------------
// Proc�dure g�n�rale du jeu
void jeu()
{
    // d�claration des variables
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

//------------------------------------------------------------
// Fonction principale de l'application
int main()
{
    jeu();

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include "tp3.h"

int main()
{
    T_Magasin *mon_magasin = creerMagasin("Magasin NF16");
    if (mon_magasin == NULL) {
        printf("ERREUR INIT MAGASIN");
        exit(EXIT_FAILURE);
    }

    // ============= MENU UTILISATEUR ============= */
    char choix = '0';
    while (choix != '9') {
        printf("\n======================================");
        printf("\n     %s",mon_magasin->nom);
        printf("\n======================================");
        printf("\n1. Creer un magasin");
        printf("\n2. Ajouter un rayon au magasin");
        printf("\n3. Ajouter un produit dans un rayon");
        printf("\n4. Afficher les rayons du magasin");
        printf("\n5. Afficher les produits d'un rayon");
        printf("\n6. Supprimer un produit");
        printf("\n7. Supprimer un rayon");
        printf("\n8. Rechercher un produit par prix");
        printf("\n9. Quitter");
        printf("\n======================================");
        printf("\n   Votre choix ? ");
        choix = getchar();
        viderBuffer(); // supprimer de l'entrée standard le retour charriot et les éventuels caractères supplémentaires tapés par l'utilisateur
        
        
        char* nom_magasin = NULL;
        size_t len = 0;
        switch (choix) {
            case '1' :
                printf("\n Entrez le nom du magasin: ");
                getline(&nom_magasin, &len, stdin);
                T_Magasin *nv_magasin = creerMagasin(nom_magasin);
                printf("\n Creation reussie du magasin: %s", nv_magasin -> nom);
                break;

            case '2' :
                break;

            case '3' :
                break;

            case '4' :
                break;

            case '5' :
                break;

            case '6' :
                break;

            case '7' :
               break;

            case '8' :
               break;

            case '9' :
                printf("\n======== PROGRAMME TERMINE ========\n");
                break;

            default :
                printf("\n\nERREUR : votre choix n'est valide ! ");
        }
        printf("\n\n\n");
    }

    return 0;
}

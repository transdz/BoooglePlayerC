

#include "bibdict.h"
int main(int argc,char * argv){


    //dict * didi=charger_fichier("dict.txt");
    dict * didi=nouveau_dict("test.txt");
    ajouter_mot(didi,"allo");
    ajouter_mot(didi,"alli");
    ajouter_mot(didi,"all");
    printf("Nombre de mots total = %d\n",nb_mots(didi));
    printf("Nombre de noeuds total = %d\n",nb_noeuds(didi));
    rechercher_mot(didi,"all");
    return 0;
}
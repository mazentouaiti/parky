#include <stdio.h>
#include "fonctionss.c"
#include <string.h>
int main() {
    FILE *f = fopen("data.txt", "r+"); 
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        return 1;
    }

    char parkingid[50];
    char date[50];
    int nomberofspaces;
    char mattricule[50];
    int phonenumber;
    if (fscanf(f, "%s %s %d %s %d", parkingid, date, &nomberofspaces, mattricule, &phonenumber) != 5) {
        printf("Erreur de lecture des données\n");
        fclose(f);
        return 1;
    }
    printf("Parking ID : %s\n", parkingid);
    printf("Date : %s\n", date);
    printf("Nombre d'espaces : %d\n", nomberofspaces);
    printf("Matricule : %s\n", mattricule);
    printf("Numéro de téléphone : %d\n", phonenumber);
    rewind(f);
    fprintf(f, "%s %s %d %s %d", parkingid, date, nomberofspaces, mattricule, phonenumber);
    fclose(f); 
    return 0;
}

void deleteParkingEntry(const char *parkingId) {
    FILE *f = fopen("data.h", "r");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Erreur d'ouverture du fichier temporaire\n");
        fclose(f);
        return;
    }

    char tempParkingId[50];
    char date[50];
    int nomberofspaces;
    char mattricule[50];
    int phonenumber;
    int entryFound = 0;
    while (fscanf(f, "%s %s %d %s %d", tempParkingId, date, &nomberofspaces, mattricule, &phonenumber) == 5) {
        if (strcmp(tempParkingId, parkingId) != 0) { 
            fprintf(tempFile, "%s %s %d %s %d\n", tempParkingId, date, nomberofspaces, mattricule, phonenumber);
        } else {
            entryFound = 1; 
        }
    }
    fclose(f);
    fclose(tempFile);
    remove("data.txt");
    rename("temp.txt", "data.h");

    if (entryFound) {
        printf("L'entrée avec l'ID %s a été supprimée avec succès.\n", parkingId);
    } else {
        printf("Aucune entrée trouvée avec l'ID %s.\n", parkingId);
    }
}
void updateParkingData(FILE *f, const char *parkingid, int newSpaces, int newPhoneNumber) {
    char tempParkingId[50];
    char date[50];
    int nomberofspaces;
    char mattricule[50];
    int phonenumber;
    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Erreur d'ouverture du fichier temporaire\n");
        return;
    }
    while (fscanf(f, "%s %s %d %s %d", tempParkingId, date, &nomberofspaces, mattricule, &phonenumber) == 5) {
        if (strcmp(tempParkingId, parkingid) == 0) {
            if (newSpaces != -1) nomberofspaces = newSpaces;
            if (newPhoneNumber != -1) phonenumber = newPhoneNumber;
        }
        fprintf(tempFile, "%s %s %d %s %d\n", tempParkingId, date, nomberofspaces, mattricule, phonenumber);
    }
    fclose(f);
    fclose(tempFile);
    remove("data.h");
    rename("temp.txt", "data.h");
    printf("Les données ont été mises à jour avec succès !\n");
}

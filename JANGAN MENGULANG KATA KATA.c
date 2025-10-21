jangan menggulang kata kata.md
    int count = 0;

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    char *token = strtok(input, " ");
    while (token != NULL) {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    int first = 1; 
    for (int i = 0; i < count; i++) {
        int duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            if (!first) printf(" "); 
            printf("%s", words[i]);
            first = 0;
        }
    }

    printf("\n");
    return 0;
}
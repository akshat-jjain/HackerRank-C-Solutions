

char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n - 1][m - 1][k - 1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) {
    return document[m - 1][k - 1];
}

char*** kth_paragraph(char**** document, int k) {
    return document[k - 1];
}

char**** get_document(char* text) {
    // doc points to an array of paragraphs
    char ****doc = malloc(MAX_PARAGRAPHS * sizeof(char ***)); 

    // for each paragraph, assign an array of 1 sentence, we can reallocate later
    for(int i = 0; i < MAX_PARAGRAPHS; i ++) {
        doc[i] = malloc(1 * sizeof(char **));
    }

    // for each sentence assign an array of 1 word
    for(int i = 0; i < MAX_PARAGRAPHS; i ++) {
        for(int j = 0; j < 1; j ++) {
            doc[i][j] = malloc(1 * sizeof(char*));
        }
    }

    // for each word assign an array of 1 character
    for(int i = 0; i < MAX_PARAGRAPHS; i ++) {
        for(int j = 0; j < 1; j ++) {
            for(int k = 0; k < 1; k ++) {
                doc[i][j][k] = malloc(1 * sizeof(char));
            }
        }
    }
     
    for(int n = 0, i = 0, j = 0, k = 0, l = 0; n < strlen(text); n ++) {
        if(text[n] != ' ' && text[n] != '\n' && text[n] != '.') {
            doc[i][j][k][l] = text[n];
            l++;
            doc[i][j][k] = realloc(doc[i][j][k], (l + 1) * sizeof(char));
        } else if(text[n] == ' ') {
            doc[i][j][k][l] = '\0';
            l = 0;
            k++;
            doc[i][j] = realloc(doc[i][j], (k + 1) * sizeof(char*));
            doc[i][j][k] = malloc(sizeof(char));
            continue;
        } else if(text[n] == '.') {
            doc[i][j][k][l] = '\0';
            k = l = 0;
            j++;
            doc[i] = realloc(doc[i], (j+1) * sizeof(char**));
            doc[i][j] = malloc(sizeof(char*));
            doc[i][j][k] = malloc(sizeof(char));
            continue;
        } else if(text[n] == '\n') {
            j = k = l = 0;
            i++;
            continue;
        }
    }
    return doc;
}

// Code credit :- Akshat Jain  
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1

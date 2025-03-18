int scoreOfString(char* s) {
    int score = 0;

    while (*(s + 1)) { 
        score += abs(*s - *(s + 1));  
        s++;
    }

    return score;
}
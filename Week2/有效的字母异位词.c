bool isAnagram(char * s, char * t){
    const int N = 26;
    int array[N];
    bzero(array, N * sizeof(int));
    for (char *p = s; *p != '\0'; p++) {
        array[*p - 'a']++;
    }
    for (char *p = t; *p != '\0'; p++) {
        array[*p - 'a']--;
    }
    for (int i = 0; i < N; i++) {
        if (array[i] != 0) return false;
    }
    return true;
}
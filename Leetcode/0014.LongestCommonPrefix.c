char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 0) return "";
    if (strsSize == 1) return strs[0];
    int minlen = 2000;
    for(int i = 0; i < strsSize; ++i) {
        minlen = strlen(strs[i]) < minlen ? strlen(strs[i]) : minlen;
    }
    int ansIndex = 0;
    for(int i = 0; i < minlen; ++i) {
        for(int j = 0; j < strsSize-1; ++j) {
            if (strs[j][i] != strs[j+1][i]) {
                char *ans = (char*)malloc((ansIndex+1)*sizeof(char));
                memcpy(ans, strs[0], ansIndex);
                ans[ansIndex] = '\0';
                return ans;
            }
        }
        ansIndex++;
    }
    char *ans = (char*)malloc((minlen+1)*sizeof(char));
    memcpy(ans, strs[0], ansIndex);
    ans[ansIndex] = '\0';
    return ans;
}

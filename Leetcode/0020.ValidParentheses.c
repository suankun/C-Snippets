bool isValid(char * s){
    char *stack = malloc(sizeof(char) * 10000);
    int cur = 0;
    bool res = true;
        
    for(int i = 0; s[i]; i++) {
        char *w = s[i];
        
        if(w == '(' || w == '[' || w == '{') {
            stack[cur++] = w;
        } else {
            if(!cur){
                res = false;
                break;
            }
            char *left = stack[--cur];
            bool not_parent = left == '(' && w != ')';
            bool not_square = left == '[' && w != ']';
            bool not_curly = left == '{' && w != '}';
            
            if(not_parent || not_square || not_curly) {
                res = false;
                break;
            }
        }
    }
    
    free(stack);
    return cur? false: res;
}

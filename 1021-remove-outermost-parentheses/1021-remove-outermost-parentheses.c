char* removeOuterParentheses(char* s) {
    int n=strlen(s);
    char *res=malloc(n+1);
    int j=0,depth=0;
    for(int i=0;i<n;i++){
        char ch=s[i];
        if(ch=='('){
            if(depth>0){
                res[j++]=ch;
            }
            depth++;
        }
        else{
            depth--;
            if(depth>0){
                res[j++]=ch;
            }
        }
    }
    res[j]='\0';
    return res;
}
bool isValid(char* s) {
    int length=strlen(s);
    int top=-1;
    int stack[length];
    for(int i=0;i<length;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stack[++top]=s[i];
        else
        {
        if(top==-1)
            return 0;
        else if(s[i]==')' && stack[top]=='(')
            top--;
        else if(s[i]==']' && stack[top]=='[')
            top--;
        else if(s[i]=='}' && stack[top]=='{')
            top--;
        else
            return 0;
        }
    } 
    if(top==-1)
        return 1;
    else
        return 0;
}    
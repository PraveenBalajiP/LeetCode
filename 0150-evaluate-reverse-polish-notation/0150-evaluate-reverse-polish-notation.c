int evalRPN(char** tokens, int tokensSize) {
    int top=-1;
    int *p=(int*)malloc(100*sizeof(int));
    int stack[tokensSize];
    void push(int value)
    {
        stack[++top]=value;
    }
    int pop()
    {
        if(top==-1)
            return 0;
        return stack[top--];
    }
    int peek()
    {
        return stack[top];
    }

    for(int i=0;i<tokensSize;i++)
    {
        if(isdigit(tokens[i][0]) || tokens[i][0]=='-' && isdigit(tokens[i][1]))
        {
            push(atoi(tokens[i]));
        }
        else
        {       
            int d2=pop();
            int d1=pop();
            switch(tokens[i][0])
            {
                case '+': push(d1+d2);
                            break;
                case '-': push(d1-d2);
                            break;
                case '*': push(d1*d2);
                            break;
                case '/': push(d1/d2);
                            break;
                
            }
        }
    }
    return peek();  
}
#include <iostream>
using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct stack
{
    itemType Item[MAXSTACK];
    int Count;
} Stack;

void InitializeStack(Stack *S);
int Full(Stack *S);
int Empty(Stack *S);

int main(int argc, char const *argv[])
{
    Stack S;
    itemType x;

    InitializeStack(&S);

    return 0;
}

void InitializeStack(Stack *S){
    S->Count = 0;
}

int Full(Stack *S){
    return (S->Count == MAXSTACK);
}

int Empty(Stack *S){
    return (S->Count == 0);
}
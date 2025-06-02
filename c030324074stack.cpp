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

int main(int argc, char const *argb[])
{
    Stack S;
    itemType x;

    InitializeStack(&S);

    return 0;
}

void InitializeStack(Stack *S){
    S->Count = 0;
}
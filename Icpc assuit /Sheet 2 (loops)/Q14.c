#include <stdio.h>

int main() {
    char a;
    int count;
    scanf("%c", &a);
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int b = 0;
        scanf("%d",&b);
        for (int j = 0; j < b; j++)
        {
            printf("%c",a);
        }
        printf("\n");
        
    }
    


    return 0;
}
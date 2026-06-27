#include<stdio.h>

int main(){
    float num = -45.09;
    char ch = 'g';
    int n = 10;
    char name[] = "jobaear";
    printf("%-12s%c\n",name,ch);
    printf("%*.*f\n",12,8,num);
    printf("%12c\n",ch);
    printf("%x\n",n);
return 0;
}

// #include<stdio.h>
// #include<ctype.h>
// int main(){
//     char alphabate;
//     printf("enter an alphabate\n");
    
//     alphabate = getchar();
//     if(islower(alphabate))
//     putchar(toupper(alphabate));
//     else
//     putchar(tolower(alphabate));
//     putchar('\n');
//     return 0;

// }
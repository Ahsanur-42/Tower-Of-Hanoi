#include<stdio.h>
void Tower(int n, char BEG, char AUX, char END)
{
    if(n==0)
    {
        printf("Disk 1 move %c to %c", BEG, END);
        return;
    }
    Tower(n-1, BEG, END, AUX);
    printf("\n%d Tower move from %c to %c\n", n, BEG, END);
    Tower(n-1, AUX, BEG, END);
}
int main()
{
    int n;
    printf("Enter the number of DIsk: ");
    scanf("%d",&n);
    Tower(n, 'A', 'B', 'C');
    return 0;
}
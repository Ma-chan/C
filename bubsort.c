#include  <stdio.h>

void BubSort(int x[ ], int n);
void ShowData(int x[ ], int n);
int main(void);

void BubSort(int x[ ], int n)
{
    int i, j, tmp;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (x[j - 1] > x[j]) {  
                tmp = x[j];       
                x[j] = x[j - 1];
                x[j - 1]= tmp;
            }
        }	
       ShowData(x,n);
    }
}

void ShowData(int x[ ], int n)
{
    int i;

    for (i = 0; i < n ; i++)
        printf("\t%d", x[i]);
        printf("\n");
}

int main(void)
{		
    int x[ ] = {6 ,3 , 1,  7,  0,  4,  8,  5,  2,  9};    
    int n=10;
    printf("\nバブルそーと\n");
    printf("\nそーと前:\n");
    ShowData(x, n);
    printf("\n");
    printf("そーと途中：\n");
    BubSort(x,n);
    printf("\nそーと後:\n");
    ShowData(x,n);
}

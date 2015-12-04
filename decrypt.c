#include<stdio.h>
#include<string.h>

void caesar (int key, char message[]);
void caesar (int key, char message[])
{

    int i = 0;
    char full[80];

    for (key = 0; key < 27; key++)    
    {
        for (i = 0; i < 80; i++)  
        {
            if (message[i] == ' ' || message[i] == ',' || message[i] == '.')
            {
                full[i] = message[i];  
            }
            if (message[i] <= 'Z' && message[i] >= 'A')
            {
                full[i] = 'A' + (((message[i] - 'A' + key) % 26)); 
            }
            if (message[i] <= 'z' && message[i] >= 'a')
            {
                full[i] = 'a' + (((message[i] - 'a' + key) % 26));
            }
            printf ("%c", full[i]);
        }
        printf ("\n%d : ", key + 1); 
    }
}

int main (void)
{
    char message[80];   

    strncpy (message, "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc.", 80);
    
             
    int key = 0;

    caesar (key, message);

    return 0;
}

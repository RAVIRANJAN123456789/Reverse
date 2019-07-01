#include<stdio.h>
#include<string.h>

int main() {
   char str[100],reverse[100];
   int i, j = 0;

   printf("\nEnter the string :\n");
   gets(str);

   i = 0;
   j = strlen(str) - 1;

   while (j>=0)  {
        while(str[i]!='\0')
        {
            reverse[i]=str[j];
            i++;
            j--;
        }
        continue;
    }


   printf("\nReverse string is :%s", reverse);
   return 0;
}

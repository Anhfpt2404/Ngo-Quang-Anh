#include <stdio.h>
#include <string.h>

int main () {
  char S1[1000], S2[1000];
  printf("\nVui long nhap chuoi so 1: ");
  scanf("%s", S1);
  printf("\nVui long nhap chuoi so 2: ");
  scanf("%s", S2);
   
   if ( strlen(S1) > strlen(S2)) { 
   	    char stemp[1000];
   	    strcpy(stemp,S2);
   	    strcpy(S2,S1);
   	    strcpy(S1,stemp);
   }
   int  test = 0;
	int i = 0;
		while ( S2[i] != 0){
			if ( S2[i] == S1[0]) {
				int j = 0;
				while( S1[j] != 0 && S2[i] != 0 && S1[j] == S2[i]){
					i++;
					j++;
				}
				if( S1[j] == 0) {
					test = 1;
					break;
				}
			} else { 
				i++;}
		}
   if (test==1) { 
   printf ("YES");
   } else { 
   	printf ("NO");
   }
  return 0;	
}

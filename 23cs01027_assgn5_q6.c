#include <stdio.h>
#include <string.h>

int main(){
    printf("Enter the character array (string): ");
    char mainstring[10000]; scanf("%s", mainstring);

    char tomake[10000]; printf("Enter the string to make: "); scanf("%s", tomake);

    int lenmain = strlen(mainstring);
    int lenmake = strlen(tomake);

    int freq[26] = {0};
    
    for (int i = 0 ; i < lenmain; i++){
        freq[mainstring[i] - 97]++;
    }
    for (int i = 0; i < lenmake; i++){
        if (freq[tomake[i] - 97] > 0){
            freq[tomake[i] - 97]--;
        } else {
            printf("Not possible.\n");
            return 0;
        }
    }
    printf("Possible.\n");
    return 0;

}
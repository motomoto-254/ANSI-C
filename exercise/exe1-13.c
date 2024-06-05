/* print a histogram of lenghts of words in its input*/
#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c, i, b, d, nw;
    b = 1;
    d = 0;
    int state = OUT;
    int wordLenghtArray[6]; 

    i = nw = 0;
    for(int a = 0; a < 6; ++a){
        wordLenghtArray[a] = 0;
    }
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
            ++nw;
            if(i == 1){
                ++wordLenghtArray[0]; 
            }
            else if(i == 2){
                ++wordLenghtArray[1];
            }
            else if(i == 3){
                ++wordLenghtArray[2];
            }
            else if(i == 4){
                ++wordLenghtArray[3];
            }
            else if(i == 5){
                ++wordLenghtArray[4];
            }
            else{
                ++wordLenghtArray[5];
            }
            i = 0;
        }
        else{
            state = IN;
            ++i;
        }
    }
    printf("number of words: %d\n", nw);
    for(int a = 0; a < 6; ++a){
        printf("%d lettered words:", b);
        for(int c = 0; c < wordLenghtArray[d]; ++c){
            printf("*");
        }
        ++d;
        ++b;
        printf("\n");
    }
}

#include<cs50.h>
#include<stdio.h>

// funtion prototypes
void pyramid(int n);


int main(void){

//user input
int n;
do{
        n=get_int("Height:\n");
    }
    while(n<1||n>8);
//pyramid
pyramid(n);

}

//pyramid function
void pyramid(int n){
    //row
    for(int i=0; i<n;i++){ 
        //colum
        for (int j=n-1;j>=i;j--) {
            printf(" ");  
        }
        //printing #
        for(int k=0; k<=i;k++){
            printf("#");
        }
           printf("\n");  
    } 
}

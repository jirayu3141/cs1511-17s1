// Practice question for my cs1511 class
// I won't release solutions, you have to come to my thu13-sitar or fri09-sitar class

/*
  Your task is to write a function called flanderise, which takes in a string, and 'flanderises' it
  You can assume the maximum size after flanderising the string is 1000.
  To flanderise a sentence, every word greater than 3 letters must end with 'erino', but words that have a partial substring match at the end
  will not have 'erino' at the end.

  eg.
  "hello my name is bob" becomes "helloerino my namerino is boberino"
  "compile time" becomes "compilerino timerino"
  "superman is anything but super i reckon" becomes "supermanerino is anythingerino but superino"

  Note that "super" becomes "superino" and not "supererino"
*/

#include <stdio.h>


/* EDIT THIS FUNCTION ONLY, DO NOT ADD ANY OTHER LIBRARIES */
char * flanderise(char * input){

}
/* ***************** */

int main(){
    char input[200];
    fgets(input, 200, stdin);
    printf("Input String is:\n%s\nFlanderised String is:\n%s\n", input, flanderise(input));
    return 0;
}
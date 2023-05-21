#include "simple_shell.h"


char* getcommand()  /* DISPLAY THE COMMAND PROMPT*/
{
    printf("Please enter a incommand:  ");
    printf(" $  ");

    char * incommand;
    size_t init_size = 0;
    size_t Command_length = getline (&incommand, &init_size, stdin);

if (Command_length == -1) /*incommand not taken*/
    {
        puts("ERROR!");
        perror("Error (getline)");
        free(incommand);
        exit(EXIT_FAILURE);
    }

/*TOKENIZE THE STRING*/
 int length = 0;
    int capacity = 2;

    char **Command = malloc(capacity * sizeof(char*));
    if (!Command) {
        perror("Error Command");
        exit(1);
    }

    char *delimiters = " \r\n\t";
    char *token = strtok(incommand, delimiters);

    while (token != NULL) {
        Command[length] = token;
        length++;

        if (length >= capacity) 
        {
            capacity = (int) (capacity * 1.5);
            Command = realloc(Command, capacity * sizeof(char*));
            if (!Command) {
                perror("kash");
                exit(1);
            }
        }

        token = strtok(NULL, delimiters);
    }

    Command[length] = NULL;


        //printf("%s\n",*Command);
   

/*TOKENIZE*/


return incommand;
}

int main()
{
    // GET LINE
   getcommand(); /* DISPLAY THE COMMAND PROMPT*/

}

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
 int i = 0;
    int capacity = 2;

    char **Command = malloc(capacity * sizeof(char*));
    if (!Command) {
        perror("Error Command");
        exit(1);
    }

    char *delimiters = " \r\n\t";
    char *token = strtok(incommand, delimiters);

    while (token != NULL) {
        Command[i] = token;
        i++;

        if (i >= capacity) 
        {
            capacity = (int) (capacity * 2);
            Command = realloc(Command, capacity * sizeof(char*));
            if (!Command) {
                perror("kash");
                exit(1);
            }
        }

        token = strtok(NULL, delimiters);
    }

    Command[i] = NULL;

return incommand;
}

void executes()
{ /*EXECUTE*/

/*CHILD PROCESS AND EXECUTE*/
    
    int state;
    pid_t is_child = fork();
    
    if(is_child == 0)
    {
       
        /*EXECUTE*/
    }

    if(waitpid(is_child,&state,0) == -1)
    {
        perror("Error (wait)");
        exit(EXIT_FAILURE);
    }

    if(is_child == -1)    /*FORK FAILLED*/
    {
        perror("Error (fork)");
        exit(EXIT_FAILURE);
    }

   // free(Command);
}


int main()
{
    // GET LINE
   getcommand(); /* DISPLAY THE COMMAND PROMPT*/
   executesz();

}

#ifndef SHELL_H
#define SHELL_H
char *read_line(void);
char **strtoken(char *string);
char **executer(char **array);
#endif

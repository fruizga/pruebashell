#ifndef SHELL_H
#define SHELL_H
char *read_line(void);
char **strtoken(char *string);
int lsh_cd(char **args);
int lsh_ls(char **args);
int starter(char **args);
int execute(char **args);

char *builtin_str[] = {
  "cd",
  "ls"
};

int (*builtin_func[]) (char **) = {
  &lsh_cd,
  &lsh_ls
};

int lsh_num_builtins()
{
	return sizeof(builtin_str) / sizeof(char *);
}
#endif

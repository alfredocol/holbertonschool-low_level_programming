/**
 * set_string- sets the value of a pointer to a char.
 * @s: pointer to address of address of string
 * @s: pointer to string
 *
 * Return: void
 
void set_string(char **s, char *to)
{
	*s = to;
}
int main(void)
{
    char *s0 = "Anne Cognet";
    char *s1 = "Asaia Palacios";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}

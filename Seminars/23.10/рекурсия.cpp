int main()

int f = 5;

printf ("%d\n", fact(f));

return 0;


int fact (int)
    {
    if (f == 1)
        return 1;

    else
        return f * fact(f-1);

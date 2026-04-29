#include <stdio.h>
void PrintTableHeader ()
{
    printf ("\n**************************************************************************************************************************************************************************************\n");
    printf ("\n\t\t\t\t\t\t\t\t\tMultiplication Table from 1 to 10\t\t\t\n\n");

}
void PrintTableHeader2()
{
    printf ("\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
void printf_last_header()
{
        printf ("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
void print_numbers ()
{
    int i = 1;
    while (i <= 10)
    {
        printf ("\t\t  %d",i);
        i++;
    }
}
void print_numbers2 (int i)
{
        printf ("%d  ",i);
}
char *ColumSperator(int i)
{
    if (i < 10)
    {
        return "    ";
    }
    else 
    {
        return "   ";
    }
}
char *print_sahm (int i)
{
    if (i < 10)
    {
        return "  ->";
    }
    else 
    {
       return " -> ";
    }
}
char *ColumSperator2(int i)
{
    if (i < 10)
    {
        return "   |";
    }
    else 
    {
        return "   |";
    }
}
void PrintMultiplicationTable ()
{
    PrintTableHeader();
        print_numbers();
    PrintTableHeader2();
    int i = 1 ;
    int j ;
    int som ;
    while (i <= 10)
    {
        print_numbers2(i);
        printf ("%s",print_sahm(i));
        printf ("%s",ColumSperator(i));
        j = 1;
        while (j <= 10)
        {
            som = i * j ;
            printf ("%s",ColumSperator2(som));
            printf ("\t  %d\t",som);
            j++;
        }
        printf ("\n");
        i++;
    }
    printf_last_header();
}
int main ()
{
    PrintMultiplicationTable();
}
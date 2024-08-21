#include "rna_transcription.h"
#include "string.h"
#include "stdlib.h"
#include "string.h"

char *to_rna(const char *dna)
{
    // Allocate memory dynamically for the RNA string
    char *rna = malloc(strlen(dna) + 1); // +1 for the null terminator

    if (rna == NULL)
    {
        return NULL; // Memory allocation failed
    }

    int i = 0;
    while (dna[i] != '\0')
    {
        if (dna[i] == 'G')
        {
            rna[i] = 'C';
        }
        else if (dna[i] == 'C')
        {
            rna[i] = 'G';
        }
        else if (dna[i] == 'T')
        {
            rna[i] = 'A';
        }
        else if (dna[i] == 'A')
        {
            rna[i] = 'U';
        }
        else
        {
            free(rna);   // Free the allocated memory if an invalid character is found
            return NULL; // Return NULL for invalid input
        }
        i++;
    }

    rna[i] = '\0'; // Null-terminate the RNA string
    return rna;    // Return the dynamically allocated RNA string
}
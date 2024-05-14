#include <stdio.h>

int main()
{
    char *canChange = "Ayana Rukasar";
    char cannotChange[] = "Ayana Rukasar";

    //re-initializing:
    canChange = "Aamir waris";
    // cannotChange = "Aamir Waris"; //getting error message while coding itself red line hover: expression must be a modifiable lvalue

    printf("Can Change your name: %s\n", canChange);
    printf("Cannot change your name: %s\n", cannotChange);

    return 0;
}

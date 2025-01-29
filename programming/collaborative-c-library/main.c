#include "include/utils.h"
#include <stdio.h>
int main() {
    printf("Hello reversed is %s\n",reverse_string("Hello"));
    printf("shivam in uppercase is %s\n",to_uppercase("shivam"));
    printf("SHIVAM in lower case is %s\n",to_lowercase("SHIVAM"));
    if(substring_search("feather","lath")!=-1)
        {printf("lath is a substing of feather\n");}
    else{
        printf("lath is not a substing of feather\n");}

    printf("The number of vowels in education is %d\n",count_number_of_vowels("education"));
    printf("The number of consonant in university is %d\n",count_number_of_consonants("university"));
    printf("The number of words in 'Education is a powerful weapon' is:  %d\n",count_number_of_words("Education is a powerful weapon"));
    printf("The number of sentence in 'He walked.She did too!' is: %d\n",count_number_of_sentences("He walked.She walked too!"));
    printf("The no. of occurances of 'the' in the statement 'She went to the store and bought the book on the shelf' is: %d",count_number_of_occurrences("She went to the store and bought the book on the shelf","the"));
    return 0;

}

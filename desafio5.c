#include <stdio.h>
#include <string.h>

    void inverter_string(char s[]) {
    int n = strlen(s);
    char invertida[n + 1];
    
    for (int i = 0; i < n; i++) {
        invertida[i] = s[n - 1 - i];
    }
    
    invertida[n] = '\0';
    
        printf("String original: %s\n", s);
        printf("String invertida: %s\n", invertida);
}

    int main() {
    
    char string[] = "Target";
    
    inverter_string(string);
    
    return 0;
}

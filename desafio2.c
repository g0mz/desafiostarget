#include <stdio.h>

    int pertence_fibonacci(int numero) {
        int a = 0, b = 1, temp;
        
        if (numero == 0) 
        return 1;

        while (b < numero) {
        temp = b;
        b = a + b;
        a = temp;
        }

        return (b == numero);
}

    int main() {

    int numero = 10; 
    
            if (pertence_fibonacci(numero))
                printf("O número %d pertence à sequência de Fibonacci.\n", numero);
            else
                printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    
        return 0;
}

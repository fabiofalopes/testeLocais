#include <stdio.h>


void drawFrame(int width, int height, char frameChar) {
    // Draw top border
    for (int i = 0; i < width; i++) {
        printf("%c", frameChar);
    }
    printf("\n");

    // Draw sides
    for (int i = 1; i < height - 1; i++) {
        printf("%c", frameChar);
        for (int j = 1; j < width - 1; j++) {
            printf(" ");
        }
        printf("%c\n", frameChar);
    }

    // Draw bottom border
    for (int i = 0; i < width; i++) {
        printf("%c", frameChar);
    }
}

int main(int argc, char *argv[]) {



  printf("Hello world!\n");
  drawFrame(10,10,'*');


  return 0;
}

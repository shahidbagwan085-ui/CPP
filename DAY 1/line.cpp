#include <stdio.h>

float getPrintableHeight() {
    return 11 - 2;  
float getLineHeight(float pointSize, int spacing) {
    float height = pointSize / 72;
    if (spacing == 2)
        height = height * 2;
    return height;
}

int calculateLines(float printableHeight, float lineHeight) {
    return printableHeight / lineHeight;
}

int main() {
    float pointSize;
    int spacing;

    printf("Enter point size: ");
    scanf("%f", &pointSize);

    printf("Enter spacing (1 = single, 2 = double): ");
    scanf("%d", &spacing);

    float printableHeight = getPrintableHeight();
    float lineHeight = getLineHeight(pointSize, spacing);
    int totalLines = calculateLines(printableHeight, lineHeight);

    printf("Number of lines = %d\n", totalLines);

    return 0;
}

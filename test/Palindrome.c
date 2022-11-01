#include <stdio.h>
#include <ctype.h>

int main() {
	char sentence[50] = {'\0'};
	printf("Enter a message:");
	char chart;
	int i = 0;
	while (1) {
		chart = getchar();
		if ((chart <= 'Z' && chart >= 'A') || (chart >= 'a' && chart <= 'z')) {
		    chart = tolower(chart);
			sentence[i++] = chart;
		}
		if (chart == '\n')
			break;
	}
    printf("%d",i);
    for(int k=0;k<i;k++)
    {
        if(sentence[k] != sentence[i-k-1])
        {
            printf("\nbushi");
            break;
        }
    }
    printf("\nshi");
	return 0;
}
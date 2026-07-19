#include<stdio.h>
#include<math.h>
void main()
{
    float red,green,blue,white,cyan,magenta,yellow,black,temp;
    printf("Enter the value of red,green and blue:");
    scanf("%f %f %f",&red,&green,&blue);
    temp=fmax(red/255.0,green/255.0);
    white=fmax(blue/255.0,temp);
    cyan=(white-(red/255.0))/white;
    magenta=(white-(green/255.0))/white;
    yellow=(white-(blue/255.0))/white;
    black=1-white;
    printf("%f %f %f %f",cyan,magenta,yellow,black);
}
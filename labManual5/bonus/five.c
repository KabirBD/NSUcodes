/*
Write a C program that reads the first letter of direction (North, South,
East, West), current (x,y) coordinate, and advancement of a person and
prints the new coordinate. For e.g., if the current coordinate of a person in X,Y plane is (2,3) and s/he advances 6 units towards North, then his/her new
coordinate is (2,3+6)=(2,9).
*/

#include <stdio.h>
void main()
{
    int x, y, mv;
    printf("Enter current coordinate (x and y positions): ");
    scanf("%d %d", &x, &y);

    printf("Enter No. units towards direction: ");
    scanf("%d", &mv);

    char dir;
    printf("Enter Direction: ");
    scanf("\n%c", &dir);

    switch (dir)
    {
    case 'N':
        printf("New coordinate: (%d,%d)", x, y + mv);
        break;
    case 'S':
        printf("New coordinate: (%d,%d)", x, y - mv);
        break;
    case 'E':
        printf("New coordinate: (%d,%d)", x + mv, y);
        break;
    case 'W':
        printf("New coordinate: (%d,%d)", x - mv, y);
    }
}
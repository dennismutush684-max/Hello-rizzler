//2D areay
#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    // Input occupancy data
    printf("Enter occupancy (1=occupied, 0=vacant):\n");
    for (floor = 0; floor < 5; floor++) {
        printf("Floor %d:\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("  Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Display per floor
    printf("\nOccupancy Report:\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied++;
            }
        }
        vacant = 10 - occupied;
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
//3D array 
#include <stdio.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int occupied, vacant;
    int totalOccupied = 0;

    // Input for all branches
    for (branch = 0; branch < 3; branch++) {
        printf("\nEnter occupancy for Branch %d:\n", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                printf("Branch %d Floor %d Room %d (1/0): ", branch+1, floor+1, room+1);
                scanf("%d", &chain[branch][floor][room]);
            }
        }
    }

    // Report per branch and floor
    printf("\n--- Hotel Chain Occupancy Report ---\n");
    for (branch = 0; branch < 3; branch++) {
        printf("\nBranch %d:\n", branch + 1);
        int branchOccupied = 0;
        for (floor = 0; floor < 5; floor++) {
            occupied = 0;
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1) occupied++;
            }
            vacant = 10 - occupied;
            branchOccupied += occupied;
            printf("  Floor %d -> Occupied: %d, Vacant: %d\n", floor+1, occupied, vacant);
        }
        printf("Total Occupied in Branch %d: %d/50\n", branch+1, branchOccupied);
        totalOccupied += branchOccupied;
    }
    printf("\nTotal Occupied in Entire Chain: %d/150\n", totalOccupied);

    return 0;
}
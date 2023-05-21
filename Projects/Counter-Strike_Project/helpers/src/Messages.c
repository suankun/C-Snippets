#include "Messages.h"
#include <stdio.h>

void printWinnerId(int playerId)
{
    printf("\nPlayer with ID: %d wins!\n", playerId);
}

void printShooterTurn(int playerId)
{
    printf("\nPlayerID %d turn:\n", playerId);
}

void printTargetVitalData(int health, int armor)
{
    printf("Enemy left with: %d health and %d armor\n", health, armor);
}

void printReloading(void)
{
    printf("Reloading...\n");
}

void printPistolData(int clipBullets, int remainingAmmo)
{
    printf("currClipBullets: %d, remainingAmmo: %d\n", clipBullets, remainingAmmo);
}

void printNoAmmoLeft(void)
{
    printf("No ammo left\n");
}

void printIncorrectPlayerData(void)
{
    printf("Error! Incorrect player data.\n");
}

void printIcorrectPistolData(void)
{
    printf("Error! Incorrect pistol data.\n");
}

void printPlayersRunOutOfAmmos(void)
{
    printf("\nBoth players are run out of ammo!\n");
}
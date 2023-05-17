# S03-Ed-Edd-n-Eddy
Starcraft by Ed, Edd &amp; Eddy


Starcraft

Intro

Your task is to write a program that represents an epic air battle from the famous computer game – “Starcraft”.
Two races have their large air armies ready to fight one another.
The Terran race(humans) will fight versus The Protoss race(space aliens).

Provided input
You are provided with folder called Skeleton, which contains:
- A header file that contains the most important information for the task.
- A Basic Skeleton to guide you in the initial direction. You don’t need to strictly follow it.

You are also provided with folder called tests, which contains all of the tests that your program should pass.
- There are a total of 13 tests. 13 inputs and 13 outputs. The 3 of the tests are copy of the ones described in this document. The other 10 are unique.

Task description
Your task is to provide to provide an implementation, which with the given standard input will produce the correct standard output (detailed description below).

The Terran air fleet consist of 2 types of ships:
Each Terran space ship has health indicator. When that indicator reaches 0 – the air ship is immediately destroyed.
    • Viking – a light human space ship.
Special ability 1: does double damage against enemy Protoss Phoenix space ships.

    • Battle Cruser – a heavy artillery human space ship. 
Special ability 1: every 5th turn the Battle Cruser performs a special attack “Yamato Cannon”,
which is 5 times more powerful than the normal attack. The “Yamato Cannon” attack substitutes the normal attack for that turn. Example: 
turns 1, 2, 3, 4 the Battle Cruser performs normal attack and on turn 5 it uses “Yamato Cannon”.
turns 6, 7, 8, 9 the Battle Cruser performs normal attack and on turn 10 it uses “Yamato Cannon”.

The Protoss air fleet:
Each Protoss air ship has health and shield indicators.
When the Protoss air ship is damaged the shield is first consumed. After the shield value reaches 0 the health indicator is starting to be consumed. 
When the health indicator reaches 0 – the air ship is immediately destroyed.
After each turn the protoss air ships regain some portion of their shield back. Shield indicator can Not exceed it’s maximum value.

Example: ship has 20 health and 50 shield. 
1) ship takes 40 damage -> left with 20 health and 10 shield.
2) ship regenerates 20 shield -> left with 20 health and 30 shield.
3) ship takes 40 damage -> left with 10 health and 0 shield
4) ship takes regenerates 20 shield -> left with 10 health and 20 shield
5) ship takes 40 damage -> left with -10 health (ship is immediately destroyed)


The Protoss air fleet consist of 2 ships:
    • Phoenix – a light alien space ship.
Special ability 1: regenerates 20 shield after it’s turn is finished
NOTE: after shield regeneration the shield value can Not exceed the ship maximum shield value.

    • Carrier – a heavy alien space ship that attacks with N small weapons (called Interceptors). 
Special ability 1: regenerates 40 shield after it’s turn is finished
NOTE: after shield regeneration the shield value can Not exceed the ship maximum shield value.

Special ability 2: The Carrier attacks N number of times on a single turn.
N is 8 (the Carrier attacks with 8 Interceptors), when the Carrier is at full health. (Health, not shield)
If the Carriers health is not at its maximum value – N becomes 4 (the Carrier attacks with only 4 Interceptors)

Example: 
Carrier has 150 health and 150 shield -> it attacks with 8 Interceptors
Carrier has 150 health and 50 shield -> it attacks with 8 Interceptors
Carrier has 149 health and 0 shield -> it attacks with 4 Interceptors
Carrier has 149 health and 150 shield -> it attacks with 4 Interceptors

You are given the main() function, which reads 2 strings (terranFleet and protossFleet).
terranFleet: consists of the letters ‘v’ and ‘b’ (for Viking and BattleCruser).
vvbb -> would mean array of 4 air ships.
Viking with index 0, Viking with index 1, BattleCruser with index 2, BattleCruser with index 3

protossFleet: consists of the letters ‘p’ and ‘c’ (for Phoenix and Carrier).
pcpcp -> would mean array of 5 air ships.
Phoenix with index 0, Carrier with index 1, Phoenix with index 2, Carrier with index 3, Phoenix with index 4
    • The air fleets take turns attacking each other.
    • First goes the Terran, then the Protoss, then Terran, then Protoss, etc … until one of the fleets is destroyed.
    • Every time when a fleet attacks the enemy fleet it ALWAYS TARGETS THE LAST SHIP (until that ship is dead). When the ship is dead it should be immediately removed from the air ship array and then the next last ship should be targeted.
Example: Terran fleet is: vvb
The protoss army will attack only the BattleCruser with Index 2 until that ship is dead. Once it is dead it should be removed from the terran air fleet array. The array is left with only 2 Viking ships.
Protoss will start to attack Viking with index 1.
    • Keep in mind that the Carrier ship attacks multiple times per single turn. If the Carrier happens to kill an enemy ship and still has shots left (Interceptors that have not fired) they are used on the next ship(if such exists).
    • In the perfect case scenario you should have multiple files for each individual air ship.

Console output
    • When a ship destroys an enemy ship you should print 
*ShipName* with ID: *ShipId* killed enemy airship with ID: “enemyShipID” (where *ShipName* is Viking, BattleCruser, Phoenix or Carrier)
and a newline

    • In the end of a Terran turn you should make a print
Last Protoss AirShip with ID: *ShipId* has *shipHealth* left and *shildShield* left
and a newline

    • In the end of a Protoss turn you should make a print
Last Terran AirShip with ID: *ShipId* has *shipHealth* left
and a newline

Restrictions
Code should compile under the C 11 standard.
Code should not use any non-standard extensions.

Examples
Input 
Output
vv
pp

Last Protoss AirShip with ID: 1 has 90 health and 30 shield left
Last Terran AirShip with ID: 1 has 110 health left
Last Protoss AirShip with ID: 1 has 80 health and 0 shield left
Last Terran AirShip with ID: 1 has 70 health left
Last Protoss AirShip with ID: 1 has 40 health and 0 shield left
Last Terran AirShip with ID: 1 has 30 health left
Viking with ID: 1 killed enemy airship with ID: 1
Last Protoss AirShip with ID: 0 has 90 health and 90 shield left
Last Terran AirShip with ID: 1 has 10 health left
Last Protoss AirShip with ID: 0 has 90 health and 30 shield left
Phoenix with ID: 0 killed enemy airship with ID: 1
Last Terran AirShip with ID: 0 has 150 health left
Last Protoss AirShip with ID: 0 has 90 health and 20 shield left
Last Terran AirShip with ID: 0 has 130 health left
Last Protoss AirShip with ID: 0 has 90 health and 10 shield left
Last Terran AirShip with ID: 0 has 110 health left
Last Protoss AirShip with ID: 0 has 90 health and 0 shield left
Last Terran AirShip with ID: 0 has 90 health left
Last Protoss AirShip with ID: 0 has 80 health and 0 shield left
Last Terran AirShip with ID: 0 has 70 health left
Last Protoss AirShip with ID: 0 has 70 health and 0 shield left
Last Terran AirShip with ID: 0 has 50 health left
Last Protoss AirShip with ID: 0 has 60 health and 0 shield left
Last Terran AirShip with ID: 0 has 30 health left
Last Protoss AirShip with ID: 0 has 50 health and 0 shield left
Last Terran AirShip with ID: 0 has 10 health left
Last Protoss AirShip with ID: 0 has 40 health and 0 shield left
Phoenix with ID: 0 killed enemy airship with ID: 0
PROTOSS has won!


b
c

Last Protoss AirShip with ID: 0 has 200 health and 110 shield left
Last Terran AirShip with ID: 0 has 386 health left
Last Protoss AirShip with ID: 0 has 200 health and 110 shield left
Last Terran AirShip with ID: 0 has 322 health left
Last Protoss AirShip with ID: 0 has 200 health and 110 shield left
Last Terran AirShip with ID: 0 has 258 health left
Last Protoss AirShip with ID: 0 has 200 health and 110 shield left
Last Terran AirShip with ID: 0 has 194 health left
Last Protoss AirShip with ID: 0 has 150 health and 0 shield left
Last Terran AirShip with ID: 0 has 162 health left
Last Protoss AirShip with ID: 0 has 150 health and 0 shield left
Last Terran AirShip with ID: 0 has 130 health left
Last Protoss AirShip with ID: 0 has 150 health and 0 shield left
Last Terran AirShip with ID: 0 has 98 health left
Last Protoss AirShip with ID: 0 has 150 health and 0 shield left
Last Terran AirShip with ID: 0 has 66 health left
Last Protoss AirShip with ID: 0 has 150 health and 0 shield left
Last Terran AirShip with ID: 0 has 34 health left
BattleCruser with ID: 0 killed enemy airship with ID: 0
TERRAN has won!

bvbvv
pcpc

Last Protoss AirShip with ID: 3 has 200 health and 25 shield left
Carrier with ID: 3 killed enemy airship with ID: 4
Last Terran AirShip with ID: 3 has 134 health left
Last Protoss AirShip with ID: 3 has 155 health and 0 shield left
Carrier with ID: 3 killed enemy airship with ID: 3
Last Terran AirShip with ID: 2 has 450 health left
Last Protoss AirShip with ID: 3 has 100 health and 0 shield left
Last Terran AirShip with ID: 2 has 314 health left
Last Protoss AirShip with ID: 3 has 45 health and 0 shield left
Last Terran AirShip with ID: 2 has 178 health left
BattleCruser with ID: 0 killed enemy airship with ID: 3
BattleCruser with ID: 2 killed enemy airship with ID: 2
Last Protoss AirShip with ID: 1 has 200 health and 150 shield left
Last Terran AirShip with ID: 2 has 94 health left
Last Protoss AirShip with ID: 1 has 200 health and 55 shield left
Last Terran AirShip with ID: 2 has 10 health left
Last Protoss AirShip with ID: 1 has 200 health and 0 shield left
Phoenix with ID: 0 killed enemy airship with ID: 2
Last Terran AirShip with ID: 1 has 86 health left
Last Protoss AirShip with ID: 1 has 185 health and 0 shield left
Last Terran AirShip with ID: 1 has 34 health left
Last Protoss AirShip with ID: 1 has 170 health and 0 shield left
Carrier with ID: 1 killed enemy airship with ID: 1
Last Terran AirShip with ID: 0 has 434 health left
Last Protoss AirShip with ID: 1 has 10 health and 0 shield left
Last Terran AirShip with ID: 0 has 382 health left
Last Protoss AirShip with ID: 1 has 10 health and 0 shield left
Last Terran AirShip with ID: 0 has 330 health left
Last Protoss AirShip with ID: 1 has 10 health and 0 shield left
Last Terran AirShip with ID: 0 has 278 health left
Last Protoss AirShip with ID: 1 has 10 health and 0 shield left
Last Terran AirShip with ID: 0 has 226 health left
Last Protoss AirShip with ID: 1 has 10 health and 0 shield left
Last Terran AirShip with ID: 0 has 174 health left
BattleCruser with ID: 0 killed enemy airship with ID: 1
Last Protoss AirShip with ID: 0 has 90 health and 90 shield left
Last Terran AirShip with ID: 0 has 154 health left
Last Protoss AirShip with ID: 0 has 90 health and 50 shield left
Last Terran AirShip with ID: 0 has 134 health left
Last Protoss AirShip with ID: 0 has 90 health and 30 shield left
Last Terran AirShip with ID: 0 has 114 health left
Last Protoss AirShip with ID: 0 has 90 health and 10 shield left
Last Terran AirShip with ID: 0 has 94 health left
Last Protoss AirShip with ID: 0 has 80 health and 0 shield left
Last Terran AirShip with ID: 0 has 74 health left
BattleCruser with ID: 0 killed enemy airship with ID: 0
TERRAN has won!




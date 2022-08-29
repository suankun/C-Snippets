/*
 * Write a PrintPatterns program that prints the following
 * text graphics on the screen. The graphs are one below the other:
 * # # # # # # # # # # #            #                         #
 *   # # # # # # # # #            # # #                     # # #
 *     # # # # # # #            # # # # #                 # # # # #
 *       # # # # #            # # # # # # #             # # # # # # #
 *         # # #            # # # # # # # # #         # # # # # # # # #
 *           #            # # # # # # # # # # #     # # # # # # # # # # #
 *          (a)                    (b)                # # # # # # # # #
 *                                                      # # # # # # #
 *                                                        # # # # #
 *                                                          # # #
 *                                                            #
 *                                                           (c)
 */

#include <stdio.h>

void printPatternA() {
	printf("# # # # # # # # # # #\n");
    printf("  # # # # # # # # #\n");
    printf("    # # # # # # #\n");
    printf("      # # # # #\n");
    printf("        # # #\n");
    printf("          #\n");
    printf("         (a)\n\n");
}

void printPatternB() {
	printf("          #\n");
    printf("        # # #\n");
    printf("      # # # # #\n");
    printf("    # # # # # # #\n");
    printf("  # # # # # # # # #\n");
    printf("# # # # # # # # # # #\n");
    printf("         (b)\n\n");
}

void printPatternC() {
	printf("          #\n");
    printf("        # # #\n");
    printf("      # # # # #\n");
    printf("    # # # # # # #\n");
    printf("  # # # # # # # # #\n");
    printf("# # # # # # # # # # #\n");
    printf("  # # # # # # # # #\n");
    printf("    # # # # # # #\n");
    printf("      # # # # #\n");
    printf("        # # #\n");
    printf("          #\n");
    printf("         (c)\n");
}

int main()
{
    // printing pattern "a"
	printPatternA();

    // printing pattern "b"
	printPatternB();
    
    // printing pattern "c"
    printPatternC();

    return 0;
}
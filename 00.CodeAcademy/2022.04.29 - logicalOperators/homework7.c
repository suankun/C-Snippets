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

int main()
{
    /*Printing pattern "a".*/
    printf("# # # # # # # # # # #\n");
    printf("  # # # # # # # # #\n");
    printf("    # # # # # # #\n");
    printf("      # # # # #\n");
    printf("        # # #\n");
    printf("          #\n");
    printf("         (a)\n\n");
    /*Printing pattern "b".*/
    printf("          #\n");
    printf("        # # #\n");
    printf("      # # # # #\n");
    printf("    # # # # # # #\n");
    printf("  # # # # # # # # #\n");
    printf("# # # # # # # # # # #\n");
    printf("         (b)\n\n");
    /*Printing pattern "b".*/
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

    return 0;
}
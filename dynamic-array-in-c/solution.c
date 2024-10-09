#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 * It is an array where each element represents the number of books on that shelf.
 */
int *total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves, and the columns represent the books on each shelf.
 * Each element holds the number of pages in a specific book.
 */

int **total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    // Allocating memory to store the total number of books on each shelf (initially 0 for all shelves).
    total_number_of_books = calloc(total_number_of_shelves, sizeof(int));

    // Allocating memory for an array of pointers (each pointing to a shelf), where each shelf will hold book page counts.
    total_number_of_pages = malloc(total_number_of_shelves * sizeof(int *));

    // Allocating memory for each shelf to store the page count of up to 1100 books.
    // calloc is used to initialize all values to 0.
    for (int i = 0; i < total_number_of_shelves; i++)
    {
        total_number_of_pages[i] = calloc(1100, sizeof(int)); // Allocating space for 1100 books per shelf.
    }

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    while (total_number_of_queries--)
    {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1)
        {
            /*
             * Query of type 1: Insert a book with `pages` pages at the end of the `shelf`.
             */
            int shelf, pages;
            scanf("%d %d", &shelf, &pages);

            // Increment the number of books on the specified shelf.
            total_number_of_books[shelf]++;

            // `book` is a temporary pointer to traverse the array of books on the shelf to find an empty spot.
            int *book = total_number_of_pages[shelf];

            // Find the first empty spot (indicated by 0) to place the new book.
            while (*book != 0)
            {
                book++;
            }

            *book = pages; // Place the new book (with the given number of pages) in the found empty spot.
        }
        else if (type_of_query == 2)
        {
            /*
             * Query of type 2: Print the number of pages in the y-th book on the x-th shelf.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        }
        else
        {
            /*
             * Query of type 3: Print the number of books on the x-th shelf.
             */
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    // Free the memory allocated for total_number_of_books array.
    if (total_number_of_books)
    {
        free(total_number_of_books);
    }

    // Free the memory allocated for each shelf in total_number_of_pages.
    for (int i = 0; i < total_number_of_shelves; i++)
    {
        if (*(total_number_of_pages + i))
        {
            free(*(total_number_of_pages + i));
        }
    }

    // Free the memory allocated for total_number_of_pages array.
    if (total_number_of_pages)
    {
        free(total_number_of_pages);
    }

    return 0;
}

#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stk_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stk_s
{
	int n;
	struct stk_s *prev;
	struct stk_s *next;
} stk_t;
/**
 * struct bs_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @cont: line content
 * @lif: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bs_s
{
	char *arg;
	FILE *file;
	char *cont;
	int lif;
}  bs_t;
extern bs_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stk_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stk_t **head, unsigned int number);
void f_pall(stk_t **head, unsigned int number);
void _pint(stk_t **hd, unsigned int cntr);
int execute(char *content, stk_t **head, unsigned int counter, FILE *file);
void free_stack(stk_t *head);
void f_pop(stk_t **head, unsigned int counter);
void f_swap(stk_t **head, unsigned int counter);
void f_add(stk_t **head, unsigned int counter);
void f_nop(stk_t **head, unsigned int counter);
void f_sub(stk_t **head, unsigned int counter);
void f_div(stk_t **head, unsigned int counter);
void f_mul(stk_t **head, unsigned int counter);
void f_mod(stk_t **head, unsigned int counter);
void f_pchar(stk_t **head, unsigned int counter);
void f_pstr(stk_t **head, unsigned int counter);
void f_rotl(stk_t **head, unsigned int counter);
void f_rotr(stk_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stk_t **head, int n);
void addqueue(stk_t **head, int n);
void f_queue(stk_t **head, unsigned int counter);
void f_stack(stk_t **head, unsigned int counter);
#endif
